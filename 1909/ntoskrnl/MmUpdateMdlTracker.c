/*
 * XREFs of MmUpdateMdlTracker @ 0x1402C02A8
 * Callers:
 *     IopProbeAndLockPages @ 0x1400CBEF0 (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x140127E30 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x14029AAD0 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x14029AB30 (IopProbeAndLockPages_2.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

_BOOL8 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  PEPROCESS v3; // r9
  _QWORD *i; // rbx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(PEPROCESS *)(a1 + 16);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = 0LL;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  i = *(_QWORD **)&v3[1].ThreadSeed[6];
  if ( !i )
    return 0LL;
  KeAcquireInStackQueuedSpinLock(i + 3, &LockHandle);
LABEL_5:
  for ( i = (_QWORD *)*i; i; i = (_QWORD *)i[1] )
  {
    if ( a1 < i[3] )
      goto LABEL_5;
    if ( a1 <= i[3] )
    {
      if ( a2 || a3 )
      {
        i[9] = a2;
        i[10] = a3;
        memset(i + 11, 0, 0x30uLL);
      }
      break;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return i != 0;
}
