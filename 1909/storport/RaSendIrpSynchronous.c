/*
 * XREFs of RaSendIrpSynchronous @ 0x1C000FB94
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F6CC (RaUnitAtaPassThroughIoctl.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C00140B4 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0016284 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaForwardIrpSynchronous @ 0x1C001831C (RaForwardIrpSynchronous.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0018A24 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaQueryInterface @ 0x1C001A884 (RaQueryInterface.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C0023488 (RaidUnitLogSenseCommandSrb.c)
 *     RaUnitSmartDataIoctl @ 0x1C0046560 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C0046AC0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitResetTarget @ 0x1C00491DC (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0049498 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C00497B8 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSendIrpSynchronous(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
  CurrentStackLocation[-1].Context = &Object;
  CurrentStackLocation[-1].Control = -32;
  v5 = IofCallDriver(DeviceObject, Irp);
  if ( v5 == 259 )
  {
    v5 = 0;
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  return v5;
}
