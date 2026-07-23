/*
 * XREFs of MiMapNewPfns @ 0x14084E600
 * Callers:
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiLockDynamicMemoryShared @ 0x1400A8874 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1400A88A0 (MiUnlockDynamicMemoryShared.c)
 *     MiIncreaseCommitLimits @ 0x140187FC8 (MiIncreaseCommitLimits.c)
 *     KeConfigureDynamicMemory @ 0x14028DCF4 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 */

__int64 __fastcall MiMapNewPfns(unsigned __int64 a1, __int64 a2, unsigned __int16 a3, int a4, __int64 a5)
{
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rbx

  MiGetPteAddress(48 * a1 - 0x58000000000LL);
  MiGetPteAddress(v8 - 1 + 48 * a2);
  if ( (a4 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  }
  else
  {
    CurrentThread = 0LL;
  }
  if ( (unsigned int)MiMakeZeroedPageTables() )
  {
    if ( (a4 & 2) == 0 )
    {
      if ( !(unsigned int)MiIncreaseCommitLimits((__int64)&MiSystemPartition, a2 - a1, a2 - a1, (a4 & 4) != 0, 0LL) )
        return 3221225773LL;
      if ( (a4 & 4) == 0 )
        KeConfigureDynamicMemory(a1, a2 - 1, 1);
    }
    MiInitializeDynamicPfns(a1, a2 - a1, a3, a4, a5);
    if ( CurrentThread )
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    return 0LL;
  }
  else
  {
    if ( CurrentThread )
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    return 3221225626LL;
  }
}
