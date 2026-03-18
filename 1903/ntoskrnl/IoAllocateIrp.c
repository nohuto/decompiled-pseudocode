/*
 * XREFs of IoAllocateIrp @ 0x140099A10
 * Callers:
 *     CcSetValidData @ 0x14009990C (CcSetValidData.c)
 *     PopAllocateIrp @ 0x140173114 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x140324F9C (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x140663994 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140663B30 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x140663D44 (IopSynchronousCall.c)
 *     WmipSendWmiIrp @ 0x140711938 (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x140718D4C (PnpAsynchronousCall.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14071BF9C (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopFilterResourceRequirementsCall @ 0x140722700 (IopFilterResourceRequirementsCall.c)
 *     WmipSetTraceNotify @ 0x140739CC0 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x1407462D0 (WmipGetFilePDO.c)
 *     PopConnectToPolicyDevice @ 0x14074D5B4 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14075AD58 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x14076F460 (PopFxRegisterDeviceWorker.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407818A4 (PpIrpAllocateDeviceUsageNotification.c)
 *     IopEjectDevice @ 0x140875BC4 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E9BD0 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400371B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400B54F8 (IopAllocateIrpWithExtension.c)
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
