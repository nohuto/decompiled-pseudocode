/*
 * XREFs of IoAllocateIrp @ 0x14008E400
 * Callers:
 *     CcSetValidData @ 0x140126B74 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x140307714 (SmKmIssueVolumeIo.c)
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x1405A5094 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1405FCEA0 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FCD90 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x1406FDEA4 (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x14070EB78 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14071EDF0 (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x140725C58 (PopFxRegisterDeviceWorker.c)
 *     PopConnectToPolicyDevice @ 0x140742084 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x140746DF8 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140754EDC (WmipSendWmiIrpToTraceDeviceList.c)
 *     PiPagePathSetState @ 0x14075D3CC (PiPagePathSetState.c)
 *     IopEjectDevice @ 0x14083C060 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ADEFC (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000EB44 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400B9250 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140924810 (IovAllocateIrp.c)
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
