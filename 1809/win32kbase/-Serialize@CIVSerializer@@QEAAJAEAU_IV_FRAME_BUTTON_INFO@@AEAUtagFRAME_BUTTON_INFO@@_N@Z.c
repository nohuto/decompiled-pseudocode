/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@AEAUtagFRAME_BUTTON_INFO@@_N@Z @ 0x1C0154BB4
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_FRAME_BUTTON_INFO *a2,
        struct tagFRAME_BUTTON_INFO *a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x1Cu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  *(_WORD *)a2 = *(_WORD *)a3;
  *((_DWORD *)a2 + 1) = *((_DWORD *)a3 + 1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x1Du,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return 0LL;
}
