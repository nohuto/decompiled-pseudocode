/*
 * XREFs of MouEnableDisablePort @ 0x1C000C050
 * Callers:
 *     MouseClassClose @ 0x1C0001180 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C00012F0 (MouseClassCreate.c)
 *     MousePnP @ 0x1C0001570 (MousePnP.c)
 *     MouseStart @ 0x1C00026D0 (MouseStart.c)
 *     MouseClassEnableGlobalPort @ 0x1C000E00C (MouseClassEnableGlobalPort.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005728 (WPP_RECORDER_SF_.c)
 *     MouseSendIrpSynchronously @ 0x1C000D1E0 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MouEnableDisablePort(char a1, IRP *a2, PVOID *a3, PFILE_OBJECT *a4)
{
  NTSTATUS Status; // ebx
  IRP *v7; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v10; // rdi
  struct _IO_STACK_LOCATION *v11; // rax
  __int64 v12; // rdx
  struct _IO_STACK_LOCATION *v14; // rax
  PVOID PoolWithTag; // rsi
  struct _IO_STACK_LOCATION *v16; // rax
  int v17; // eax
  struct _IO_STACK_LOCATION *v18; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+48h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+18h] BYREF

  Status = 0;
  *(_QWORD *)&ObjectName.Length = 0LL;
  ObjectName.Buffer = 0LL;
  v7 = a2;
  DeviceObject = 0LL;
  ResultLength = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  if ( a3[1] == *a3 )
  {
    if ( *((_BYTE *)a3 + 64) )
    {
      CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      if ( !a1 )
      {
        v14 = v7->Tail.Overlay.CurrentStackLocation;
        if ( v14[-1].MajorFunction != 2 )
          v14[-1].MajorFunction = 2;
      }
      v10 = (struct _DEVICE_OBJECT *)a3[2];
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v11 = v7->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)MouSyncComplete;
      v11[-1].Context = &Event;
      v11[-1].Control = -32;
      IofCallDriver(v10, v7);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v7->IoStatus.Status;
      goto LABEL_8;
    }
LABEL_18:
    *((_BYTE *)a3 + 344) = a1;
    v16 = v7->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
    *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
    v16[-1].FileObject = v16->FileObject;
    v16[-1].Control = 0;
    v17 = 985091;
    v18 = v7->Tail.Overlay.CurrentStackLocation;
    if ( !a1 )
      v17 = 987139;
    v18[-1].Parameters.Read.Length = 0;
    v18[-1].Parameters.Create.Options = 0;
    v18[-1].Parameters.Read.ByteOffset.LowPart = v17;
    v18[-1].Parameters.CreatePipe.Parameters = 0LL;
    v18[-1].MajorFunction = 15;
    Status = MouseSendIrpSynchronously((PDEVICE_OBJECT)a3[2], v7);
    goto LABEL_8;
  }
  if ( !*((_BYTE *)a3 + 64) )
    goto LABEL_18;
  if ( a1 )
  {
    IoGetDeviceProperty((PDEVICE_OBJECT)a3[3], DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &ResultLength);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x43756F4Du);
    if ( !PoolWithTag )
      return 3221225626LL;
    IoGetDeviceProperty(
      (PDEVICE_OBJECT)a3[3],
      DevicePropertyPhysicalDeviceObjectName,
      ResultLength,
      PoolWithTag,
      &ResultLength);
    ObjectName.MaximumLength = ResultLength;
    ObjectName.Buffer = (PWSTR)PoolWithTag;
    ObjectName.Length = ResultLength - 2;
    Status = IoGetDeviceObjectPointer(&ObjectName, 0x1F01FFu, a4, &DeviceObject);
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( Status >= 0 )
      Status = IoRegisterPlugPlayNotification(
                 EventCategoryTargetDeviceChange,
                 0,
                 *a4,
                 *((PDRIVER_OBJECT *)*a3 + 1),
                 MouseClassPlugPlayNotification,
                 a3,
                 a3 + 39);
  }
  else
  {
    ObfDereferenceObject(*a4);
    *a4 = 0LL;
  }
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v12, 2LL);
    }
  }
  return (unsigned int)Status;
}
