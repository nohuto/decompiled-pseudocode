/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x14031B9A0
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x14031B054 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpHpLargeLockAcquireShared @ 0x14031BD00 (RtlpHpLargeLockAcquireShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v4; // r14
  unsigned __int64 result; // rax
  unsigned __int8 v7; // si
  unsigned __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = a3;
  result = RtlpHpLargeLockAcquireShared(a1, a3);
  v7 = result;
  v8 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( v8 )
      v8 ^= a1 + 72;
    else
      v8 = 0LL;
  }
  while ( v8 )
  {
    result = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < result )
    {
      result = *(_QWORD *)v8;
    }
    else
    {
      if ( a2 <= result )
        goto LABEL_16;
      result = *(_QWORD *)(v8 + 8);
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && result )
      v8 ^= result;
    else
      v8 = result;
  }
  v8 = 0LL;
LABEL_16:
  if ( (v4 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      result = v7;
      __writecr8(v7);
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
