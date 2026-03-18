/*
 * XREFs of MiFlushAllHintedStorePages @ 0x140144AC8
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x1406FA134 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400DB7A8 (MiStoreUpdateMemoryConditions.c)
 *     MiCanFlushMakeProgress @ 0x14015BF68 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14015C9B4 (MiWakeModifiedPageWriter.c)
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
  if ( !dword_140468638 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL);
  v3 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140468630, 2u);
  v4 = 5LL * (unsigned int)dword_140468634;
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
  _InterlockedOr(&dword_140468630, 1u);
  _InterlockedExchangeAdd(&dword_140468630, 0xFFFFFFFE);
  KeSetEvent(&stru_140468528, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v2);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
