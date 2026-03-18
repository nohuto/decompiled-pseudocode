/*
 * XREFs of ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00341D8
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0004570 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002DCC0 (VidSchDdiNotifyDpcWorker.c)
 *     VidSchCaptureLogs @ 0x1C00CACA0 (VidSchCaptureLogs.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VidSchiAsyncReCreateSchedulingLog(struct _VIDSCH_NODE *a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h]

  *(_QWORD *)&v3 = a1;
  *((_QWORD *)&v3 + 1) = bTracingEnabled != 0 ? 0x2000 : 2048;
  v2 = (struct _WORK_QUEUE_ITEM *)operator new[](0x40uLL, 0x66356956u, (POOL_TYPE)512);
  if ( v2 )
  {
    v2[1].List.Flink = (struct _LIST_ENTRY *)a1;
    _InterlockedAdd((volatile signed __int32 *)a1 + 2790, 1u);
    LODWORD(v2[1].List.Blink) = 1;
    *(_OWORD *)&v2[1].WorkerRoutine = v3;
    v2->List.Flink = 0LL;
    v2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VidSchiProcessAsyncOperation;
    v2->Parameter = v2;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}
