/*
 * XREFs of ?NdisGetPacketCancelId@@YAPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00922D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall NdisGetPacketCancelId(struct _NDIS_PACKET *a1)
{
  return *(void **)((char *)&a1[1].Private.PhysicalCount + a1->Private.NdisPacketOobOffset);
}
