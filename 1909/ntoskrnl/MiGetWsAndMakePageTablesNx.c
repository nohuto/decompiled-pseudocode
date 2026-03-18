/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x14019C2A4
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140789C18 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14015D2F4 (MiPerformSafePdeWrite.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  unsigned __int16 *v0; // rsi
  unsigned __int8 v1; // bl
  signed __int64 v2; // rax
  __int64 v3; // rcx

  v0 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v1 = MiLockWorkingSetShared((__int64)v0);
  MiLockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  v2 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(v3, 0xFFFFF6FB7DBEDF68uLL, v2, 2);
  MiUnlockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)v0, v1);
  return KeFlushTb(1LL, 0);
}
