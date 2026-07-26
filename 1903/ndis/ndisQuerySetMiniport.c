/*
 * XREFs of ndisQuerySetMiniport @ 0x1C001136C
 * Callers:
 *     ndisOidTranslateBetweenOids @ 0x1C0002D80 (ndisOidTranslateBetweenOids.c)
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FB430 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00FFA44 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C010041C (ndisNdkPcwCollectMiniportStats.c)
 *     ndisMDoMiniportOp @ 0x1C0108AA8 (ndisMDoMiniportOp.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0113F28 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0115320 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C0119D6C (ndisNDKHandleWmiChangeRequest.c)
 *     ndisIovInvalidateBlockCompletion @ 0x1C011A8E0 (ndisIovInvalidateBlockCompletion.c)
 *     ndisSriovGetResourceForBar @ 0x1C011AA60 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C011AD00 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C011AE90 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C011B050 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C011B240 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C011B430 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C011B590 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C011B700 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C011B8E0 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 */

__int64 __fastcall ndisQuerySetMiniport(__int64 a1, _QWORD *a2, __int64 a3, char a4, __int64 a5)
{
  return ndisQuerySetMiniportEx(a1, a2, a3, a4, a5, 0LL);
}
