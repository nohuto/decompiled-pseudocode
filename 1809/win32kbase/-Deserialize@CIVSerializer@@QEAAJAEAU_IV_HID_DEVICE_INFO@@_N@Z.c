/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z @ 0x1C0153C0C
 * Callers:
 *     ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C0154228 (-IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z @ 0x1C0153AA0 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C0153CCC (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IV_HID_DEVICE_INFO *a2, char a3)
{
  int v6; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x3Cu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v6 = CIVSerializer::Deserialize(this, a2);
  if ( v6 >= 0 && a3 )
    v6 = CIVSerializer::Deserialize(this, (struct _IV_HID_DEVICE_INFO *)((char *)a2 + 128));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x3Du,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v6;
}
