/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x140053970
 * Callers:
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14067F8C0 (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BDBF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmGetImageBase @ 0x1406DB7E0 (MmGetImageBase.c)
 *     MiHotPatchProcess @ 0x14088E2E0 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x14089209C (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140892178 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140899374 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140899728 (MiFreeLargePageView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 880, 0LL);
  *(_BYTE *)(a1 + 1768) |= 2u;
  return result;
}
