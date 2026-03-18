/*
 * XREFs of ApiSetEditionCreateEdgePalmRejectionZones @ 0x1C01612AC
 * Callers:
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C013FC54 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionCreateEdgePalmRejectionZones(__int64 a1)
{
  unsigned int EdgePalmRejectionZones; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xACu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  EdgePalmRejectionZones = 0;
  if ( (int)IsEditionCreateEdgePalmRejectionZonesSupported() >= 0 )
    EdgePalmRejectionZones = EditionCreateEdgePalmRejectionZones(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xADu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return EdgePalmRejectionZones;
}
