/*
 * XREFs of ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C01EBCE0
 * Callers:
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C01EC200 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0035FC0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C003681C (-DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rbx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed", (wchar_t *)L"%p", a1);
  v2 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C008FC18)(a1);
  KeSetEvent(*(PRKEVENT *)(v2 + 4192), 0, 0);
  DXG_VMBUS_CHANNEL_BASE::DisableChannel((DXG_VMBUS_CHANNEL_BASE *)(v2 + 4152));
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v2 + 192));
  if ( WorkItem )
  {
    IoQueueWorkItem(
      WorkItem,
      (PIO_WORKITEM_ROUTINE)DXG_GUEST_VIRTUALGPU_VMBUS::InvalidateAdapterWorkItem,
      NormalWorkQueue,
      WorkItem);
  }
  else
  {
    v5 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v5 + 24) = 8643LL;
    WdLogEvent5_WdLowResource(v5);
  }
}
