/*
 * XREFs of ExInitializeZone @ 0x14031CFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ExInitializeZone(PZONE_HEADER Zone, ULONG BlockSize, PVOID InitialSegment, ULONG InitialSegmentSize)
{
  __int64 v4; // r11
  ULONG v5; // r9d
  struct _SINGLE_LIST_ENTRY *v6; // r8
  ULONG v7; // edx

  v4 = BlockSize;
  if ( (BlockSize & 7) != 0 || ((unsigned __int8)InitialSegment & 7) != 0 || BlockSize > InitialSegmentSize )
    return -1073741811;
  Zone->SegmentList.Next = (struct _SINGLE_LIST_ENTRY *)InitialSegment;
  Zone->BlockSize = BlockSize;
  v5 = InitialSegmentSize - BlockSize;
  *(_QWORD *)InitialSegment = 0LL;
  *((_QWORD *)InitialSegment + 1) = 0LL;
  v6 = (struct _SINGLE_LIST_ENTRY *)((char *)InitialSegment + 16);
  v7 = 16;
  for ( Zone->FreeList.Next = 0LL; v7 <= v5; v6 = (struct _SINGLE_LIST_ENTRY *)((char *)v6 + v4) )
  {
    v7 += v4;
    v6->Next = (struct _SINGLE_LIST_ENTRY *)Zone->FreeList;
    Zone->FreeList.Next = v6;
  }
  Zone->TotalSegmentSize = v7;
  return 0;
}
