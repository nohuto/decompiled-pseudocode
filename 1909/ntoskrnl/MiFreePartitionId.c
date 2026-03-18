/*
 * XREFs of MiFreePartitionId @ 0x14088B04C
 * Callers:
 *     MiDeletePartition @ 0x1402C9994 (MiDeletePartition.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140465E48, 0LL);
  _bittestandreset((signed __int32 *)qword_140465E68->Buffer, v2);
  *(_QWORD *)(qword_140465E88 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140465E48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140465E48);
  KeAbPostRelease((ULONG_PTR)&qword_140465E48);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
