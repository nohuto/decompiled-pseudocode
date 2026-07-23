/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x1402FE228
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x1402FCC7C (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpLargeAllocGetMetadata @ 0x1400081A8 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x140008208 (RtlpHpLargeLockAcquireShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int8 v6; // si
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbp
  struct _KPRCB *CurrentPrcb; // rcx

  v6 = RtlpHpLargeLockAcquireShared((_DWORD *)a1, a3);
  result = RtlpHpLargeAllocGetMetadata(a1, a2);
  v8 = result;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      result = v6;
      __writecr8(v6);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  *(_QWORD *)(v8 + 32) |= 1uLL;
  return result;
}
