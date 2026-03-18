/*
 * XREFs of PnpQueryInterface @ 0x1407146F0
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x1402A0814 (PnprQueryReplaceFeatures.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x140713FD8 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x140714090 (PnpGetDeviceLocationStrings.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x14077B5E4 (PiGetDmaAdapterFromBusInterface.c)
 *     IoQueryInterface @ 0x14077B6D0 (IoQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x14077B720 (IopQueryInterfaceRecurseUp.c)
 *     PnprIdentifyUnits @ 0x14086F770 (PnprIdentifyUnits.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140875D84 (IopQueryBusResourceUpdateInterface.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14087D310 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipUnprotectDevice @ 0x14087D3DC (PipUnprotectDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140099A40 (IoGetAttachedDeviceReferenceWithTag.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406D0C80 (IopBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall PnpQueryInterface(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rdi
  IRP *v11; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v13; // ebx
  _QWORD v15[2]; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v15[0] = 0LL;
  v15[1] = 0LL;
  if ( a4 < 0x20u )
    return 3221225485LL;
  memset(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceObject, 0x49706E50u);
  v11 = (IRP *)IopBuildSynchronousFsdRequest(
                 0x1Bu,
                 (__int64)AttachedDeviceReferenceWithTag,
                 0LL,
                 0,
                 0LL,
                 (__int64)&Event,
                 (__int64)v15);
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v11->RequestorMode = 0;
    v11->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a5;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    v13 = IofCallDriver(AttachedDeviceReferenceWithTag, v11);
    if ( v13 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v13 = v15[0];
    }
  }
  else
  {
    v13 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x49706E50u);
  return v13;
}
