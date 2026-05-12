/*
 * XREFs of RaSendIrpSynchronous @ 0x1C00107F0
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001008 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C001652C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaForwardIrpSynchronous @ 0x1C0016EF0 (RaForwardIrpSynchronous.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0018A2C (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaQueryInterface @ 0x1C001C2B4 (RaQueryInterface.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00219F8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C00280A0 (RaidUnitLogSenseCommandSrb.c)
 *     RaUnitSmartDataIoctl @ 0x1C0047E5C (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C00483AC (RaUnitSmartReturnStatus.c)
 *     RaidUnitResetTarget @ 0x1C004A83C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004AAEC (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004AE0C (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSendIrpSynchronous(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  v5 = IofCallDriver(DeviceObject, Irp);
  if ( v5 == 259 )
  {
    v5 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v5;
}
