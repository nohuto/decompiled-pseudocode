/*
 * XREFs of ACPIFilterIrpQueryCapabilities @ 0x1C009E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIFilterIrpQueryCapabilities(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rbp
  _QWORD *PoolWithTag; // rbx
  PIO_WORKITEM WorkItem; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v8; // rax
  unsigned int v9; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x49706341u);
  if ( !PoolWithTag )
    goto LABEL_6;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  if ( !WorkItem )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_6:
    v9 = -1073741670;
    Irp->IoStatus.Status = -1073741670;
    IofCompleteRequest(Irp, 0);
    return v9;
  }
  PoolWithTag[5] = 0LL;
  PoolWithTag[2] = ACPIBusAndFilterIrpQueryCapabilities;
  *PoolWithTag = DeviceObject;
  *((_DWORD *)PoolWithTag + 6) = 257;
  PoolWithTag[1] = Irp;
  PoolWithTag[4] = WorkItem;
  _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 680));
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v8 = Irp->Tail.Overlay.CurrentStackLocation;
  v8[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIIrpGenericFilterCompletionHandler;
  v8[-1].Context = PoolWithTag;
  v8[-1].Control = -32;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), Irp);
  return 259;
}
