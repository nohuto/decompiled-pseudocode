/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_DEVICE_OUTPUT_CONFIG@@AEAUDEVICE_OUTPUT_CONFIG@@_N@Z @ 0x1C0154B00
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_DEVICE_OUTPUT_CONFIG *a2,
        struct DEVICE_OUTPUT_CONFIG *a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x12u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  *(_DWORD *)a2 = *(_DWORD *)a3;
  *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)((char *)a3 + 4);
  *(_OWORD *)((char *)a2 + 20) = *(_OWORD *)((char *)a3 + 20);
  *(_OWORD *)((char *)a2 + 36) = *(_OWORD *)((char *)a3 + 36);
  *(_OWORD *)((char *)a2 + 52) = *(_OWORD *)((char *)a3 + 52);
  *((_DWORD *)a2 + 17) = *((_DWORD *)a3 + 17);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x13u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return 0LL;
}
