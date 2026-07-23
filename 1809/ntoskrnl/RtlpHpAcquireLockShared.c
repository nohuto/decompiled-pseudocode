/*
 * XREFs of RtlpHpAcquireLockShared @ 0x140009644
 * Callers:
 *     RtlpHpLargeLockAcquireShared @ 0x140008208 (RtlpHpLargeLockAcquireShared.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140009064 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhContextCompact @ 0x1401B66BC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1401B6758 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD8EC (RtlpHpLfhSubsegmentDecommitPages.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( (_DWORD)a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a1, a2);
  return -1;
}
