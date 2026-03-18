/*
 * XREFs of MiLocateVadEvent @ 0x1400ACF04
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140670298 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x140670744 (MiFreeToSubAllocatedRegion.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DDA24 (MiMarkPrivateImageCfgBits.c)
 *     MiGetReadyInPageBlock @ 0x14088B27C (MiGetReadyInPageBlock.c)
 *     MiCopyLargeVad @ 0x140899938 (MiCopyLargeVad.c)
 *     MiAllocateChildVads @ 0x14089A8C0 (MiAllocateChildVads.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1400ACF18 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiLocateVadEvent(__int64 a1, __int64 a2)
{
  return MiLocateLockedVadEvent(a1, a2);
}
