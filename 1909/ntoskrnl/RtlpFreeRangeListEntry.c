/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140766EC8
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140766440 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x1407666C0 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x140766884 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x140766C60 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140766D10 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140766E68 (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
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
