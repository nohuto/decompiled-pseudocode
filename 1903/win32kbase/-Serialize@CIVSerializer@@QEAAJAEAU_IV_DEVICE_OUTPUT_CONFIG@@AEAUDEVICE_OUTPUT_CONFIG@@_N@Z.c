/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_DEVICE_OUTPUT_CONFIG@@AEAUDEVICE_OUTPUT_CONFIG@@_N@Z @ 0x1C018A688
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C018AC38 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_DEVICE_OUTPUT_CONFIG *a2,
        struct DEVICE_OUTPUT_CONFIG *a3)
{
  struct _IV_DEVICE_OUTPUT_CONFIG *v4; // rdi

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      54,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  *(_DWORD *)v4 = *(_DWORD *)a3;
  *(_OWORD *)((char *)v4 + 4) = *(_OWORD *)((char *)a3 + 4);
  *(_OWORD *)((char *)v4 + 20) = *(_OWORD *)((char *)a3 + 20);
  *(_OWORD *)((char *)v4 + 36) = *(_OWORD *)((char *)a3 + 36);
  *(_OWORD *)((char *)v4 + 52) = *(_OWORD *)((char *)a3 + 52);
  *((_DWORD *)v4 + 17) = *((_DWORD *)a3 + 17);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      55,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return 0LL;
}
