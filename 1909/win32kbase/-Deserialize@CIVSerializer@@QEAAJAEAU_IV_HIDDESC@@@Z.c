/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z @ 0x1C0186754
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z @ 0x1C0186944 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDP_CAPS@@@Z @ 0x1C0186824 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDP_CAPS@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@@Z @ 0x1C01868B4 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C0186E60 (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IV_HIDDESC *a2)
{
  struct _IV_HIDDESC *v2; // rdi
  CIVSerializer *v3; // rsi
  struct _IV_HID_COLLECTION_INFORMATION *v4; // rdx
  CIVSerializer *v5; // rcx
  int v6; // ebx

  v2 = a2;
  v3 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CIVSerializer *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        12,
        94,
        (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
    }
  }
  v6 = CIVSerializer::Deserialize(this, a2);
  if ( v6 >= 0 )
  {
    v6 = CIVSerializer::Deserialize(v5, v4);
    if ( v6 >= 0 )
      v6 = CIVSerializer::Deserialize(v3, (unsigned __int16 **)v2 + 15);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      12,
      95,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return (unsigned int)v6;
}
