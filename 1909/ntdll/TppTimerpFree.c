/*
 * XREFs of TppTimerpFree @ 0x1800317D0
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x180031A74 (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(__int64 a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x100000), a1);
}
