/*
 * XREFs of RaSendIrpSynchronous @ 0x1C000FD20
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F99C (RaUnitAtaPassThroughIoctl.c)
 *     RaForwardIrpSynchronous @ 0x1C0012274 (RaForwardIrpSynchronous.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0014024 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0015F54 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0018894 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaQueryInterface @ 0x1C001D0B4 (RaQueryInterface.c)
 *     RaUnitSmartDataIoctl @ 0x1C0045170 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C00456D0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0047884 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C004806C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0048328 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0048648 (RaidUnitSendSrbProtocolCommandSynchronously.c)
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
