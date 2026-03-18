/*
 * XREFs of ?GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z @ 0x1C015BC98
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C012A864 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C015BB5C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetFileVersion(
        ADAPTER_RENDER *this,
        void *FileHandle,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4)
{
  PVOID v6; // rsi
  char v7; // r15
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  int Resource; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // [rsp+58h] [rbp-A0h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-98h] BYREF
  __int64 v27; // [rsp+68h] [rbp-90h] BYREF
  __int64 v28; // [rsp+70h] [rbp-88h] BYREF
  void *SectionHandle; // [rsp+78h] [rbp-80h] BYREF
  PVOID Object; // [rsp+80h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v6 = 0LL;
  SectionHandle = 0LL;
  v25 = 0LL;
  MappedBase = 0LL;
  v7 = 1;
  v28 = 0LL;
  a3->ObjectName = 0LL;
  v8 = ZwCreateSection(&SectionHandle, 4u, a3, 0LL, 2u, 0x1000000u, FileHandle);
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_19;
  v11 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, &Object, 0LL);
  v10 = v11;
  v6 = Object;
  if ( v11 < 0 )
    goto LABEL_19;
  v27 = 0LL;
  v12 = MmMapViewInSystemSpaceEx(Object, &MappedBase, &v25, &v27, 1LL);
  v16 = v12;
  if ( v12 >= 0 )
    goto LABEL_4;
  v23 = WdLogNewEntry5_WdWarning(v14, v13, v15);
  *(_QWORD *)(v23 + 24) = *((_QWORD *)this + 2);
  *(_QWORD *)(v23 + 32) = v16;
  WdLogEvent5_WdWarning(v23);
  MappedBase = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v7 = 0;
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  v24 = MmMapViewOfSection(v6, PsInitialSystemProcess, &MappedBase, 0LL, 0LL, &v27, &v25, 2, 0, 2, 0);
  v10 = v24;
  if ( v24 < 0 )
  {
LABEL_19:
    v22 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v22 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v22 + 32) = v10;
    WdLogEvent5_WdError(v22);
  }
  else
  {
LABEL_4:
    a4->QuadPart = 0LL;
    Resource = LdrResFindResource(MappedBase, 16LL, 1LL, 0LL, &v28, &v25, 0LL, 0LL, 16);
    v10 = Resource;
    if ( Resource < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v20 + 24) = *((_QWORD *)this + 2);
      *(_QWORD *)(v20 + 32) = v10;
      WdLogEvent5_WdError(v20);
      LODWORD(v10) = 0;
    }
    else if ( v25 >= 0x5C && !wcsncmp((const wchar_t *)(v28 + 6), L"VS_VERSION_INFO", 0x20uLL) )
    {
      v19 = v28;
      a4->HighPart = *(_DWORD *)(v28 + 48);
      a4->LowPart = *(_DWORD *)(v19 + 52);
    }
  }
  if ( MappedBase )
  {
    if ( v7 )
      MmUnmapViewInSystemSpace(MappedBase);
    else
      MmUnmapViewOfSection(PsInitialSystemProcess);
  }
  if ( !v7 )
    KeUnstackDetachProcess(&ApcState);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  return (unsigned int)v10;
}
