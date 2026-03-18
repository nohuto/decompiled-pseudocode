/*
 * XREFs of VidSchiFlushPendingTokenList @ 0x1C00175F4
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1C00171B4 (VidSchExitIndependentFlipInternal.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0017520 (VidSchiTryEnterIndependentFlip.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N5@Z @ 0x1C000F820 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_.c)
 */

void __fastcall VidSchiFlushPendingTokenList(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // r9
  __int64 v6; // r8
  void **v7; // rdi
  bool v8; // si
  char *v9; // rbx
  void **v10; // rax
  __int64 v11; // rax

  v5 = *(int *)(*(_QWORD *)(a2 + 8LL * a3 + 2576) + 216LL * a4 + 164);
  if ( (int)v5 <= -1 )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)(a2 + 2704) + 136 * v5;
  v7 = (void **)(v6 + 120);
  v8 = *(_DWORD *)(v6 + 112) == 3;
  while ( 1 )
  {
    v9 = (char *)*v7;
    if ( *v7 == v7 )
      break;
    if ( *((void ***)v9 + 1) != v7 || (v10 = *(void ***)v9, *(char **)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *v7 = v10;
    v10[1] = v7;
    v11 = WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    *(_QWORD *)(v11 + 24) = *((_QWORD *)v9 + 19);
    WdLogEvent5_WdPresentTokenEvent(v11);
    VidSchiProcessPresentHistoryToken(
      a1,
      *((struct _VIDSCH_CONTEXT **)v9 + 3),
      *((struct _VIDSCH_DEVICE **)v9 + 4),
      (struct VIDSCH_SUBMIT_DATA2 *)(v9 + 40),
      *(union _ULARGE_INTEGER *)(v9 + 16),
      0,
      v8);
    ExFreePoolWithTag(v9, 0x30626956u);
  }
}
