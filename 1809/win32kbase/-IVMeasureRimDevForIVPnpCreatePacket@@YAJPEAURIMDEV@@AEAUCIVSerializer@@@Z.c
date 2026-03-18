/*
 * XREFs of ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C015455C
 * Callers:
 *     ?ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01567CC (-ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0154F0C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVMeasureRimDevForIVPnpCreatePacket(struct RIMDEV *a1, struct CIVSerializer *a2)
{
  __int64 v4; // rbp
  int v5; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x40u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v4 = *(_QWORD *)a2;
  v5 = CIVSerializer::Serialize(
         a2,
         (struct _UNICODE_STRING *)(*(_QWORD *)a2 + 24LL),
         (struct _UNICODE_STRING *)a1 + 13,
         1);
  if ( v5 >= 0 )
  {
    v5 = CIVSerializer::Serialize(a2, (void **)(v4 + 80), *((void **)a1 + 40), *((unsigned int *)a1 + 82), 1);
    if ( v5 >= 0 && *((_BYTE *)a1 + 48) == 2 )
      v5 = CIVSerializer::Serialize(a2, (struct _IV_HID_DEVICE_INFO *)(v4 + 96), (struct RIMDEV *)((char *)a1 + 464), 1);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x41u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v5;
}
