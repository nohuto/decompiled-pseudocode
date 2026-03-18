/*
 * XREFs of KiEnterDeferredReadyState @ 0x1400152B8
 * Callers:
 *     KiSearchForNewThread @ 0x1400132D4 (KiSearchForNewThread.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x140015B60 (KiFastReadyThread.c)
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041830 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x140114330 (KiSetThreadSchedulingGroup.c)
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
