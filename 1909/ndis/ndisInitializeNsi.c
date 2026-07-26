/*
 * XREFs of ndisInitializeNsi @ 0x1C010A8C4
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F60 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterProtocolDriver @ 0x1C0037850 (NdisRegisterProtocolDriver.c)
 *     NdisIfRegisterProvider @ 0x1C003D8A0 (NdisIfRegisterProvider.c)
 *     ?ndisDriverReinit@@YAXPEAU_DRIVER_OBJECT@@PEAXK@Z @ 0x1C003F660 (-ndisDriverReinit@@YAXPEAU_DRIVER_OBJECT@@PEAXK@Z.c)
 *     NdisRegisterProtocol @ 0x1C00930F0 (NdisRegisterProtocol.c)
 *     NdisIMRegisterLayeredMiniport @ 0x1C009D6A0 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1C009E920 (NdisMRegisterMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisInitializeNsi()
{
  return RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
}
