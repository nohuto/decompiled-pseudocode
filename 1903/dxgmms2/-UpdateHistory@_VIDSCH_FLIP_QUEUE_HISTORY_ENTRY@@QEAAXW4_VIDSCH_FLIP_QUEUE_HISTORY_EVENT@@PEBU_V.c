/*
 * XREFs of ?UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@KK@Z @ 0x1C0013DBC
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C000A480 (VidSchUnwaitFlipQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __int64 v9; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 16) = a5;
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a4 + 56);
  *(_DWORD *)(a1 + 24) = a6;
  *(LARGE_INTEGER *)(a1 + 8) = KeQueryPerformanceCounter(0LL);
  v9 = 1312LL * a6;
  *(_BYTE *)(a1 + 32) = (*(_DWORD *)(v9 + a4 + 1216) & 0x20) != 0;
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(v9 + a4 + 1132);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(v9 + a4 + 1136);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a3 + 2348);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a3 + 2344);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a4 + 32);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a4 + 36);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a4 + 40);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a4 + 44);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a4 + 48);
  result = *(unsigned int *)(a4 + 52);
  *(_DWORD *)(a1 + 68) = result;
  return result;
}
