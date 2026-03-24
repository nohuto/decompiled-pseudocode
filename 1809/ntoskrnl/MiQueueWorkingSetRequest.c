/*
 * XREFs of MiQueueWorkingSetRequest @ 0x140175CFC
 * Callers:
 *     MiFindContiguousPages @ 0x14009A110 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x140175CD4 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1402B2FAC (MiEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1402B4338 (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400B8AA0 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v4; // eax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 7024);
  if ( v2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043AE80, &LockHandle);
    v4 = *(_DWORD *)(v2 + 40);
    if ( !v4 )
    {
      KeResetEvent((PRKEVENT)v2);
      v4 = *(_DWORD *)(v2 + 40);
    }
    *(_DWORD *)(v2 + 40) = a2 | v4;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    KeSetEvent((PRKEVENT)(v2 + 104), 0, 0);
    KeWaitForSingleObject((PVOID)v2, WrVirtualMemory, 0, 0, 0LL);
  }
}
