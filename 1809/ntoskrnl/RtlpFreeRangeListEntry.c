/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140738F18
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140738490 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x140738710 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1407388D4 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x140738CB0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140738D60 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140738EB8 (RtlpDeleteRangeListEntry.c)
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
