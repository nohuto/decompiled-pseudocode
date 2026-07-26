/*
 * XREFs of NdisMRemoveMiniport @ 0x1C009E890
 * Callers:
 *     <none>
 * Callees:
 *     NdisMRemoveMiniportInternal @ 0x1C009E8AC (NdisMRemoveMiniportInternal.c)
 */

NDIS_STATUS __stdcall NdisMRemoveMiniport(NDIS_HANDLE MiniportHandle)
{
  NdisMRemoveMiniportInternal((char)MiniportHandle);
  return 0;
}
