/*
 * XREFs of NdisMInitializeScatterGatherDma @ 0x1C0078F60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C0035504 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 */

NDIS_STATUS __stdcall NdisMInitializeScatterGatherDma(
        NDIS_HANDLE MiniportAdapterHandle,
        BOOLEAN Dma64BitAddresses,
        ULONG MaximumPhysicalMapping)
{
  return ndisMInitializeScatterGatherDmaInternal(
           (unsigned __int16 *)MiniportAdapterHandle,
           Dma64BitAddresses,
           2u,
           MaximumPhysicalMapping);
}
