/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x1400DE7F4
 * Callers:
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 *     MmProbeAndLockSelectedPages @ 0x1400DE3F0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockComplete @ 0x1400DE630 (MiProbeAndLockComplete.c)
 *     MiFaultInProbeAddress @ 0x1400DE680 (MiFaultInProbeAddress.c)
 *     MmStoreProbeAndLockPages @ 0x140158140 (MmStoreProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFA80 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
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
