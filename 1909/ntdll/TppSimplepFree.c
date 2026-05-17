/*
 * XREFs of TppSimplepFree @ 0x180037220
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppSimplepFree(__int64 a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
}
