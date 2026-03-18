/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x140093854
 * Callers:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiProbeAndLockComplete @ 0x1400936AC (MiProbeAndLockComplete.c)
 *     MiFaultInProbeAddress @ 0x1400936FC (MiFaultInProbeAddress.c)
 *     MmProbeAndLockSelectedPages @ 0x1400949E0 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140153D54 (MmStoreProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8390 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140104A70 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 96), v1);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 96), *(_BYTE *)(a1 + 68));
}
