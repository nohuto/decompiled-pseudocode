/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z @ 0x1C018A814
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z @ 0x1C018AB3C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDP_CAPS@@AEAU_HIDP_CAPS@@_N@Z @ 0x1C018A91C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDP_CAPS@@AEAU_HIDP_CAPS@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@AEAU_HID_COLLECTION_INFORMATION@@_N@Z @ 0x1C018AA5C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@AEAU_HID_COLLECTION_INFORMATI.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C018BD14 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HIDDESC *a2,
        struct tagHIDDESC *a3,
        bool a4)
{
  struct _IV_HIDDESC *v6; // rsi
  CIVSerializer *v7; // r15
  int v8; // edx
  CIVSerializer *v9; // rcx
  int v10; // ebx
  bool v11; // r9

  v6 = a2;
  v7 = this;
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
        72,
        (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
    }
  }
  v10 = CIVSerializer::Serialize(this, v6, (struct _HIDP_CAPS *)((char *)a3 + 40), a4);
  if ( v10 >= 0 )
  {
    v10 = CIVSerializer::Serialize(
            v9,
            (struct _IV_HIDDESC *)((char *)v6 + 96),
            (struct _HID_COLLECTION_INFORMATION *)((char *)a3 + 104),
            v11);
    if ( v10 >= 0 )
      v10 = CIVSerializer::Serialize(v7, (void **)v6 + 15, *((void **)a3 + 2), *((unsigned int *)a3 + 26), a4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      12,
      73,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return (unsigned int)v10;
}
