/*
 * XREFs of VidSchiRestartQueuedFlip @ 0x1C002FB4C
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000F1C4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 */

__int64 __fastcall VidSchiRestartQueuedFlip(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rbp
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // r10d
  int v11; // eax
  __int64 v12; // r8
  __int64 result; // rax

  v5 = *(_QWORD *)(a2 + 32);
  v7 = a3;
  v8 = a4;
  v9 = *(_QWORD *)(v5 + 8LL * a3 + 2576);
  v10 = *(_DWORD *)(*(_QWORD *)(v9 + 8LL * a4 + 24) + 40LL);
  if ( v10 != a5 )
  {
    v11 = VidSchiCompleteFlipEntry(a1, v5, a3, a4, v10, ((_BYTE)a5 - 1) & 0x3F, 6, 0LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                      + 8 * v7
                      + 88);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v7 + 5792) + 8LL), -v11);
      *(_DWORD *)(*(_QWORD *)(v5 + 8 * v7 + 5792) + 4LL) += v11;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), -v11);
      *(_DWORD *)(v12 + 4) += v11;
    }
  }
  result = *(_QWORD *)(v9 + 8 * v8 + 24);
  *(_DWORD *)(result + 40) = a5;
  return result;
}
