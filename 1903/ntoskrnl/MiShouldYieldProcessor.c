/*
 * XREFs of MiShouldYieldProcessor @ 0x1402C4B24
 * Callers:
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400C4230 (NtUnlockVirtualMemory.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 */

LOGICAL MiShouldYieldProcessor()
{
  return KeShouldYieldProcessor();
}
