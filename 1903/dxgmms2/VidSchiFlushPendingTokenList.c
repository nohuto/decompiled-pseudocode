/*
 * XREFs of VidSchiFlushPendingTokenList @ 0x1C00169E8
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1C0016598 (VidSchExitIndependentFlipInternal.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0016914 (VidSchiTryEnterIndependentFlip.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0012174 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N6@Z @ 0x1C00130E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_H.c)
 */

void __fastcall VidSchiFlushPendingTokenList(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  void **v8; // rsi
  bool v9; // bp
  char *v10; // rbx
  void **v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v6 = *(int *)(*(_QWORD *)(a2 + 8LL * a3 + 2576) + 216LL * a4 + 172);
  if ( (int)v6 <= -1 )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)(a2 + 2704) + 136 * v6;
  v8 = (void **)(v7 + 120);
  v9 = *(_DWORD *)(v7 + 112) == 3;
  while ( 1 )
  {
    v10 = (char *)*v8;
    if ( *v8 == v8 )
      break;
    if ( *((void ***)v10 + 1) != v8 || (v11 = *(void ***)v10, *(char **)(*(_QWORD *)v10 + 8LL) != v10) )
      __fastfail(3u);
    *v8 = v11;
    v11[1] = v8;
    v12 = WdLogNewEntry5_WdPresentTokenEvent(a1, v6);
    *(_QWORD *)(v12 + 24) = *((_QWORD *)v10 + 20);
    WdLogEvent5_WdPresentTokenEvent(v12);
    VidSchiProcessPresentHistoryToken(
      a1,
      *((struct _VIDSCH_CONTEXT **)v10 + 3),
      *((struct VIDSCH_HW_QUEUE **)v10 + 4),
      *((struct _VIDSCH_DEVICE **)v10 + 5),
      (struct VIDSCH_SUBMIT_DATA2 *)(v10 + 48),
      *(union _ULARGE_INTEGER *)(v10 + 16),
      0,
      v9);
    --*(_DWORD *)(a2 + 724);
    v13 = *((_QWORD *)v10 + 3);
    if ( v13 )
      --*(_DWORD *)(v13 + 784);
    v14 = *((_QWORD *)v10 + 5);
    if ( v14 )
    {
      --*(_DWORD *)(v14 + 1276);
      VidSchiSignalRegisteredEvent(a2, (struct _KEVENT **)(*((_QWORD *)v10 + 5) + 136LL));
    }
    VidSchiSignalRegisteredEvent(a2, (struct _KEVENT **)(a2 + 1592));
    ExFreePoolWithTag(v10, 0x30626956u);
  }
}
