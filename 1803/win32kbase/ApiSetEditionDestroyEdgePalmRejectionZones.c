/*
 * XREFs of ApiSetEditionDestroyEdgePalmRejectionZones @ 0x1C013DBF0
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0117E90 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionDestroyEdgePalmRejectionZones(__int64 a1)
{
  unsigned int v2; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xA6u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  v2 = 0;
  if ( (int)IsEditionDestroyEdgePalmRejectionZonesSupported() >= 0 )
    v2 = EditionDestroyEdgePalmRejectionZones(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xA7u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v2;
}
