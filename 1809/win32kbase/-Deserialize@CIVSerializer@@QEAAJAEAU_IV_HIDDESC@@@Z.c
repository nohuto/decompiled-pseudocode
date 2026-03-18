/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z @ 0x1C0153AA0
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z @ 0x1C0153C0C (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@@Z @ 0x1C0153BA0 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01540AC (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IV_HIDDESC *a2)
{
  CIVSerializer *v4; // rcx
  int v5; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x3Au,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x38u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v4 = (CIVSerializer *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x39u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v5 = CIVSerializer::Deserialize(v4, a2);
  if ( v5 >= 0 )
    v5 = CIVSerializer::Deserialize(this, (unsigned __int16 **)a2 + 15);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x3Bu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v5;
}
