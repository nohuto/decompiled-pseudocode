/*
 * XREFs of TppTimerpFree @ 0x18002C400
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18002D5D4 (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(unsigned __int64 a1)
{
  TppDestroyTimer();
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
