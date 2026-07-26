/*
 * XREFs of ndisQuerySetMiniport @ 0x1C000AC20
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000C300 (ndisQueueOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C000E564 (ndisOidTranslateBetweenOids.c)
 *     ndisWmiExecuteMethod @ 0x1C00B4A84 (ndisWmiExecuteMethod.c)
 *     ndisQueryGuidData @ 0x1C00B4E54 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00B5114 (ndisQueryGuidDataSize.c)
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B6660 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B8374 (ndisQuerySetMiniportDeviceState.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B8FF8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisMDoMiniportOp @ 0x1C00BD33C (ndisMDoMiniportOp.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00BDD6C (ndisIovCreateDefaultNicSwitch.c)
 *     ndisQueryCustomGuids @ 0x1C00CC714 (ndisQueryCustomGuids.c)
 *     ndisQueryDeviceOid @ 0x1C00D1060 (ndisQueryDeviceOid.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E25B8 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00E7CC0 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00E7E44 (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00E8044 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisMDoProtocolRequest @ 0x1C00EE304 (ndisMDoProtocolRequest.c)
 *     ndisMethodDeviceOid @ 0x1C00EED4C (ndisMethodDeviceOid.c)
 *     ndisMediaDisconnectWorker @ 0x1C00F5460 (ndisMediaDisconnectWorker.c)
 *     ndisQueryMediaStatus @ 0x1C00F56C0 (ndisQueryMediaStatus.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisDisableRsc @ 0x1C00F6DE8 (ndisDisableRsc.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00F6F3C (ndisGetMiniportOffloadCapability.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00F7980 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C00F7D0C (ndisNdkPcwCollectMiniportStats.c)
 *     ndisIovInvalidateBlockCompletion @ 0x1C00F9190 (ndisIovInvalidateBlockCompletion.c)
 *     ndisSriovGetResourceForBar @ 0x1C00FB350 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C00FB570 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C00FB6B0 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00FB830 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00FB9E0 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C00FBB90 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C00FBCB0 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00FBDE0 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00FBF80 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCD38 (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMPowerPolicy @ 0x1C010AA50 (ndisMPowerPolicy.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000AC50 (ndisQuerySetMiniportEx.c)
 */

__int64 __fastcall ndisQuerySetMiniport(void *a1, void *a2, struct _NDIS_OID_REQUEST *a3, __int64 a4, __int64 a5)
{
  return ndisQuerySetMiniportEx(a1, a2, a3, a5, 0LL);
}
