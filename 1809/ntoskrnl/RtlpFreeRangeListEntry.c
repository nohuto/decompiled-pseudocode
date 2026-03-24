/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140738EF8
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140738470 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x1407386F0 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1407388B4 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x140738C90 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140738D40 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140738E98 (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
