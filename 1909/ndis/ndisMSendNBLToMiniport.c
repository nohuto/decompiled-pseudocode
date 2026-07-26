/*
 * XREFs of ndisMSendNBLToMiniport @ 0x1C000DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 */

__int64 __fastcall ndisMSendNBLToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_BUFFER_LIST *a2)
{
  return ndisMSendNBLToMiniportInternal(a1, a2, 0);
}
