/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1401406F8
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x1406F4600 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400F3268 (MiStoreUpdateMemoryConditions.c)
 *     MiCanFlushMakeProgress @ 0x14015B8C8 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14015C314 (MiWakeModifiedPageWriter.c)
 */

__int64 MiFlushAllHintedStorePages()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ebx
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( !dword_1404688F8 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL);
  v3 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_1404688F0, 2u);
  v4 = 5LL * (unsigned int)dword_1404688F4;
  while ( *(&MiSystemPartition + v4 + 344) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(&MiSystemPartition, 1LL) )
    {
      MiWakeModifiedPageWriter(&MiSystemPartition, -1LL, v5, v6);
      MiStoreUpdateMemoryConditions((__int64)&MiSystemPartition);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v3) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v1 = 1;
LABEL_8:
  _InterlockedOr(&dword_1404688F0, 1u);
  _InterlockedExchangeAdd(&dword_1404688F0, 0xFFFFFFFE);
  KeSetEvent(&stru_1404687E8, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v2);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
