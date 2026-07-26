/*
 * XREFs of ndisWdfDeviceObjectCleanup @ 0x1C0119240
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C009EEA0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A1C0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisRemoveMiniportFromGlobalList @ 0x1C009C180 (ndisRemoveMiniportFromGlobalList.c)
 *     ndisPnPCompleteRemoveDevice @ 0x1C0118868 (ndisPnPCompleteRemoveDevice.c)
 */

__int64 __fastcall ndisWdfDeviceObjectCleanup(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisPnPCompleteRemoveDevice(a1);
  ndisRemoveMiniportFromGlobalList(a1);
  ndisMDeleteMiniportBlockOnRemove((__int64)a1);
  a1->MiniportAdapterContext = 0LL;
  return 0LL;
}
