/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x1C001A8D8
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C0052B30 (DpiSetTargetAdjustedColorimetry2.c)
 *     DpEvalAcpiMethod @ 0x1C0148560 (DpEvalAcpiMethod.c)
 *     DpiPdoIsChildConnected @ 0x1C015B218 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C015B758 (DpiPdoHandleChildConnectionChange.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C0173D74 (DpiGetMonitorColorimetryOverride.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C01745D0 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C01763F8 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C0183B80 (DpiSetTargetAdjustedColorimetry.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02A1890 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C02AF6D4 (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiGetIntegratedMonitorLinkInfo @ 0x1C02AF740 (DpiGetIntegratedMonitorLinkInfo.c)
 *     DpiPdoPollingWorkItem @ 0x1C02AFBF0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DpiFdoGetChildDescriptor(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = (_QWORD *)(a1 + 3464);
  v3 = *(_QWORD **)(a1 + 3464);
  do
  {
    if ( v3 == v2 )
      return 0LL;
    v4 = v3 - 4;
    v3 = (_QWORD *)*v3;
  }
  while ( *((_DWORD *)v4 + 6) != a2 );
  return v4;
}
