/*
 * XREFs of RtlpHpReleaseLockShared @ 0x14000817C
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1401B66BC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1401B6758 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpReleaseLockShared(volatile LONG *BugCheckParameter2, int a2, unsigned __int8 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(BugCheckParameter2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a3 < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    result = a3;
    __writecr8(a3);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
