/*
 * XREFs of NdisWdfMiniportDataPathPause @ 0x1C00F2260
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall NdisWdfMiniportDataPathPause(__int64 a1)
{
  bool v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  const wchar_t *v4; // r8

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5168, 0LL);
  v2 = Ndis::BindState::SetPause((Ndis::BindState *)(a1 + 5072), DatapathPaused, PauseReason_Wdf);
  v4 = 0LL;
  if ( v2 && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    if ( a1 )
      v4 = *(const wchar_t **)(a1 + 3888);
    WPP_SF_Zq(0x75u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, v4, a1);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5144), v3);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5144), RunSynchronous, 0);
}
