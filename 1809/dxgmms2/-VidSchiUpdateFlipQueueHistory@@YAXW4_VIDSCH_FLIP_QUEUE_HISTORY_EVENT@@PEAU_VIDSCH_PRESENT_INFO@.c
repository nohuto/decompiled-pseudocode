/*
 * XREFs of ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@@KK@Z @ 0x1C000F06C
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C002AC24 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_E.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_VIDSCH_PRESENT_INFO@@KK@Z @ 0x1C000F0F8 (-UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_V.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

__int64 __fastcall VidSchiUpdateFlipQueueHistory(unsigned int a1, __int64 a2, unsigned int a3, int a4)
{
  void *v8; // rbx

  v8 = (void *)(*(_QWORD *)(a2 + 112) + 72LL * *(unsigned int *)(a2 + 120));
  memset(v8, 0, 0x48uLL);
  *(_DWORD *)(a2 + 120) = (*(_DWORD *)(a2 + 120) + 1) & (*(_DWORD *)(a2 + 104) - 1);
  return _VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(v8, a1, a2, a3, a4);
}
