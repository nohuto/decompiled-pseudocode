/*
 * XREFs of MmFreeContiguousMemory @ 0x140116D70
 * Callers:
 *     HvlpFreeOverlayPages @ 0x140144500 (HvlpFreeOverlayPages.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14028563C (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x140296E14 (IopInitializeInMemoryDumpData.c)
 *     ViReleaseDmaAdapter @ 0x14096CE08 (ViReleaseDmaAdapter.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiFillPteHierarchy @ 0x14005F010 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeContiguousPages @ 0x140116EB4 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x140117010 (MmUnmapIoSpace.c)
 *     ExRemovePoolTag @ 0x140117888 (ExRemovePoolTag.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402C0B60 (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x14096414C (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int SystemRegionType; // eax
  int v3; // r10d
  SIZE_T v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+10h]
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+18h]
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  memset(v6, 0, 0x20uLL);
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)BaseAddress);
  if ( SystemRegionType == 5 )
  {
    ExFreePoolWithTag(BaseAddress, 0);
  }
  else
  {
    if ( !SystemRegionType )
      KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    MiFillPteHierarchy((unsigned __int64)BaseAddress, v6);
    v3 = 4;
    do
      v9 = MI_READ_PTE_LOCK_FREE(v6[v3 - 1]);
    while ( (v9 & 0x80u) == 0LL && v3 );
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    ExRemovePoolTag((ULONG_PTR)BaseAddress);
    if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 || v7 != 1416523587 )
      KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, v7);
    v4 = NumberOfBytes;
    if ( MmProtectFreedNonPagedPool == 1 )
      v4 = NumberOfBytes + 4096;
    if ( ViVerifierEnabled )
      VfFreeMemoryNotification(BaseAddress, NumberOfBytes);
    MmUnmapIoSpace(BaseAddress, v4);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(BaseAddress, 0LL, 12LL, NumberOfBytes >> 12);
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9);
    MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFLL);
  }
}
