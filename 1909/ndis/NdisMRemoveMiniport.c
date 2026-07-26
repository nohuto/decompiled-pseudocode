/*
 * XREFs of NdisMRemoveMiniport @ 0x1C009EA60
 * Callers:
 *     <none>
 * Callees:
 *     NdisMRemoveMiniportInternal @ 0x1C009EA7C (NdisMRemoveMiniportInternal.c)
 */

NDIS_STATUS __stdcall NdisMRemoveMiniport(NDIS_HANDLE MiniportHandle)
{
  NdisMRemoveMiniportInternal((char)MiniportHandle);
  return 0;
}
