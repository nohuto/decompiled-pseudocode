/*
 * XREFs of ?GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z @ 0x1C017FFC0
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00EBFB0 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C017FE5C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetFileVersion(
        ADAPTER_RENDER *this,
        void *a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4)
{
  PVOID v8; // r14
  char v9; // r12
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  NTSTATUS v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  int Resource; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // [rsp+58h] [rbp-A0h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-98h] BYREF
  __int64 v33; // [rsp+68h] [rbp-90h] BYREF
  __int64 v34; // [rsp+70h] [rbp-88h] BYREF
  void *SectionHandle; // [rsp+78h] [rbp-80h] BYREF
  PVOID Object; // [rsp+80h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v8 = 0LL;
  SectionHandle = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  MappedBase = 0LL;
  v9 = 1;
  memset(&ApcState, 0, sizeof(ApcState));
  v34 = 0LL;
  a3->ObjectName = 0LL;
  v10 = ZwCreateSection(&SectionHandle, 4u, a3, 0LL, 2u, 0x1000000u, a2);
  v14 = v10;
  if ( v10 < 0 )
    goto LABEL_19;
  v15 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, &Object, 0LL);
  v14 = v15;
  v8 = Object;
  if ( v15 < 0 )
    goto LABEL_19;
  v16 = MmMapViewInSystemSpaceEx(Object, &MappedBase, &v31, &v33, 1LL);
  v20 = v16;
  if ( v16 >= 0 )
    goto LABEL_4;
  v29 = WdLogNewEntry5_WdWarning(v18, v17, v19);
  *(_QWORD *)(v29 + 24) = *((_QWORD *)this + 2);
  *(_QWORD *)(v29 + 32) = v20;
  WdLogEvent5_WdWarning(v29);
  MappedBase = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v9 = 0;
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  v30 = MmMapViewOfSection(v8, PsInitialSystemProcess, &MappedBase, 0LL, 0LL, &v33, &v31, 2, 0, 2, 0);
  v14 = v30;
  if ( v30 < 0 )
  {
LABEL_19:
    v28 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v28 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v28 + 32) = v14;
    WdLogEvent5_WdError(v28);
  }
  else
  {
LABEL_4:
    a4->QuadPart = 0LL;
    Resource = LdrResFindResource(MappedBase, 16LL, 1LL, 0LL, &v34, &v31, 0LL, 0LL, 16);
    v14 = Resource;
    if ( Resource < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v23, v22, v24);
      *(_QWORD *)(v26 + 24) = *((_QWORD *)this + 2);
      *(_QWORD *)(v26 + 32) = v14;
      WdLogEvent5_WdError(v26);
      LODWORD(v14) = 0;
    }
    else if ( v31 >= 0x5C && !wcsncmp((const wchar_t *)(v34 + 6), L"VS_VERSION_INFO", 0x20uLL) )
    {
      v25 = v34;
      a4->HighPart = *(_DWORD *)(v34 + 48);
      a4->LowPart = *(_DWORD *)(v25 + 52);
    }
  }
  if ( MappedBase )
  {
    if ( v9 )
      MmUnmapViewInSystemSpace(MappedBase);
    else
      MmUnmapViewOfSection(PsInitialSystemProcess);
  }
  if ( !v9 )
    KeUnstackDetachProcess(&ApcState);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  return (unsigned int)v14;
}
