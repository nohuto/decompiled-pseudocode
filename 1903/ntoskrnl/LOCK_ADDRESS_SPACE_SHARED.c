/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x1400538D0
 * Callers:
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14067980C (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BE140 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmGetImageBase @ 0x1406DAEB4 (MmGetImageBase.c)
 *     MiHotPatchProcess @ 0x14088EAC0 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x14089287C (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140892958 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140899B54 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140899F08 (MiFreeLargePageView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 880, 0LL);
  *(_BYTE *)(a1 + 1768) |= 2u;
  return result;
}
