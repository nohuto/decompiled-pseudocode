/*
 * XREFs of RtlpHpAcquireLockShared @ 0x140009644
 * Callers:
 *     RtlpHpLargeLockAcquireShared @ 0x140008208 (RtlpHpLargeLockAcquireShared.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140009064 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BAE80 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhContextCompact @ 0x1401B6534 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1401B65D0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD5FC (RtlpHpLfhSubsegmentDecommitPages.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x14009D7C0 (ExAcquireSpinLockShared.c)
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
