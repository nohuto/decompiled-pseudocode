/*
 * XREFs of DpiIndirectCbOpmGetSrmListVersion @ 0x1C0051BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0151B00 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C0151B90 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C01536A0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0153C70 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0153CA4 (DxgkReleaseAdapterDdiSync.c)
 */

__int64 __fastcall DpiIndirectCbOpmGetSrmListVersion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 RenderAdapterForSession; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // esi

  AcquireMiniportListMutex();
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( RenderAdapterForSession )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(RenderAdapterForSession + 484) )
      DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
    _InterlockedExchange64(&qword_1C00A2788, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( *(_DWORD *)(RenderAdapterForSession + 3016) >= 4u )
    {
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3896));
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3896), 1LL);
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(RenderAdapterForSession + 3144))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              a2,
              a3);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3896));
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3896));
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v14 + 24) = RenderAdapterForSession;
      WdLogEvent5_WdError(v14);
      v15 = -1073741637;
    }
    if ( *(_BYTE *)(RenderAdapterForSession + 484) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(RenderAdapterForSession + 24) + 64LL)
                                                      + 4096LL));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    return v15;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v8);
    WdLogEvent5_WdError(v9);
    _InterlockedExchange64(&qword_1C00A2788, 0LL);
    KeReleaseMutex(Mutex, 0);
    return 3221226021LL;
  }
}
