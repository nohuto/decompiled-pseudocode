/*
 * XREFs of DpiFdoHandleQueryThermalInterface @ 0x1C02AA150
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiQueryMiniportInterface @ 0x1C0163FF8 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoHandleQueryThermalInterface(_QWORD *Object, __int16 a2, __int16 a3, _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int MiniportInterface; // esi
  __int64 v18; // r8
  __int64 v19; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-68h]
  _QWORD Src[8]; // [rsp+30h] [rbp-58h] BYREF

  memset(Src, 0, 0x38uLL);
  v11 = Object[8];
  if ( a3 != 1 )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = 0LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225659LL;
  }
  if ( (unsigned __int16)a2 < 0x38u )
  {
    v14 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v14 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v14);
    return 3221225507LL;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v11 + 484) )
    DpiCheckForOutstandingD3Requests(v11);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
  if ( *(_QWORD *)(v11 + 4936) )
    goto LABEL_20;
  MiniportInterface = DpiQueryMiniportInterface(
                        (__int64)Object,
                        (__int64)&GUID_THERMAL_COOLING_INTERFACE,
                        a2,
                        1,
                        v27,
                        (__int64)Src);
  if ( MiniportInterface < 0 )
  {
LABEL_17:
    if ( *(_BYTE *)(v11 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
    goto LABEL_27;
  }
  if ( Src[5] || Src[6] )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    *(_QWORD *)(v11 + 4936) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v25 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
      MiniportInterface = -1073741670;
      *(_QWORD *)(v25 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v25);
      if ( Src[3] )
      {
        ((void (__fastcall *)(_QWORD))Src[3])(Src[1]);
        memset(Src, 0, 0x38uLL);
      }
      goto LABEL_17;
    }
    *PoolWithTag = 0;
    *(_BYTE *)(*(_QWORD *)(v11 + 4936) + 1LL) = 0;
    *(_BYTE *)(*(_QWORD *)(v11 + 4936) + 2LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v11 + 4936) + 4LL) = 100;
    memmove((void *)(*(_QWORD *)(v11 + 4936) + 8LL), Src, 0x38uLL);
LABEL_20:
    memmove(a4, &unk_1C00A1B50, 0x38uLL);
    a4[1] = Object;
    v26 = *(_QWORD *)(v11 + 4936);
    if ( !*(_QWORD *)(v26 + 48) )
    {
      a4[5] = 0LL;
      v26 = *(_QWORD *)(v11 + 4936);
    }
    if ( !*(_QWORD *)(v26 + 56) )
      a4[6] = 0LL;
    ObfReferenceObject(Object);
    if ( *(_BYTE *)(v11 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
    MiniportInterface = 0;
    goto LABEL_27;
  }
  v19 = WdLogNewEntry5_WdWarning(v16, v15, v18);
  *(_QWORD *)(v19 + 24) = 0LL;
  WdLogEvent5_WdWarning(v19);
  if ( *(_BYTE *)(v11 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
  MiniportInterface = -1073741637;
LABEL_27:
  ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
  KeLeaveCriticalRegion();
  return (unsigned int)MiniportInterface;
}
