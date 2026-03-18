/*
 * XREFs of VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00159C8
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CF70 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C002F47C (VidSchiProcessVsyncCompletedFlipEntry.c)
 * Callees:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00159F8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _VIDSCH_GLOBAL *v4; // rdx
  _DWORD *v5; // rax

  if ( (*(_DWORD *)(a4 + 1136) & 0x10) != 0 )
  {
    v5 = *(_DWORD **)(a4 + 1184);
    v4 = (struct _VIDSCH_GLOBAL *)(*v5 >> 10);
    LOWORD(v4) = *(_WORD *)(a3 + 33152) & (*(_WORD *)v5 | (unsigned __int16)v4) & 0x3FF;
  }
  else
  {
    v4 = (struct _VIDSCH_GLOBAL *)*(unsigned __int16 *)(a3 + 33152);
  }
  VidSchiUnreferenceDisplayingAllocations(a1, v4, (struct _VIDSCH_PRESENT_INFO *)a3, (unsigned __int16)v4);
}
