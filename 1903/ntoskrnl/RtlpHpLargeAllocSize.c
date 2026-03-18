/*
 * XREFs of RtlpHpLargeAllocSize @ 0x14031C088
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x14031B754 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpHpLargeLockAcquireShared @ 0x14031C2B0 (RtlpHpLargeLockAcquireShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  char v6; // r14
  unsigned __int8 v8; // si
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v16[14]; // [rsp+0h] [rbp-38h] BYREF

  v6 = a3;
  v8 = RtlpHpLargeLockAcquireShared(a1, a3);
  v9 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= a1 + 72;
    else
      v9 = 0LL;
  }
  while ( 1 )
  {
    if ( !v9 )
    {
      v12 = -1LL;
      goto LABEL_22;
    }
    v10 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v10 )
      break;
    v11 = *(_QWORD *)v9;
LABEL_10:
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  if ( a2 > v10 )
  {
    v11 = *(_QWORD *)(v9 + 8);
    goto LABEL_10;
  }
  if ( a4 )
  {
    if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
    {
      _InterlockedOr(v16, 0);
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    *a4 = v13;
  }
  v12 = (*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)*(_DWORD *)(v9 + 24);
LABEL_22:
  if ( (v6 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v8);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v12;
}
