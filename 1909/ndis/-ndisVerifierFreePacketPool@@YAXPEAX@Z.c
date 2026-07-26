/*
 * XREFs of ?ndisVerifierFreePacketPool@@YAXPEAX@Z @ 0x1C00A9A60
 * Callers:
 *     <none>
 * Callees:
 *     ndisFreePacketPoolInternal @ 0x1C0081E20 (ndisFreePacketPoolInternal.c)
 */

void __fastcall ndisVerifierFreePacketPool(struct _NDIS_PKT_POOL *a1)
{
  ndisFreePacketPoolInternal(a1);
}
