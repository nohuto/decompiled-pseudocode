/*
 * XREFs of TppSimplepFree @ 0x18002D460
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppSimplepFree(unsigned __int64 a1)
{
  TppCleanupGroupMemberDestroy();
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
}
