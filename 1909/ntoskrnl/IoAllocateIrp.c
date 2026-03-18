/*
 * XREFs of IoAllocateIrp @ 0x1400ED860
 * Callers:
 *     CcSetValidData @ 0x1400ED764 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x140173844 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x1403249EC (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x140690A7C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140690C18 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x140690E2C (IopSynchronousCall.c)
 *     WmipSendWmiIrp @ 0x140713718 (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x14071AB3C (PnpAsynchronousCall.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14071DD8C (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopFilterResourceRequirementsCall @ 0x1407245A0 (IopFilterResourceRequirementsCall.c)
 *     WmipSetTraceNotify @ 0x14073BF50 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x1407481D0 (WmipGetFilePDO.c)
 *     PopConnectToPolicyDevice @ 0x14074E044 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14075F5E8 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x1407722C0 (PopFxRegisterDeviceWorker.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140783C04 (PpIrpAllocateDeviceUsageNotification.c)
 *     IopEjectDevice @ 0x1408752C4 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E94D8 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400375B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400F1600 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140962970 (IovAllocateIrp.c)
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize, ChargeQuota);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, (unsigned __int8)StackSize, ChargeQuota, retaddr);
  return (PIRP)IovAllocateIrp(0LL, (unsigned __int8)StackSize, ChargeQuota, retaddr);
}
