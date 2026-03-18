/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@AEAUtagHPD_PARALLEL_INFO@@_N@Z @ 0x1C01557C4
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEAU_HIDP_LINK_COLLECTION_NODE@@K_K_N@Z @ 0x1C0155C9C (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEAU_HIDP_LINK_COLLECTION_N.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HPD_PARALLEL_INFO *a2,
        struct tagHPD_PARALLEL_INFO *a3,
        bool a4)
{
  int v8; // esi

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x18u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  *(_DWORD *)a2 = *(_DWORD *)a3;
  *((_WORD *)a2 + 2) = *((_WORD *)a3 + 2);
  *((_WORD *)a2 + 4) = *((_WORD *)a3 + 3);
  *((_WORD *)a2 + 6) = *((_WORD *)a3 + 4);
  *((_WORD *)a2 + 8) = *((_WORD *)a3 + 5);
  *((_DWORD *)a2 + 5) = *((_DWORD *)a3 + 3);
  v8 = CIVSerializer::Serialize(
         this,
         (struct _IV_HIDP_LINK_COLLECTION_NODE **)a2 + 3,
         *((struct _HIDP_LINK_COLLECTION_NODE **)a3 + 2),
         *((_DWORD *)a3 + 3),
         48LL * *((unsigned int *)a3 + 3),
         a4);
  if ( v8 >= 0 )
  {
    *((_DWORD *)a2 + 8) = *((_DWORD *)a3 + 8) & 1;
    *((_DWORD *)a2 + 9) = *((_DWORD *)a3 + 9);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x19u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v8;
}
