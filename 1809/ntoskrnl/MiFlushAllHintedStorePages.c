/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1402B8034
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x14085C2E4 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF40 (KeSetActualBasePriorityThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEDCC (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x1401532D8 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x140153330 (MiCanFlushMakeProgress.c)
 */

__int64 __fastcall MiFlushAllHintedStorePages(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r8

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( !dword_14043CDB8 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL, a3);
  v7 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_14043CDB0, 2u);
  v8 = 5LL * (unsigned int)dword_14043CDB4;
  while ( *(&MiSystemPartition + v8 + 344) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress((__int64)&MiSystemPartition, 1) )
    {
      MiWakeModifiedPageWriter((__int64)&MiSystemPartition, -1LL);
      MiStoreUpdateMemoryConditions((__int64)&MiSystemPartition);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v7) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v4 = 1;
LABEL_8:
  _InterlockedOr(&dword_14043CDB0, 1u);
  _InterlockedExchangeAdd(&dword_14043CDB0, 0xFFFFFFFE);
  KeSetEvent(&stru_14043CCA0, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v9);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v4;
}
