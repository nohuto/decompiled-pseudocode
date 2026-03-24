/*
 * XREFs of IoAllocateIrp @ 0x14008E4E0
 * Callers:
 *     CcSetValidData @ 0x140126AA4 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14017273C (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x140307524 (SmKmIssueVolumeIo.c)
 *     IopSynchronousCall @ 0x1405A2CE0 (IopSynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x1405A4094 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1405FBEA0 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1406B878C (CmpFileFlushAndPurge.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FBAF0 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x1406FCC04 (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x14070D8D8 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14071DB50 (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x1407249B8 (PopFxRegisterDeviceWorker.c)
 *     PopConnectToPolicyDevice @ 0x140740E94 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x140745C08 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140753CEC (WmipSendWmiIrpToTraceDeviceList.c)
 *     PiPagePathSetState @ 0x14075C1DC (PiPagePathSetState.c)
 *     IopEjectDevice @ 0x14083AE00 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACC9C (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000EB44 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400B9310 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140923810 (IovAllocateIrp.c)
 */

// local variable allocation has failed, the output may be wrong!
PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  BOOLEAN v2; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ChargeQuota;
  ChargeQuota = StackSize;
  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, ChargeQuota);
  return (PIRP)IovAllocateIrp(0LL, StackSize, v2, retaddr);
}
