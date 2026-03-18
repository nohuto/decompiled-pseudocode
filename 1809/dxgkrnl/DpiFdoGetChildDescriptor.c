/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x1C001E720
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C004B8A0 (DpiSetTargetAdjustedColorimetry2.c)
 *     DpiPdoIsChildConnected @ 0x1C0144E00 (DpiPdoIsChildConnected.c)
 *     DpEvalAcpiMethod @ 0x1C01451B0 (DpEvalAcpiMethod.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C0265BE4 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C02740B4 (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiGetIntegratedMonitorLinkInfo @ 0x1C0274120 (DpiGetIntegratedMonitorLinkInfo.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C0274178 (DpiGetMonitorColorimetryOverride.c)
 *     DpiGetMonitorNativeTimingOverride @ 0x1C02743FC (DpiGetMonitorNativeTimingOverride.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02760FC (DpiPdoHandleChildConnectionChange.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C0277CD4 (DpiSetTargetAdjustedColorimetry.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z @ 0x1C0297448 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DpiFdoGetChildDescriptor(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = (_QWORD *)(a1 + 3392);
  v3 = *(_QWORD **)(a1 + 3392);
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
