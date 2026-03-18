/*
 * XREFs of IoAllocateIrp @ 0x14008E4E0
 * Callers:
 *     CcSetValidData @ 0x140126A84 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14017271C (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x140307424 (SmKmIssueVolumeIo.c)
 *     IopSynchronousCall @ 0x1405A2CE0 (IopSynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x1405A4094 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1405FBEA0 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1406B87AC (CmpFileFlushAndPurge.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FBB10 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x1406FCC24 (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x14070D8F8 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14071DB70 (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x1407249D8 (PopFxRegisterDeviceWorker.c)
 *     PopConnectToPolicyDevice @ 0x140740EB4 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x140745C28 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140753D0C (WmipSendWmiIrpToTraceDeviceList.c)
 *     PiPagePathSetState @ 0x14075C1FC (PiPagePathSetState.c)
 *     IopEjectDevice @ 0x14083AE20 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACCBC (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000EB44 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400B92F0 (IopAllocateIrpPrivate.c)
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
