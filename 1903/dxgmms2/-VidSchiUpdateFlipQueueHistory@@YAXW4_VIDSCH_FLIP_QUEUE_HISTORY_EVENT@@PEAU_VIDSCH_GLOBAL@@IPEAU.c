/*
 * XREFs of ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000D4C0
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C000A480 (VidSchUnwaitFlipQueue.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CF70 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F1E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C002F47C (VidSchiProcessVsyncCompletedFlipEntry.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 */

__int64 __fastcall VidSchiUpdateFlipQueueHistory(DWORD a1, __int64 a2, unsigned int a3, __int64 a4, DWORD a5)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  int v9; // ebx
  LARGE_INTEGER *v10; // rdi
  __int64 result; // rax

  v7 = a4 + 1312LL * a5;
  v8 = *(_QWORD *)(a2 + 8LL * a3 + 2576);
  if ( (*(_DWORD *)(v7 + 1216) & 0x10) != 0 )
    v9 = ((unsigned __int16)**(_DWORD **)(v7 + 1264) | (unsigned __int16)(**(_DWORD **)(v7 + 1264) >> 10)) & 0x3FF;
  else
    v9 = (1 << *(_DWORD *)(a2 + 140)) - 1;
  v10 = (LARGE_INTEGER *)(*(_QWORD *)(v8 + 120) + 72LL * *(unsigned int *)(v8 + 128));
  memset(v10, 0, 0x48uLL);
  *(_DWORD *)(v8 + 128) = (*(_DWORD *)(v8 + 128) + 1) & (*(_DWORD *)(v8 + 112) - 1);
  v10->LowPart = a1;
  v10[2].LowPart = v9;
  BYTE4(v10[2].QuadPart) = *(_BYTE *)(a4 + 56);
  v10[3].LowPart = a5;
  v10[1] = KeQueryPerformanceCounter(0LL);
  LOBYTE(v10[4].LowPart) = (*(_DWORD *)(v7 + 1216) & 0x20) != 0;
  v10[4].HighPart = *(_DWORD *)(v7 + 1132);
  v10[3].HighPart = *(_DWORD *)(v7 + 1136);
  v10[5].HighPart = *(_DWORD *)(v8 + 2348);
  v10[5].LowPart = *(_DWORD *)(v8 + 2344);
  v10[6].LowPart = *(_DWORD *)(a4 + 32);
  v10[6].HighPart = *(_DWORD *)(a4 + 36);
  v10[7].LowPart = *(_DWORD *)(a4 + 40);
  v10[7].HighPart = *(_DWORD *)(a4 + 44);
  v10[8].LowPart = *(_DWORD *)(a4 + 48);
  result = *(unsigned int *)(a4 + 52);
  v10[8].HighPart = result;
  return result;
}
