/*
 * XREFs of RtlpHpLfhContextCompact @ 0x14001D580
 * Callers:
 *     RtlpHpHeapCompact @ 0x14010AF94 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpLfhOwnerCompact @ 0x14001D664 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x14001D7C0 (RtlpHpAcquireLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2)
{
  int v4; // ebp
  unsigned __int8 v5; // si
  __int64 *v6; // rbx
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v5 = -1;
  else
    v5 = RtlpHpAcquireLockShared(a1 + 72, *(unsigned __int8 *)(a1 + 57));
  v6 = (__int64 *)(a1 + 128);
  v7 = 129LL;
  do
  {
    result = *v6;
    if ( (*v6 & 1) == 0 )
      result = RtlpHpLfhOwnerCompact(a1, *v6, a2 | 1u);
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( !v4 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = v5;
      __writecr8(v5);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 72);
      KeAbPostRelease(a1 + 72);
      return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v9, v10, v11);
    }
  }
  return result;
}
