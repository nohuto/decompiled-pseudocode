/*
 * XREFs of MiUnlockPageTable @ 0x14019D818
 * Callers:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiMapRetpolineStubs @ 0x140154F68 (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  MiUnlockPageTableInternal(a1, a2);
}
