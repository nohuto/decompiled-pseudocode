/*
 * XREFs of TppTimerpFree @ 0x1800317D0
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x180031A74 (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
