/*
 * XREFs of RtlFindRange @ 0x14075BD00
 * Callers:
 *     IopPortFindSuitableRange @ 0x14075B900 (IopPortFindSuitableRange.c)
 *     ArbFindSuitableRange @ 0x14075BC00 (ArbFindSuitableRange.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpIsRangeAvailable @ 0x14075BF54 (RtlpIsRangeAvailable.c)
 *     RtlGetLastRange @ 0x14075C130 (RtlGetLastRange.c)
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
