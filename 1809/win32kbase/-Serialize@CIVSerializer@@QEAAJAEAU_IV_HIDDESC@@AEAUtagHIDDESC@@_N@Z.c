/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z @ 0x1C0154C44
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0154F0C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDP_CAPS@@AEAU_HIDP_CAPS@@_N@Z @ 0x1C0154D34 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDP_CAPS@@AEAU_HIDP_CAPS@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@AEAU_HID_COLLECTION_INFORMATION@@_N@Z @ 0x1C0154E50 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_COLLECTION_INFORMATION@@AEAU_HID_COLLECTION_INFORMATI.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HIDDESC *a2,
        struct tagHIDDESC *a3,
        bool a4)
{
  CIVSerializer *v8; // rcx
  CIVSerializer *v9; // rcx
  int v10; // ebx
  bool v11; // r9

  v8 = (CIVSerializer *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x24u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v10 = CIVSerializer::Serialize(v8, a2, (struct _HIDP_CAPS *)((char *)a3 + 40), a4);
  if ( v10 >= 0 )
  {
    v10 = CIVSerializer::Serialize(
            v9,
            (struct _IV_HIDDESC *)((char *)a2 + 96),
            (struct _HID_COLLECTION_INFORMATION *)((char *)a3 + 104),
            v11);
    if ( v10 >= 0 )
      v10 = CIVSerializer::Serialize(this, (void **)a2 + 15, *((void **)a3 + 2), *((unsigned int *)a3 + 26), a4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x25u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v10;
}
