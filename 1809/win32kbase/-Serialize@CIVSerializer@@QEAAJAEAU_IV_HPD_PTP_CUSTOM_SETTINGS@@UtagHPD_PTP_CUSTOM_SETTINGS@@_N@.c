/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PTP_CUSTOM_SETTINGS@@UtagHPD_PTP_CUSTOM_SETTINGS@@_N@Z @ 0x1C01558C8
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x14u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  *a2 = *a3;
  a2[1] = a3[1];
  a2[2] = a3[2];
  a2[3] = a3[3];
  a2[4] = a3[4];
  a2[5] = a3[5];
  a2[6] = a3[6];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x15u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return 0LL;
}
