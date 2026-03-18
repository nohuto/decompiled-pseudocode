/*
 * XREFs of VidSchiSignalRegisteredEvent @ 0x1C00134BC
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C0012BF0 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C001306C (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002DFD0 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033964 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034BD8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035378 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0038814 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00C6830 (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C00C9F6C (VidSchUnreferenceDmaBuffer.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C00CA8E0 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalRegisteredEvent(__int64 a1, struct _KEVENT **a2)
{
  KIRQL v4; // si
  struct _KEVENT *i; // rbx
  int Flink; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1664), &LockHandle);
  for ( i = *a2; i != (struct _KEVENT *)a2; i = *(struct _KEVENT **)&i->Header.Lock )
  {
    if ( LODWORD(i->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 4LL * LODWORD(i[1].Header.WaitListHead.Blink) + 1140) < *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 244LL) )
        goto LABEL_7;
    }
    else if ( ((__int64)i[1].Header.WaitListHead.Flink & 0x10) == 0
           || (Flink = (int)i[1].Header.WaitListHead.Blink->Flink, (HIDWORD(i[5].Header.WaitListHead.Blink) = Flink) == 0) )
    {
LABEL_7:
      ++i[5].Header.LockNV;
      KeSetEvent(i + 4, 0, 0);
      continue;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v4);
}
