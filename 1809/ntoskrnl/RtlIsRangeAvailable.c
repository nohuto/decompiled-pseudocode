/*
 * XREFs of RtlIsRangeAvailable @ 0x140740830
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsRangeAvailable @ 0x1407408E0 (RtlpIsRangeAvailable.c)
 *     RtlGetFirstRange @ 0x140740A70 (RtlGetFirstRange.c)
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
  char v8; // bl
  NTSTATUS result; // eax
  PRTL_RANGE v10; // [rsp+50h] [rbp-38h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp-30h] BYREF

  v8 = Flags;
  result = RtlGetFirstRange(RangeList, &Iterator, &v10);
  if ( result == -2147483622 )
  {
    *Available = 1;
  }
  else
  {
    if ( result < 0 )
      return result;
    *Available = RtlpIsRangeAvailable(&Iterator, v8 & 1, v8 & 2, 1u, (__int64)Context, (__int64)Callback);
  }
  return 0;
}
