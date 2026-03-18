/*
 * XREFs of DpiIndirectCbOpmSetSrmList @ 0x1C004A980
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C0141A68 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0145088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C014517C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01C7C30 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C01C8474 (DxgkReleaseAdapterOpmI2CSync.c)
 */

__int64 __fastcall DpiIndirectCbOpmSetSrmList(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 RenderAdapterForSession; // rbx
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // esi

  AcquireMiniportListMutex();
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( RenderAdapterForSession )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
    {
      DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(RenderAdapterForSession + 3816), 4023LL);
      DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
    _InterlockedExchange64(&qword_1C008E788, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( *(_DWORD *)(RenderAdapterForSession + 2944) >= 4u )
    {
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1LL);
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(RenderAdapterForSession + 3064))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              a2,
              a3);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792));
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = RenderAdapterForSession;
      WdLogEvent5_WdError(v10);
      v11 = -1073741637;
    }
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(RenderAdapterForSession + 3816), 4023LL);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(RenderAdapterForSession + 24) + 64LL)
                                                      + 3992LL));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    return v11;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    WdLogEvent5_WdError(v7);
    _InterlockedExchange64(&qword_1C008E788, 0LL);
    KeReleaseMutex(Mutex, 0);
    return 3221226021LL;
  }
}
