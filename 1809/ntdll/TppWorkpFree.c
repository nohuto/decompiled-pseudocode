/*
 * XREFs of TppWorkpFree @ 0x18002C4E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 */

LOGICAL __fastcall TppWorkpFree(PVOID BaseAddress)
{
  TppCleanupGroupMemberDestroy();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
