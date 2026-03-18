/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z @ 0x1C0186DA8
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C0186A28 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C0186E60 (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IV_HPD_PARALLEL_INFO *a2)
{
  struct _IV_HPD_PARALLEL_INFO *v2; // rbx
  int v4; // edx
  unsigned int v5; // ebx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      82,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v5 = CIVSerializer::Deserialize(this, (unsigned __int16 **)v2 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      83,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return v5;
}
