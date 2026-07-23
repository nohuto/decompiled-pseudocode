/*
 * XREFs of MmFreeContiguousMemory @ 0x140123090
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14013FD00 (HvlpFreeOverlayPages.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140271924 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x140281938 (IopInitializeInMemoryDumpData.c)
 *     ViReleaseDmaAdapter @ 0x14092F59C (ViReleaseDmaAdapter.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     MiFreeContiguousPages @ 0x1401231C4 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402A9508 (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140926CB8 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int v2; // r10d
  __int64 v3; // rax
  int v4; // r9d
  SIZE_T v5; // rsi
  SIZE_T v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v9; // [rsp+78h] [rbp+10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  if ( (((unsigned int)MiGetSystemRegionType((unsigned __int64)BaseAddress) - 5) & 0xFFFFFFF7) != 0 )
  {
    MiFillPteHierarchy((unsigned __int64)BaseAddress, v8);
    v2 = 4;
    do
    {
      v3 = MI_READ_PTE_LOCK_FREE(v8[v2 - 1]);
      v11 = v3;
    }
    while ( (v3 & 0x80u) == 0LL && v2 );
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    v4 = 0;
    if ( v3 < 0 )
      v4 = 512;
    ExFreeLargePool((ULONG_PTR)BaseAddress, (unsigned int *)&v9, &NumberOfBytes, v4);
    if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 || (_DWORD)v9 != 1416523587 )
      KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, (unsigned int)v9);
    v5 = NumberOfBytes;
    if ( MmProtectFreedNonPagedPool == 1 )
      v5 = NumberOfBytes + 4096;
    v6 = NumberOfBytes >> 12;
    if ( ViVerifierEnabled )
      VfFreeMemoryNotification(BaseAddress, NumberOfBytes);
    MmUnmapIoSpace(BaseAddress, v5);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(BaseAddress, 0LL, 12LL, v6);
    v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
    MiFreeContiguousPages(&MiSystemPartition, (v7 >> 12) & 0xFFFFFFFFFLL, v6);
  }
  else
  {
    ExFreePoolWithTag(BaseAddress, 0);
  }
}
