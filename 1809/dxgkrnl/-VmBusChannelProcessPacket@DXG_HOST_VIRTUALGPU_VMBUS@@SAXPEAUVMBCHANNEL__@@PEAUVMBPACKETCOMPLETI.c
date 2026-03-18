/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0036DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0ppq @ 0x1C0037720 (McTemplateK0ppq.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        WORKER_THREAD_ROUTINE *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v9; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v11; // rdi
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  if ( a4 < 0x18 )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 593LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, _QWORD))qword_1C008FC58)(a2, 0LL, 0LL);
    return;
  }
  if ( *((_DWORD *)a3 + 3) )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 601LL;
    goto LABEL_5;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      (_DWORD)a1,
      (unsigned int)&EventVmBusProcessPacketDpcBegin,
      (_DWORD)a3,
      (_DWORD)a1,
      *(_QWORD *)a3,
      *((_DWORD *)a3 + 4));
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x4B677844u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    v11->List.Flink = 0LL;
    v11->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
    v11->Parameter = v11;
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    HIDWORD(v11[2].Parameter) = a5;
    v11[1].List.Flink = a1;
    LODWORD(v11[2].Parameter) = a4;
    v11[2].List.Blink = a2;
    v11[2].WorkerRoutine = a3;
    v12 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))qword_1C008FC18)(a1);
    v11[1].Parameter = 0LL;
    v11[1].WorkerRoutine = 0LL;
    v11[1].List.Blink = (struct _LIST_ENTRY *)v12;
    ExQueueWorkItem(v11, NormalWorkQueue);
  }
  else
  {
    v15 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v15 + 24) = 625LL;
    WdLogEvent5_WdLowResource(v15);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, _QWORD))qword_1C008FC58)(a2, 0LL, 0LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      v13,
      (unsigned int)&EventVmBusProcessPacketDpcEnd,
      v14,
      (_DWORD)a1,
      *(_QWORD *)a3,
      *((_DWORD *)a3 + 4));
}
