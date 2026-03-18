/*
 * XREFs of RtlpHpAcquireLockShared @ 0x14001D7C0
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x14001D580 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x14001D664 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14001E120 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSlotAllocate @ 0x140038A80 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140111840 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLargeLockAcquireShared @ 0x14031C2B0 (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a1, 0LL);
  return -1;
}
