/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@@Z @ 0x1C0153F40
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C0153CCC (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IV_HPD_FRAME_SCAN_TIME *a2)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x30u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x31u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return 0LL;
}
