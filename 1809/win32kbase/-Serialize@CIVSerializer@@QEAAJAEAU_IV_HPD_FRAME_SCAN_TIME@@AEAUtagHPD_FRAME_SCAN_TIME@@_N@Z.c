/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@AEAUtagHPD_FRAME_SCAN_TIME@@_N@Z @ 0x1C01556F8
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HPD_FRAME_SCAN_TIME *a2,
        struct tagHPD_FRAME_SCAN_TIME *a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x1Au,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  *(_DWORD *)a2 = *(_DWORD *)a3;
  *((_DWORD *)a2 + 1) = *((_DWORD *)a3 + 1);
  *((_DWORD *)a2 + 2) = *((_DWORD *)a3 + 2);
  *((_DWORD *)a2 + 3) = *((_DWORD *)a3 + 3);
  *((_DWORD *)a2 + 4) = *((_DWORD *)a3 + 4);
  *((_DWORD *)a2 + 5) = *((_DWORD *)a3 + 5);
  *((_DWORD *)a2 + 6) = *((_DWORD *)a3 + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)a3 + 7);
  *((_QWORD *)a2 + 4) = *((_QWORD *)a3 + 4);
  *((_QWORD *)a2 + 5) = *((_QWORD *)a3 + 5);
  *((_DWORD *)a2 + 12) = *((_DWORD *)a3 + 12) & 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x1Bu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return 0LL;
}
