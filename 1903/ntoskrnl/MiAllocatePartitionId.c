/*
 * XREFs of MiAllocatePartitionId @ 0x14088B70C
 * Callers:
 *     MmCreatePartition @ 0x14019A610 (MmCreatePartition.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x140085350 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiExpandPartitionIds @ 0x14089C5A8 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ClearBitsAndSet; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140466148, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140466168, 1u, 0);
  if ( ClearBitsAndSet == 0xFFFFFFFFLL )
  {
    while ( (unsigned int)MiExpandPartitionIds() )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140466168, 1u, 0);
      if ( ClearBitsAndSet != 0xFFFFFFFFLL )
        goto LABEL_4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140466148, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140466148);
    KeAbPostRelease((ULONG_PTR)&qword_140466148);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  else
  {
LABEL_4:
    byte_14046619C = 1;
    *(_QWORD *)(qword_140466188 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140466148, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140466148);
    KeAbPostRelease((ULONG_PTR)&qword_140466148);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned __int16)ClearBitsAndSet;
  }
}
