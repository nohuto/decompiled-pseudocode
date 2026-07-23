/*
 * XREFs of TppFreeWait @ 0x180030280
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x180031A74 (TppDestroyTimer.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

LOGICAL __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer();
  NtClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, (PVOID)a1);
}
