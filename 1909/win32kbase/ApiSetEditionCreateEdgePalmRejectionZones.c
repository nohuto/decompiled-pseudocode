/*
 * XREFs of ApiSetEditionCreateEdgePalmRejectionZones @ 0x1C0199344
 * Callers:
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C016C490 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionCreateEdgePalmRejectionZones(__int64 a1)
{
  unsigned int EdgePalmRejectionZones; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      298,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  EdgePalmRejectionZones = 0;
  if ( (int)IsEditionCreateEdgePalmRejectionZonesSupported() >= 0 )
    EdgePalmRejectionZones = EditionCreateEdgePalmRejectionZones(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      299,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return EdgePalmRejectionZones;
}
