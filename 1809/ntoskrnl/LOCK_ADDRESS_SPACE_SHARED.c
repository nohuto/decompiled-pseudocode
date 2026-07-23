/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x140075450
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     MiCfgInitializeProcess @ 0x140678F10 (MiCfgInitializeProcess.c)
 *     MmGetImageBase @ 0x1406BB644 (MmGetImageBase.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 *     MiHotPatchProcess @ 0x140856864 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140859E44 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140859F20 (MmIsFileMapped.c)
 *     MiCreateLargePageVad @ 0x14085E288 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14085E5D4 (MiFreeLargePageView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 872, 0LL);
  *(_BYTE *)(a1 + 1752) |= 2u;
  return result;
}
