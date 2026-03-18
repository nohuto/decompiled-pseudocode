/*
 * XREFs of VidSchiCompletePendingFlipOnPlane @ 0x1C0039AB4
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002DFD0 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0039A40 (VidSchiCompletePendingFlip.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C00171B4 (VidSchExitIndependentFlipInternal.c)
 */

__int64 __fastcall VidSchiCompletePendingFlipOnPlane(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  __int64 v6; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF
  char v14; // [rsp+80h] [rbp+18h] BYREF

  v6 = a3;
  v9 = *(int *)(216LL * a5 + *(_QWORD *)(a2 + 8LL * a3 + 2576) + 164);
  if ( (int)v9 <= -1 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)(a2 + 2704) + 136 * v9;
  if ( v10 && (unsigned int)(*(_DWORD *)(v10 + 112) - 1) <= 1 )
  {
    v13 = 0LL;
    v11 = *(_QWORD *)(v10 + 8);
    v14 = 0;
    VidSchExitIndependentFlipInternal(a1, a2, (_DWORD *)v10, v11, 0, 0, &v14, &v13);
  }
  VidSchiCompleteFlipEntry(a1, a2, v6, a5, 0, 63, a4, 0LL);
  if ( a4 == 9 )
    *(_DWORD *)(*(_QWORD *)(a2 + 8 * v6 + 2576) + 2336LL) &= ~(1 << a5);
  return 0LL;
}
