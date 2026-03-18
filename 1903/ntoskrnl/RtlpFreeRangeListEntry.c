/*
 * XREFs of RtlpFreeRangeListEntry @ 0x1407624B8
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140761A30 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x140761CB0 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x140761E74 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x140762250 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140762300 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140762458 (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
