/*
 * XREFs of ndisGetOidSourceHandle @ 0x1C0035164
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C001C830 (ndisOidPostPMAddWOLPattern.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0022620 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0022BB0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0023410 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C00235C0 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0034BA4 (ndisMiniportPreAddWoLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C0034E14 (ndisPreSetPMParameters.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C005E400 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C005FBD0 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C0060070 (ndisOidPreRcvFilterEnumQueues.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C0060310 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0060580 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C0060930 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C0060DE8 (ndisSetReceiveFilter.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0073BB8 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C0073C80 (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0073D70 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C0077ED0 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AF828 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AFEDC (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C00B2030 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C00B2420 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovBarResources @ 0x1C00B2B40 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00B2DF0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00B3150 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00B3310 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovEnumVFs @ 0x1C00B36E0 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C00B3A20 (ndisOidPreIovEnumVPorts.c)
 *     ndisOidPreIovFreeVF @ 0x1C00B3E40 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00B3FB0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00B40F0 (ndisOidPreIovInvalidateConfigBlock.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00B41F0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovProbedBars @ 0x1C00B46A0 (ndisOidPreIovProbedBars.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00B47D0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00B4940 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00B4AB0 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00B4BF0 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00B4EB0 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00B5380 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00B54D0 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisOidPrePDCloseProvider @ 0x1C0122490 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C0122830 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetOidSourceHandle(__int64 a1)
{
  __int64 i; // rax

  for ( i = a1 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  return *(_QWORD *)(i + 32);
}
