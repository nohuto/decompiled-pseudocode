/*
 * XREFs of USBHwSubmitUrbToUsbdSynch @ 0x1C0028AF0
 * Callers:
 *     USBDeviceStop @ 0x1C00287A0 (USBDeviceStop.c)
 *     USBHwGetSetProperty @ 0x1C0028C78 (USBHwGetSetProperty.c)
 *     USBHwGetDescriptor @ 0x1C0028FB4 (USBHwGetDescriptor.c)
 *     USBHwSelectAudioConfiguration @ 0x1C00291CC (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C00297EC (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0029C54 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002A028 (USBHwSelectStreamingMIDIInterface.c)
 *     USBHwAbortOrResetPipe @ 0x1C002A5C8 (USBHwAbortOrResetPipe.c)
 * Callees:
 *     USBD_AssignUrbToIoStackLocation @ 0x1C000E6FC (USBD_AssignUrbToIoStackLocation.c)
 */

__int64 __fastcall USBHwSubmitUrbToUsbdSynch(PDEVICE_OBJECT DeviceObject, PURB Urb, USBD_HANDLE USBDHandle)
{
  PIRP v6; // rax
  IRP *v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v10; // rdx
  NTSTATUS v11; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  KeInitializeEvent(&Object, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(0x220003u, DeviceObject, 0LL, 0, 0LL, 0, 1u, &Object, &IoStatusBlock);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBD_SyncCompletionRoutine;
  CurrentStackLocation[-1].Context = &Object;
  CurrentStackLocation[-1].Control = -32;
  v10 = v7->Tail.Overlay.CurrentStackLocation - 1;
  if ( USBDHandle )
    USBD_AssignUrbToIoStackLocation(USBDHandle, v10, Urb);
  else
    v10->Parameters.WMI.ProviderId = (ULONG_PTR)Urb;
  v11 = IofCallDriver(DeviceObject, v7);
  if ( v11 == 259 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
    {
      IoCancelIrp(v7);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      IoStatusBlock.Status = 258;
    }
  }
  else
  {
    IoStatusBlock.Status = v11;
  }
  IofCompleteRequest(v7, 0);
  return (unsigned int)IoStatusBlock.Status;
}
