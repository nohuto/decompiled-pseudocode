/*
 * XREFs of RtlpFreeRangeListEntry @ 0x14073A0E8
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140739660 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x1407398E0 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x140739AA4 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x140739E80 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140739F30 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x14073A088 (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeRangeListEntry(PVOID Entry)
{
  _DWORD *v2; // rax

  if ( (*((_BYTE *)Entry + 34) & 1) == 0 && (*((_BYTE *)Entry + 33) & 0x10) != 0 )
  {
    v2 = (_DWORD *)*((_QWORD *)Entry + 2);
    if ( (*v2)-- == 1 )
      ExFreePoolWithTag(*((PVOID *)Entry + 2), 0);
  }
  ExFreeToNPagedLookasideList(&RtlpRangeListEntryLookasideList, Entry);
}
