/*
 * XREFs of TppSimplepFree @ 0x18002D460
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 */

LOGICAL __fastcall TppSimplepFree(void *a1)
{
  TppCleanupGroupMemberDestroy();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
}
