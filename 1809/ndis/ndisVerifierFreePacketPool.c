/*
 * XREFs of ndisVerifierFreePacketPool @ 0x1C006A550
 * Callers:
 *     <none>
 * Callees:
 *     ndisFreePacketPool @ 0x1C00528C8 (ndisFreePacketPool_ea_1C00528C8.c)
 */

void __fastcall ndisVerifierFreePacketPool(struct _NDIS_PKT_POOL *a1)
{
  ndisFreePacketPool(a1);
}
