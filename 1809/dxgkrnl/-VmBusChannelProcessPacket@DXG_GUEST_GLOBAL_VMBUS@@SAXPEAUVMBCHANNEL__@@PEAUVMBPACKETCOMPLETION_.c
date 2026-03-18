/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0036A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN@@@Z @ 0x1C0036FD0 (-VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESE.c)
 *     ?VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z @ 0x1C0037438 (-VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z.c)
 *     ?VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z @ 0x1C003748C (-VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z.c)
 *     McTemplateK0ppq @ 0x1C0037720 (McTemplateK0ppq.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct DXGKVMB_COMMAND_SETGUESTDATA *a3,
        int a4,
        unsigned int a5)
{
  int v9; // ecx
  int v10; // ecx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v12; // rdi
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      (_DWORD)a1,
      (unsigned int)&EventVmBusProcessPacketHostToVmDpcBegin,
      (_DWORD)a3,
      (_DWORD)a1,
      *(_QWORD *)a3,
      *((_DWORD *)a3 + 4));
  v9 = *((_DWORD *)a3 + 4);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        DXG_GUEST_GLOBAL_VMBUS::VmBusSetGuestData(a3);
      }
      else
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x4B677844u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x60uLL);
          v12->List.Flink = 0LL;
          v12->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
          v12->Parameter = v12;
          _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
          HIDWORD(v12[2].Parameter) = a5;
          v12[1].List.Flink = a1;
          LODWORD(v12[2].Parameter) = a4;
          v12[2].List.Blink = a2;
          v12[2].WorkerRoutine = (PWORKER_THREAD_ROUTINE)a3;
          v12[2].List.Flink = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))qword_1C008FC18)(a1);
          ExQueueWorkItem(v12, NormalWorkQueue);
          goto LABEL_13;
        }
        v15 = WdLogNewEntry5_WdLowResource();
        *(_QWORD *)(v15 + 24) = 9297LL;
        WdLogEvent5_WdLowResource(v15);
      }
    }
    else
    {
      DXG_GUEST_GLOBAL_VMBUS::VmBusPropagatePresentHistoryToken(a3);
    }
  }
  else
  {
    DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEvent(a3);
  }
  _InterlockedIncrement(&g_VgpuNumCompletedPackets);
  ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, _QWORD))qword_1C008FC58)(a2, 0LL, 0LL);
LABEL_13:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      v13,
      (unsigned int)&EventVmBusProcessPacketHostToVmDpcEnd,
      v14,
      (_DWORD)a1,
      *(_QWORD *)a3,
      *((_DWORD *)a3 + 4));
}
