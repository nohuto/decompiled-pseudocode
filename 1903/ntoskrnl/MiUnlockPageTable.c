/*
 * XREFs of MiUnlockPageTable @ 0x14019D098
 * Callers:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400C4230 (NtUnlockVirtualMemory.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiMapRetpolineStubs @ 0x1401548C8 (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14017FF6C (MiUnmapRetpolineStubs.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  MiUnlockPageTableInternal(a1, a2);
}
