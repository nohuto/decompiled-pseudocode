/*
 * XREFs of TppWorkpFree @ 0x180077940
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall TppWorkpFree(_QWORD *a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (__int64)a1);
}
