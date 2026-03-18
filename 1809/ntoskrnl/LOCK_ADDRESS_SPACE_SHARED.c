/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x140075460
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DD340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x140604B60 (MiLockVadRange.c)
 *     MiCfgInitializeProcess @ 0x140677D70 (MiCfgInitializeProcess.c)
 *     MmGetImageBase @ 0x1406BA3C4 (MmGetImageBase.c)
 *     NtAllocateUserPhysicalPages @ 0x1408506B0 (NtAllocateUserPhysicalPages.c)
 *     MiHotPatchProcess @ 0x140855624 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140858C04 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140858CE0 (MmIsFileMapped.c)
 *     MiCreateLargePageVad @ 0x14085D048 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14085D394 (MiFreeLargePageView.c)
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
