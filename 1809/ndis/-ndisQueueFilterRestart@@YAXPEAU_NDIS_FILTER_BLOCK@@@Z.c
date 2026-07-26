/*
 * XREFs of ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EC618
 * Callers:
 *     NdisFRestartFilter @ 0x1C005ACC0 (NdisFRestartFilter.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00EC710 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisQueueFilterRestart(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  _QWORD v4[20]; // [rsp+20h] [rbp-B8h] BYREF

  Miniport = a1->Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetPause(&a1->Bind->BindState, DatapathPaused, PauseReason_RestartNeeded)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v4);
    if ( (unsigned __int8)byte_1C00A026B >= 4u )
      WPP_SF_Zq(0x24u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (const wchar_t *)v4[1], v4[0]);
  }
  a1->Bind->BindState.NeedsPauseAction = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->Miniport->BindEngine, v3);
  Ndis::BindEngine::ApplyBindChanges(&a1->Miniport->BindEngine, RunAsynchronous, 0);
}
