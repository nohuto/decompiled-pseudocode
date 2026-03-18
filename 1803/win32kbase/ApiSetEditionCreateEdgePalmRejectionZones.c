/*
 * XREFs of ApiSetEditionCreateEdgePalmRejectionZones @ 0x1C013D9F0
 * Callers:
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0117F6C (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionCreateEdgePalmRejectionZones(__int64 a1)
{
  unsigned int EdgePalmRejectionZones; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xA4u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  EdgePalmRejectionZones = 0;
  if ( (int)IsEditionCreateEdgePalmRejectionZonesSupported() >= 0 )
    EdgePalmRejectionZones = EditionCreateEdgePalmRejectionZones(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xA5u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return EdgePalmRejectionZones;
}
