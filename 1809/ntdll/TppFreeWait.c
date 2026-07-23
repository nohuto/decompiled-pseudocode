/*
 * XREFs of TppFreeWait @ 0x18002F780
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18002D5D4 (TppDestroyTimer.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 */

LOGICAL __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer(a1);
  NtClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, (PVOID)a1);
}
