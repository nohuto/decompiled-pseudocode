/*
 * XREFs of RtlAddRange @ 0x1407398E0
 * Callers:
 *     IopMemInitialize @ 0x140738BA8 (IopMemInitialize.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140738DD0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopPortAddAllocation @ 0x1407395B0 (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x1407397A0 (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x140739890 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14073A130 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeRangeList @ 0x140906770 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlpAddRange @ 0x140739980 (RtlpAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x140739A34 (RtlpCreateRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x14073A0E8 (RtlpFreeRangeListEntry.c)
 */

NTSTATUS __stdcall RtlAddRange(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Start,
        ULONGLONG End,
        UCHAR Attributes,
        ULONG Flags,
        PVOID UserData,
        PVOID Owner)
{
  int v7; // r10d
  __int64 RangeListEntry; // rax
  void *v10; // rbx
  NTSTATUS v11; // esi

  v7 = End;
  if ( End < Start )
    return -1073741811;
  LOBYTE(End) = Attributes;
  RangeListEntry = RtlpCreateRangeListEntry(Start, v7, End, (_DWORD)UserData, (__int64)Owner);
  v10 = (void *)RangeListEntry;
  if ( !RangeListEntry )
    return -1073741823;
  if ( (Flags & 2) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 1u;
  if ( (Flags & 0x10) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 0x10u;
  v11 = RtlpAddRange(RangeList, RangeListEntry, Flags);
  if ( v11 < 0 )
  {
    RtlpFreeRangeListEntry(v10);
  }
  else
  {
    ++RangeList->Count;
    ++RangeList->Stamp;
  }
  return v11;
}
