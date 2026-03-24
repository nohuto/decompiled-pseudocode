/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x1400767B8
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F8BBC (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x140604B60 (MiLockVadRange.c)
 *     MmCopyVirtualMemory @ 0x140644790 (MmCopyVirtualMemory.c)
 *     MiInitializeVadBitMap @ 0x140679BE0 (MiInitializeVadBitMap.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B24 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544A0 (MiMapViewOfPhysicalSection.c)
 *     MiResizeAweBitMap @ 0x1408501F4 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140850F10 (NtFreeUserPhysicalPages.c)
 *     MiAllocateEnclaveVad @ 0x140859158 (MiAllocateEnclaveVad.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 872, 0LL);
  *(_BYTE *)(a1 + 1752) |= 1u;
}
