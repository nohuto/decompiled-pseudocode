/*
 * XREFs of ?NdisSetPacketCancelId@@YAXPEAU_NDIS_PACKET@@PEAX@Z @ 0x1C00922E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisSetPacketCancelId(struct _NDIS_PACKET *a1, void *a2)
{
  *(_QWORD *)((char *)&a1[1].Private.PhysicalCount + a1->Private.NdisPacketOobOffset) = a2;
}
