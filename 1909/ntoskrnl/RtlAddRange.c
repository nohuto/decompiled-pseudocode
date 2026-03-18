/*
 * XREFs of RtlAddRange @ 0x1407666C0
 * Callers:
 *     IopMemInitialize @ 0x140765964 (IopMemInitialize.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140765B8C (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopPortAddAllocation @ 0x140766390 (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x140766580 (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x140766670 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140766F10 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeRangeList @ 0x140943530 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlpAddRange @ 0x140766760 (RtlpAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x140766814 (RtlpCreateRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x140766EC8 (RtlpFreeRangeListEntry.c)
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
