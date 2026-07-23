/*
 * XREFs of RtlpHpLargeAllocSize @ 0x1400080E4
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x1400BEAE0 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpLargeAllocGetMetadata @ 0x1400081A8 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x140008208 (RtlpHpLargeLockAcquireShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  char v6; // r14
  unsigned __int8 v8; // si
  __int64 Metadata; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // rdi
  int v13; // eax
  signed __int32 v14[18]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a3;
  v8 = RtlpHpLargeLockAcquireShared(a1, a3);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
  v10 = Metadata;
  if ( Metadata )
  {
    if ( a4 )
    {
      if ( (*(_BYTE *)(Metadata + 32) & 1) != 0 )
      {
        _InterlockedOr(v14, 0);
        v13 = 1;
      }
      else
      {
        v13 = 0;
      }
      *a4 = v13;
    }
    v11 = (*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)*(_DWORD *)(v10 + 24);
  }
  else
  {
    v11 = -1LL;
  }
  if ( (v6 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick();
      }
      __writecr8(v8);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 64);
      KeAbPostRelease(a1 + 64);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return v11;
}
