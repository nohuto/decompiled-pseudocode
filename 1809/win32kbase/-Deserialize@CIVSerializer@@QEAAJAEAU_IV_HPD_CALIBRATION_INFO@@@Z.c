/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z @ 0x1C0153E50
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C0153CCC (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01540AC (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, unsigned __int16 **a2)
{
  CIVSerializer *v4; // rcx
  int v5; // ebx
  CIVSerializer *v6; // rcx
  CIVSerializer *v7; // rcx
  CIVSerializer *v8; // rcx
  CIVSerializer *v9; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x2Cu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v5 = CIVSerializer::Deserialize(this, a2);
  if ( v5 >= 0 )
  {
    v5 = CIVSerializer::Deserialize(v4, a2 + 2);
    if ( v5 >= 0 )
    {
      v5 = CIVSerializer::Deserialize(v6, a2 + 4);
      if ( v5 >= 0 )
      {
        v5 = CIVSerializer::Deserialize(v7, a2 + 6);
        if ( v5 >= 0 )
        {
          v5 = CIVSerializer::Deserialize(v8, a2 + 8);
          if ( v5 >= 0 )
            v5 = CIVSerializer::Deserialize(v9, a2 + 10);
        }
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x2Du,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v5;
}
