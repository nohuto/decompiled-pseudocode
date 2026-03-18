/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@AEAU_HID_COLLECTION_INFORMATION@@_N@Z @ 0x1C0154E50
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z @ 0x1C0154C44 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HID_COLLECTION_INFORMATION *a2,
        struct _HID_COLLECTION_INFORMATION *a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x20u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  *(_DWORD *)a2 = a3->DescriptorSize;
  *((_DWORD *)a2 + 1) = a3->Polled != 0;
  *((_BYTE *)a2 + 8) = a3->Reserved1[0];
  *((_WORD *)a2 + 6) = a3->VendorID;
  *((_WORD *)a2 + 8) = a3->ProductID;
  *((_WORD *)a2 + 10) = a3->VersionNumber;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x21u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return 0LL;
}
