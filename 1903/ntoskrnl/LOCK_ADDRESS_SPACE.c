/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x140071808
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14060E890 (MiAllocateFromSubAllocatedRegion.c)
 *     MmCopyVirtualMemory @ 0x14064CFB0 (MmCopyVirtualMemory.c)
 *     MiInitializeVadBitMap @ 0x140692498 (MiInitializeVadBitMap.c)
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 *     MiMapLockedPagesInUserSpace @ 0x140711D38 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14077A454 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14089304C (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x140896B9C (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 880, 0LL);
  *(_BYTE *)(a1 + 1768) |= 1u;
}
