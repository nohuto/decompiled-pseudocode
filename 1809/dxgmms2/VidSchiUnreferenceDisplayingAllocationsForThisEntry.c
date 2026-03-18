/*
 * XREFs of VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0016678
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C002AC24 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_E.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00166A8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v4; // ax

  if ( (*(_DWORD *)(a4 + 1120) & 0x10) != 0 )
  {
    a2 = 1023LL;
    v4 = *(_WORD *)(a3 + 33144) & (**(_DWORD **)(a4 + 1168) | (**(_DWORD **)(a4 + 1168) >> 10)) & 0x3FF;
  }
  else
  {
    v4 = *(_WORD *)(a3 + 33144);
  }
  VidSchiUnreferenceDisplayingAllocations(a1, (struct _VIDSCH_GLOBAL *)a2, (struct _VIDSCH_PRESENT_INFO *)a3, v4);
}
