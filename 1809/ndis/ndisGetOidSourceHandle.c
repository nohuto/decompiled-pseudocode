/*
 * XREFs of ndisGetOidSourceHandle @ 0x1C0014FD0
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0014780 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0014A50 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C0014EA0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisAllocateReceiveQueue @ 0x1C003AA90 (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C003BC40 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C003C0D0 (ndisOidPreRcvFilterEnumQueues.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C003C330 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003C460 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003C840 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C004AD3C (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004AE60 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0070860 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C0070BF0 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumVFs @ 0x1C0071340 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C0071650 (ndisOidPreIovEnumVPorts.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00BA0A0 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C00BB1B0 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00BB708 (ndisMiniportPreAddWoLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00BBC64 (ndisPreSetPMParameters.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00E67AC (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00E9838 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisIovAllocateVF @ 0x1C00F8AEC (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00F8C80 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00F9630 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00F9870 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F9B20 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00F9C80 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovFreeVF @ 0x1C00F9DC0 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00F9EF0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00F9FF0 (ndisOidPreIovInvalidateConfigBlock.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00FA0B0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovProbedBars @ 0x1C00FA4B0 (ndisOidPreIovProbedBars.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00FA5A0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00FA6E0 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00FA820 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00FA920 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00FAB60 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00FAFA0 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00FB0B0 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisOidPrePDCloseProvider @ 0x1C0102150 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C01024A0 (ndisOidPrePDOpenProvider.c)
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
