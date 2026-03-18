/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C0016D50
 * Callers:
 *     <none>
 * Callees:
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C001628C (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        char *Src,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5)
{
  ULONG64 v6; // r14
  int LocallyUniqueId; // edi
  PVOID PoolWithTag; // rsi
  unsigned __int128 v10; // rax
  ULONG64 v11; // rcx
  unsigned __int64 v12; // kr00_8
  size_t v13; // r14
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  PVOID v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+58h] [rbp-A0h] BYREF
  PVOID v22; // [rsp+60h] [rbp-98h]
  HANDLE Handle; // [rsp+68h] [rbp-90h] BYREF
  PVOID v24; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-80h]
  __int64 v26; // [rsp+80h] [rbp-78h]
  __int64 v27; // [rsp+88h] [rbp-70h]
  __int64 v28; // [rsp+90h] [rbp-68h]
  _DWORD v29[2]; // [rsp+98h] [rbp-60h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-58h]
  __int64 v31; // [rsp+A8h] [rbp-50h]
  int v32; // [rsp+B0h] [rbp-48h]
  int v33; // [rsp+B4h] [rbp-44h]
  __int64 v34; // [rsp+B8h] [rbp-40h]
  __int64 v35; // [rsp+C0h] [rbp-38h]
  __int64 v36; // [rsp+C8h] [rbp-30h]
  PVOID Object; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+108h] [rbp+10h]
  unsigned int v39; // [rsp+110h] [rbp+18h]

  v39 = a3;
  v38 = a2;
  v6 = a2;
  LocallyUniqueId = 0;
  Handle = (HANDLE)-1LL;
  PoolWithTag = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  KeEnterCriticalRegion();
  if ( !Src || !(_DWORD)v6 || !v39 || !a4 )
    LocallyUniqueId = -1073741811;
  if ( LocallyUniqueId >= 0 )
  {
    v11 = v6;
    v12 = v6;
    v10 = v6 * (unsigned __int128)0x18uLL;
    v36 = *((_QWORD *)&v10 + 1);
    v13 = 24 * v6;
    if ( is_mul_ok(v12, 0x18uLL) )
    {
      v27 = v10;
      LocallyUniqueId = 0;
    }
    else
    {
      v13 = -1LL;
      v27 = -1LL;
      LocallyUniqueId = -1073741675;
    }
    if ( LocallyUniqueId >= 0 )
    {
      v10 = v11 * (unsigned __int128)0x18uLL;
      if ( !is_mul_ok(v11, 0x18uLL) )
        *(_QWORD *)&v10 = -1LL;
      if ( !(_QWORD)v10 )
        *(_QWORD *)&v10 = 1LL;
      if ( (unsigned __int64)v10 <= 0x7FFFFFFF )
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x62634D54u);
      v22 = PoolWithTag;
      if ( !PoolWithTag )
        LocallyUniqueId = -1073741801;
    }
    if ( LocallyUniqueId < 0 )
    {
      LODWORD(v6) = v38;
    }
    else
    {
      if ( &Src[v13] < Src || (unsigned __int64)&Src[v13] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(PoolWithTag, Src, v13);
      v11 = (ULONG64)(a4 + 1);
      if ( a4 + 1 < a4 || v11 > MmUserProbeAddress )
        a4 = (__int64 *)MmUserProbeAddress;
      v28 = *a4;
      LocallyUniqueId = 0;
      LODWORD(v6) = v38;
    }
  }
  if ( LocallyUniqueId >= 0 )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v19 = WdLogNewEntry5_WdAssertion(v11, *((_QWORD *)&v10 + 1));
      *(_QWORD *)(v19 + 24) = 2201LL;
      WdLogEvent5_WdAssertion(v19);
    }
    LocallyUniqueId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 192LL))(
                        0x80000000LL,
                        &v21);
    if ( LocallyUniqueId >= 0 )
    {
      v29[1] = 0;
      v33 = 0;
      v29[0] = 48;
      v30 = 0LL;
      v32 = 0;
      v31 = 0LL;
      v34 = v21;
      v35 = 0LL;
      v24 = PoolWithTag;
      v25 = __PAIR64__(v39, v6);
      v26 = v28;
      Object = 0LL;
      LOBYTE(v14) = 1;
      LocallyUniqueId = ObCreateObject(0LL, g_pDxgkCompositionObjectType, v29, v14, 0LL, 136, 0, 0, &Object);
      if ( LocallyUniqueId >= 0 )
      {
        CurrentProcess = PsGetCurrentProcess();
        ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
        *((_DWORD *)Object + 2) = ProcessSessionId;
        LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 3);
        v17 = Object;
        if ( LocallyUniqueId < 0
          || (LocallyUniqueId = CompositionTokenObject::ObjectInit(
                                  (struct DxgkCompositionObject *)Object,
                                  (const struct CompositionTokenInitInfo *)&v24,
                                  (struct IDxgkCompositionObject **)Object + 2),
              v17 = Object,
              LocallyUniqueId < 0) )
        {
          ObfDereferenceObject(v17);
        }
        else
        {
          LocallyUniqueId = ObInsertObject(Object, 0LL, 3u, 0, 0LL, &Handle);
        }
      }
      if ( LocallyUniqueId >= 0 )
      {
        *((_QWORD *)&v10 + 1) = a5;
        if ( a5 )
        {
          if ( a5 + 8 < a5 || a5 + 8 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          **((_QWORD **)&v10 + 1) = Handle;
        }
        else
        {
          LocallyUniqueId = -1073741811;
        }
      }
    }
  }
  if ( v21 )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v20 = WdLogNewEntry5_WdAssertion(v21, *((_QWORD *)&v10 + 1));
      *(_QWORD *)(v20 + 24) = 2201LL;
      WdLogEvent5_WdAssertion(v20);
    }
    (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 312LL))();
  }
  if ( LocallyUniqueId < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)LocallyUniqueId;
}
