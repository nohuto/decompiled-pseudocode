/*
 * XREFs of RtlFindRange @ 0x140760480
 * Callers:
 *     IopPortFindSuitableRange @ 0x140760080 (IopPortFindSuitableRange.c)
 *     ArbFindSuitableRange @ 0x140760380 (ArbFindSuitableRange.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpIsRangeAvailable @ 0x1407606D4 (RtlpIsRangeAvailable.c)
 *     RtlGetLastRange @ 0x1407608B0 (RtlGetLastRange.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlFindRange(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Minimum,
        ULONGLONG Maximum,
        ULONG Length,
        ULONG Alignment,
        ULONG Flags,
        UCHAR AttributeAvailableMask,
        PVOID Context,
        PRTL_CONFLICT_RANGE_CALLBACK Callback,
        PULONGLONG Start)
{
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  ULONGLONG v14; // rbx
  char v15; // r13
  char v16; // si
  unsigned __int64 v18; // rbx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+50h] [rbp-48h] BYREF

  v12 = *(_QWORD *)&Length;
  memset(&Iterator, 0, sizeof(Iterator));
  v13 = *(_QWORD *)&Alignment;
  v14 = Maximum - v12 + 1 - (Maximum - v12 + 1) % *(_QWORD *)&Alignment;
  if ( Minimum > Maximum
    || Maximum - Minimum < v12 - 1
    || Minimum + *(_QWORD *)&Alignment < Minimum
    || v14 < Minimum
    || !v12
    || !*(_QWORD *)&Alignment )
  {
    return -1073741811;
  }
  v15 = Flags & 1;
  v16 = Flags & 2;
  RtlGetLastRange(RangeList, &Iterator, &Alignment);
  do
  {
    if ( (unsigned __int8)RtlpIsRangeAvailable(&Iterator, v15, v16, 0, (__int64)Context, (__int64)Callback) )
    {
      *Start = v14;
      return 0;
    }
    v18 = *(_QWORD *)Iterator.Current - v12;
    if ( v18 > *(_QWORD *)Iterator.Current )
      break;
    v14 = v18 - v18 % v13;
  }
  while ( v14 >= Minimum );
  return -1073741823;
}
