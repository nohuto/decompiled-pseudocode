/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0154F0C
 * Callers:
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C015455C (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154878 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z @ 0x1C0154C44 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HID_DEVICE_INFO *a2,
        struct tagHIDDESC **a3,
        bool a4)
{
  int v8; // ebx
  struct tagHID_POINTER_DEVICE_INFO *v9; // r8

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x26u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v8 = CIVSerializer::Serialize(this, a2, *a3, a4);
  if ( v8 >= 0 )
  {
    v9 = a3[2];
    if ( v9 )
      v8 = CIVSerializer::Serialize(this, (struct _IV_HID_DEVICE_INFO *)((char *)a2 + 128), v9, a4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x27u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v8;
}
