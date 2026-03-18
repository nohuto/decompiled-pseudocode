/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x140071A78
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406103A0 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInitializeVadBitMap @ 0x140685A08 (MiInitializeVadBitMap.c)
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 *     MiMapLockedPagesInUserSpace @ 0x140713B18 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14089286C (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x1408963BC (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140896F50 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 880, 0LL);
  *(_BYTE *)(a1 + 1768) |= 1u;
}
