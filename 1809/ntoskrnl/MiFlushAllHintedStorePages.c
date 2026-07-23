/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1402B8224
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x14085D544 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEE4C (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x1401533D8 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x140153430 (MiCanFlushMakeProgress.c)
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
  if ( !dword_14043DE78 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL, a3);
  v7 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_14043DE70, 2u);
  v8 = 5LL * (unsigned int)dword_14043DE74;
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
  _InterlockedOr(&dword_14043DE70, 1u);
  _InterlockedExchangeAdd(&dword_14043DE70, 0xFFFFFFFE);
  KeSetEvent(&stru_14043DD60, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v9);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v4;
}
