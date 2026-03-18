/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C003D2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0ppq @ 0x1C003DCB8 (McTemplateK0ppq.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _WORK_QUEUE_ITEM *v15; // rdi
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  if ( a4 < 0x18 )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = 594LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, _QWORD))qword_1C00A3C78)(a2, 0LL, 0LL);
    return;
  }
  if ( *((_DWORD *)a3 + 3) )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = 602LL;
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
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    v15->List.Flink = 0LL;
    v15->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
    v15->Parameter = v15;
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    HIDWORD(v15[2].Parameter) = a5;
    v15[1].List.Flink = a1;
    LODWORD(v15[2].Parameter) = a4;
    v15[2].List.Blink = a2;
    v15[2].WorkerRoutine = a3;
    v16 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))qword_1C00A3C38)(a1);
    v15[1].Parameter = 0LL;
    v15[1].WorkerRoutine = 0LL;
    v15[1].List.Blink = (struct _LIST_ENTRY *)v16;
    ExQueueWorkItem(v15, NormalWorkQueue);
  }
  else
  {
    v19 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v19 + 24) = 626LL;
    WdLogEvent5_WdLowResource(v19);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, _QWORD))qword_1C00A3C78)(a2, 0LL, 0LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      v17,
      (unsigned int)&EventVmBusProcessPacketDpcEnd,
      v18,
      (_DWORD)a1,
      *(_QWORD *)a3,
      *((_DWORD *)a3 + 4));
}
