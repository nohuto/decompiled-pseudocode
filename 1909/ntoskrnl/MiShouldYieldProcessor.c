/*
 * XREFs of MiShouldYieldProcessor @ 0x1402C4884
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 */

LOGICAL MiShouldYieldProcessor()
{
  return KeShouldYieldProcessor();
}
