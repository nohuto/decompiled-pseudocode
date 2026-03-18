/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x1400EF004
 * Callers:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MiProbeAndLockComplete @ 0x1400EEE40 (MiProbeAndLockComplete.c)
 *     MiFaultInProbeAddress @ 0x1400EEE90 (MiFaultInProbeAddress.c)
 *     MmProbeAndLockSelectedPages @ 0x1400EF040 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140157AA0 (MmStoreProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFD20 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 32) )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 96));
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 96), *(_BYTE *)(a1 + 68));
}
