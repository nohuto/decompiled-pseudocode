/*
 * XREFs of DpiFdoHandleQueryThermalInterface @ 0x1C026D580
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiQueryMiniportInterface @ 0x1C014C220 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoHandleQueryThermalInterface(_QWORD *Object, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int16 v6; // si
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int MiniportInterface; // esi
  __int64 v14; // r8
  __int64 v15; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-78h]
  _QWORD Src[8]; // [rsp+30h] [rbp-68h] BYREF

  v4 = Object[8];
  v6 = a2;
  if ( (_WORD)a3 != 1 )
  {
    v8 = WdLogNewEntry5_WdWarning(Object, a2, a3);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdWarning(v8);
    return 3221225659LL;
  }
  if ( (unsigned __int16)a2 < 0x38u )
  {
    v10 = WdLogNewEntry5_WdError(Object);
    *(_QWORD *)(v10 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v10);
    return 3221225507LL;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 483) )
  {
    DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
    DpiCheckForOutstandingD3Requests(v4);
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  if ( *(_QWORD *)(v4 + 4808) )
    goto LABEL_20;
  MiniportInterface = DpiQueryMiniportInterface(
                        (__int64)Object,
                        (__int64)&GUID_THERMAL_COOLING_INTERFACE,
                        v6,
                        1,
                        v20,
                        (__int64)Src);
  if ( MiniportInterface < 0 )
  {
LABEL_17:
    if ( *(_BYTE *)(v4 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    }
    goto LABEL_27;
  }
  if ( Src[5] || Src[6] )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    *(_QWORD *)(v4 + 4808) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      MiniportInterface = -1073741670;
      *(_QWORD *)(v18 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v18);
      if ( Src[3] )
      {
        ((void (__fastcall *)(_QWORD))Src[3])(Src[1]);
        memset(Src, 0, 0x38uLL);
      }
      goto LABEL_17;
    }
    *PoolWithTag = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 4808) + 1LL) = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 4808) + 2LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v4 + 4808) + 4LL) = 100;
    memmove((void *)(*(_QWORD *)(v4 + 4808) + 8LL), Src, 0x38uLL);
LABEL_20:
    memmove(a4, &unk_1C008DAD0, 0x38uLL);
    a4[1] = Object;
    v19 = *(_QWORD *)(v4 + 4808);
    if ( !*(_QWORD *)(v19 + 48) )
    {
      a4[5] = 0LL;
      v19 = *(_QWORD *)(v4 + 4808);
    }
    if ( !*(_QWORD *)(v19 + 56) )
      a4[6] = 0LL;
    ObfReferenceObject(Object);
    if ( *(_BYTE *)(v4 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    }
    MiniportInterface = 0;
    goto LABEL_27;
  }
  v15 = WdLogNewEntry5_WdWarning(v12, v11, v14);
  *(_QWORD *)(v15 + 24) = 0LL;
  WdLogEvent5_WdWarning(v15);
  if ( *(_BYTE *)(v4 + 483) )
  {
    DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  }
  MiniportInterface = -1073741637;
LABEL_27:
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return (unsigned int)MiniportInterface;
}
