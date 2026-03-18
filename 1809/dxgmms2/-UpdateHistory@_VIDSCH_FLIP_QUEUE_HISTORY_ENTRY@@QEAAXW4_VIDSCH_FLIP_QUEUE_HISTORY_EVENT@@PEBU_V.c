/*
 * XREFs of ?UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_VIDSCH_PRESENT_INFO@@KK@Z @ 0x1C000F0F8
 * Callers:
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@@KK@Z @ 0x1C000F06C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 result; // rax

  v7 = *(_DWORD **)(a3 + 8LL * a4 + 24);
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 20) = a5;
  *(LARGE_INTEGER *)(a1 + 8) = KeQueryPerformanceCounter(0LL);
  v8 = 324LL * a5;
  *(_BYTE *)(a1 + 28) = (v7[v8 + 294] & 0x20) != 0;
  *(_DWORD *)(a1 + 32) = v7[v8 + 277];
  *(_DWORD *)(a1 + 24) = v7[v8 + 278];
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a3 + 2340);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a3 + 2336);
  *(_DWORD *)(a1 + 44) = v7[8];
  *(_DWORD *)(a1 + 48) = v7[9];
  *(_DWORD *)(a1 + 52) = v7[10];
  *(_DWORD *)(a1 + 56) = v7[11];
  *(_DWORD *)(a1 + 60) = v7[12];
  result = (unsigned int)v7[13];
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
