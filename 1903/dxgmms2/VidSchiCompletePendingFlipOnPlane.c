/*
 * XREFs of VidSchiCompletePendingFlipOnPlane @ 0x1C003A4F4
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C000A480 (VidSchUnwaitFlipQueue.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000C010 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F1E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036220 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C003A45C (VidSchiCompletePendingFlip.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000D7B0 (VidSchiCompleteFlipEntry.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C0016598 (VidSchExitIndependentFlipInternal.c)
 */

__int64 __fastcall VidSchiCompletePendingFlipOnPlane(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  char v14; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 && !*(_BYTE *)(a4 + 56) )
  {
    v9 = *(int *)(*(_QWORD *)(a2 + 8LL * a3 + 2576) + 216LL * *(unsigned int *)(a4 + 60) + 172);
    if ( (int)v9 <= -1 )
      v10 = 0LL;
    else
      v10 = *(_QWORD *)(a2 + 2704) + 136 * v9;
    if ( v10 && (unsigned int)(*(_DWORD *)(v10 + 112) - 1) <= 1 )
    {
      v13[0] = 0LL;
      v11 = *(_QWORD *)(v10 + 8);
      v14 = 0;
      VidSchExitIndependentFlipInternal(a1, a2, (_DWORD *)v10, v11, 0, 0, &v14, v13);
    }
  }
  VidSchiCompleteFlipEntry(a1, a2, a3, a4, 0, 63, a5, 0LL);
  return 0LL;
}
