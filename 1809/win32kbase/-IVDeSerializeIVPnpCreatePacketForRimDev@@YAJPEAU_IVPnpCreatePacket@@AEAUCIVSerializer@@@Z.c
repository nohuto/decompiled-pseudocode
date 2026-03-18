/*
 * XREFs of ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C0154228
 * Callers:
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z @ 0x1C0153C0C (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01540AC (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall IVDeSerializeIVPnpCreatePacketForRimDev(struct _IVPnpCreatePacket *a1, struct CIVSerializer *a2)
{
  CIVSerializer *v4; // rcx
  int v5; // edi

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x44u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  *((_QWORD *)a1 + 4) = *(_QWORD *)a2 + (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = CIVSerializer::Deserialize(a2, (unsigned __int16 **)a1 + 10);
  if ( v5 >= 0 && *((_DWORD *)a1 + 10) == 2 )
    v5 = CIVSerializer::Deserialize(v4, (struct _IVPnpCreatePacket *)((char *)a1 + 96), *((_DWORD *)a1 + 18) != 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x45u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v5;
}
