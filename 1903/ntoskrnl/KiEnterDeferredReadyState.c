/*
 * XREFs of KiEnterDeferredReadyState @ 0x140015188
 * Callers:
 *     KiSearchForNewThread @ 0x1400130A4 (KiSearchForNewThread.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x14001577C (KiFastReadyThread.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041AF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400E94A8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     <none>
 */

char __fastcall KiEnterDeferredReadyState(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 388);
  if ( result == 1 )
    *(_DWORD *)(a1 + 116) |= 2u;
  *(_BYTE *)(a1 + 388) = 7;
  return result;
}
