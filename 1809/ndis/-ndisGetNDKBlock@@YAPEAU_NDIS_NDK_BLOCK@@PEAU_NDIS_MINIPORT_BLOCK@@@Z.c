/*
 * XREFs of ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009B60
 * Callers:
 *     ndisQueryGuidData @ 0x1C00B4E54 (ndisQueryGuidData.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisOpenNDKAdapter @ 0x1C00F75A0 (NdisOpenNDKAdapter.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00F7694 (ndisMHandleNDKPnPEvents.c)
 *     ndisMSetNDKAttributes @ 0x1C00F77DC (ndisMSetNDKAttributes.c)
 *     ndisNDKCleanup @ 0x1C00F7958 (ndisNDKCleanup.c)
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C00F7B20 (ndisNDKWmiGetAdapterCapabilities.c)
 * Callees:
 *     <none>
 */

struct _NDIS_NDK_BLOCK *__fastcall ndisGetNDKBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return (struct _NDIS_NDK_BLOCK *)a1->NDKBlock;
}
