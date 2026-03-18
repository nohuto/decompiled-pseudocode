/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@AEAU_HID_COLLECTION_INFORMATION@@_N@Z @ 0x1C018886C
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z @ 0x1C0188624 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HID_COLLECTION_INFORMATION *a2,
        struct _HID_COLLECTION_INFORMATION *a3)
{
  struct _IV_HID_COLLECTION_INFORMATION *v4; // rdi

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      68,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  *(_DWORD *)v4 = a3->DescriptorSize;
  *((_DWORD *)v4 + 1) = a3->Polled != 0;
  *((_BYTE *)v4 + 8) = a3->Reserved1[0];
  *((_WORD *)v4 + 6) = a3->VendorID;
  *((_WORD *)v4 + 8) = a3->ProductID;
  *((_WORD *)v4 + 10) = a3->VersionNumber;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      69,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return 0LL;
}
