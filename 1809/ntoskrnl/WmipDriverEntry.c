/*
 * XREFs of WmipDriverEntry @ 0x1409D4020
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x1400DAAC0 (IoDeleteDevice.c)
 *     KeInitializeMutex @ 0x1400DD320 (KeInitializeMutex.c)
 *     RtlInitAnsiString @ 0x1400EED70 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     IoCreateDevice @ 0x1406529F0 (IoCreateDevice.c)
 *     IoWMIRegistrationControl @ 0x1406B8F20 (IoWMIRegistrationControl.c)
 *     IoCreateSymbolicLink @ 0x1406CB810 (IoCreateSymbolicLink.c)
 *     IoRegisterShutdownNotification @ 0x140751860 (IoRegisterShutdownNotification.c)
 *     WmipInitializeSecurity @ 0x1409D4198 (WmipInitializeSecurity.c)
 *     WmipInitializeDataStructs @ 0x1409D4420 (WmipInitializeDataStructs.c)
 *     WmipInitializeRegistration @ 0x1409D45A0 (WmipInitializeRegistration.c)
 */

NTSTATUS __fastcall WmipDriverEntry(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+60h] [rbp-18h] BYREF

  KeInitializeMutex(&WmipSMMutex, 0);
  WmipInitializeRegistration(0LL);
  WmipEventWorkQueueItem.Parameter = 0LL;
  WmipEventWorkQueueItem.List.Flink = 0LL;
  WmipNPNotificationSpinlock = 0LL;
  WmipEventWorkQueueItem.WorkerRoutine = (void (__fastcall *)(void *))WmipEventNotification;
  result = WmipInitializeDataStructs();
  if ( result >= 0 )
  {
    RtlInitAnsiString(&DestinationString, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WMI");
    RtlAnsiStringToUnicodeString(&WmipRegistryPath, &DestinationString, 1u);
    result = WmipInitializeSecurity();
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DeviceName, L"\\Device\\WMIDataDevice");
      result = IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0x100u, 0, &WmipServiceDeviceObject);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\WMIDataDevice");
        v3 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        if ( v3 < 0 )
        {
          IoDeleteDevice(WmipServiceDeviceObject);
        }
        else
        {
          WmipServiceDeviceObject->StackSize = 2;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)WmipIoControl;
          DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmipSystemControl;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          WmipServiceDeviceObject->Flags &= ~0x80u;
          IoWMIRegistrationControl(WmipServiceDeviceObject, 1u);
          IoRegisterShutdownNotification(WmipServiceDeviceObject);
        }
        return v3;
      }
    }
  }
  return result;
}
