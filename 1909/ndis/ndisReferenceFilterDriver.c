/*
 * XREFs of ndisReferenceFilterDriver @ 0x1C0029BE4
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010680C (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x1C0121D9C (-ndisPDReferenceClientDriver@@YAEPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 */

bool __fastcall ndisReferenceFilterDriver(__int64 a1, unsigned __int8 a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  return ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 72), a2, &v3);
}
