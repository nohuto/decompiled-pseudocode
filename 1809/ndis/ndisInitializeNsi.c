/*
 * XREFs of ndisInitializeNsi @ 0x1C00D0EAC
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisIfRegisterProvider @ 0x1C0025110 (NdisIfRegisterProvider.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisInitializeNsi()
{
  return RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
}
