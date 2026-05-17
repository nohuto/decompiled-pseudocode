/*
 * XREFs of TppWorkpFree @ 0x18002C4E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppWorkpFree(unsigned __int64 a1)
{
  TppCleanupGroupMemberDestroy();
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
}
