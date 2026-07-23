/*
 * XREFs of RawInitialize @ 0x1409D4DD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     IoRegisterFileSystem @ 0x14070E3C0 (IoRegisterFileSystem.c)
 *     IoRegisterShutdownNotification @ 0x140752A30 (IoRegisterShutdownNotification.c)
 */

NTSTATUS __fastcall RawInitialize(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Device\\RawDisk");
  result = IoCreateDevice(DriverObject, 0, &DestinationString, 8u, 0, 0, &RawDeviceDiskObject);
  if ( result >= 0 )
  {
    DriverObject->DriverUnload = (PDRIVER_UNLOAD)RawUnload;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\RawCdRom");
    v3 = IoCreateDevice(DriverObject, 0, &DestinationString, 3u, 0, 0, &RawDeviceCdRomObject);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Device\\RawTape");
      v3 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x20u, 0, 0, &RawDeviceTapeObject);
      if ( v3 >= 0 )
      {
        v3 = IoRegisterShutdownNotification(RawDeviceTapeObject);
        if ( v3 >= 0 )
        {
          RawDeviceDiskObject->Flags |= 0x10u;
          RawDeviceCdRomObject->Flags |= 0x10u;
          RawDeviceTapeObject->Flags |= 0x10u;
          DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[13] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[10] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[6] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[5] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[4] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)RawShutdown;
          IoRegisterFileSystem(RawDeviceDiskObject);
          IoRegisterFileSystem(RawDeviceCdRomObject);
          IoRegisterFileSystem(RawDeviceTapeObject);
          ObfReferenceObject(RawDeviceDiskObject);
          ObfReferenceObject(RawDeviceCdRomObject);
          ObfReferenceObject(RawDeviceTapeObject);
          RawGlobalLock.Owner = 0LL;
          RawGlobalLock.Contention = 0;
          RawGlobalLock.Event.Header.SignalState = 0;
          qword_14040F228 = (__int64)&RawMountedQueue;
          RawMountedQueue = (__int64)&RawMountedQueue;
          qword_14040F1C8 = (__int64)&RawDismountedQueue;
          RawDismountedQueue = (__int64)&RawDismountedQueue;
          RawGlobalLock.Event.Header.WaitListHead.Blink = &RawGlobalLock.Event.Header.WaitListHead;
          RawGlobalLock.Event.Header.WaitListHead.Flink = &RawGlobalLock.Event.Header.WaitListHead;
          result = 0;
          RawGlobalLock.Count = 1;
          LOWORD(RawGlobalLock.Event.Header.Lock) = 1;
          RawGlobalLock.Event.Header.Size = 6;
          return result;
        }
        IoDeleteDevice(RawDeviceTapeObject);
      }
      IoDeleteDevice(RawDeviceCdRomObject);
    }
    IoDeleteDevice(RawDeviceDiskObject);
    return v3;
  }
  return result;
}
