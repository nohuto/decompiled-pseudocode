/*
 * XREFs of RtlIsRangeAvailable @ 0x140760600
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpIsRangeAvailable @ 0x1407606D4 (RtlpIsRangeAvailable.c)
 *     RtlGetFirstRange @ 0x140760860 (RtlGetFirstRange.c)
 */

NTSTATUS __stdcall RtlIsRangeAvailable(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Start,
        ULONGLONG End,
        ULONG Flags,
        UCHAR AttributeAvailableMask,
        PVOID Context,
        PRTL_CONFLICT_RANGE_CALLBACK Callback,
        PBOOLEAN Available)
{
  char v9; // di
  NTSTATUS result; // eax
  PRTL_RANGE Range; // [rsp+50h] [rbp-38h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp-30h] BYREF

  v9 = Flags;
  memset(&Iterator, 0, sizeof(Iterator));
  result = RtlGetFirstRange(RangeList, &Iterator, &Range);
  if ( result == -2147483622 )
  {
    *Available = 1;
  }
  else
  {
    if ( result < 0 )
      return result;
    *Available = RtlpIsRangeAvailable(&Iterator, v9 & 1, v9 & 2, 1u, (__int64)Context, (__int64)Callback);
  }
  return 0;
}
