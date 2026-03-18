/*
 * XREFs of IoShutdownSystem @ 0x1405A7988
 * Callers:
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReference @ 0x14000E250 (IoGetAttachedDeviceReference.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     VfIsVerifierEnabled @ 0x14013D624 (VfIsVerifierEnabled.c)
 *     IopInterlockedRemoveHeadList @ 0x140153AC8 (IopInterlockedRemoveHeadList.c)
 *     ZwSetSystemInformation @ 0x1401C3550 (ZwSetSystemInformation.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CE4 (IopShutdownBaseFileSystems.c)
 *     IoBuildSynchronousFsdRequest @ 0x1406D0C40 (IoBuildSynchronousFsdRequest.c)
 *     PnpShutdownDevices @ 0x14085D44C (PnpShutdownDevices.c)
 *     IovUnloadDrivers @ 0x140963490 (IovUnloadDrivers.c)
 *     VfNotifyVerifierOfEvent @ 0x1409641B0 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall IoShutdownSystem(int a1)
{
  struct _DEVICE_OBJECT *v2; // rdi
  IRP *v3; // rax
  PVOID *v4; // rax
  PVOID *v5; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v7; // rax
  PVOID *v8; // rax
  PVOID *v9; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  int SystemInformation; // [rsp+80h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      IopShutdownBaseFileSystems(&IopDiskFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopCdRomFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopTapeFileSystemQueueHead);
      while ( 1 )
      {
        v8 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyLastChanceShutdownQueueHead);
        v9 = v8;
        if ( !v8 )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v8[2]);
        v7 = IoBuildSynchronousFsdRequest(0x10u, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
        if ( v7 && IofCallDriver(AttachedDeviceReference, v7) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(v9[2]);
        ExFreePoolWithTag(v9, 0);
        KeResetEvent(&Event);
      }
    }
  }
  else
  {
    PnpShutdownDevices();
    while ( 1 )
    {
      v4 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyShutdownQueueHead);
      v5 = v4;
      if ( !v4 )
        break;
      v2 = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v4[2]);
      v3 = IoBuildSynchronousFsdRequest(0x10u, v2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      if ( v3 && IofCallDriver(v2, v3) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v2);
      ObfDereferenceObject(v5[2]);
      ExFreePoolWithTag(v5, 0);
      KeResetEvent(&Event);
    }
    if ( (MmVerifierData & 0x10) != 0 )
      IovUnloadDrivers();
    SystemInformation = 2;
    ZwSetSystemInformation(SystemSoftRebootInformation, &SystemInformation, 4uLL);
  }
}
