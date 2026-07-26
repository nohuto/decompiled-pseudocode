/*
 * XREFs of NdisMRemoveMiniport @ 0x1C00650D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMRemoveMiniportInternal @ 0x1C00650EC (NdisMRemoveMiniportInternal.c)
 */

NDIS_STATUS __stdcall NdisMRemoveMiniport(NDIS_HANDLE MiniportHandle)
{
  NdisMRemoveMiniportInternal(MiniportHandle, 71LL);
  return 0;
}
