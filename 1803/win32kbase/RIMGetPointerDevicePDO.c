/*
 * XREFs of RIMGetPointerDevicePDO @ 0x1C0054AB0
 * Callers:
 *     RIMGetContainerId @ 0x1C0054960 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C0054A08 (RIMGetPanelId.c)
 *     RIMGetDeviceParent @ 0x1C00EFA6C (RIMGetDeviceParent.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0107200 (RIMUpdateMonitorQuirk.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetPointerDevicePDO(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  PIRP v4; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS Status; // ebx
  _QWORD *Information; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  if ( !DeviceObject )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(DeviceObject, a2);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v4 )
  {
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 7;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    v4->IoStatus.Status = -1073741637;
    Status = IofCallDriver(DeviceObject, v4);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Information = (_QWORD *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
      if ( *(_DWORD *)Information != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
      *a2 = Information[1];
      ExFreePoolWithTag(Information, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Status;
}
