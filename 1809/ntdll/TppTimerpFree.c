/*
 * XREFs of TppTimerpFree @ 0x18002C400
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18002D5D4 (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
