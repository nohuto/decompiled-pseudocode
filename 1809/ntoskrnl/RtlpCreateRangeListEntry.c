/*
 * XREFs of RtlpCreateRangeListEntry @ 0x140738864
 * Callers:
 *     RtlAddRange @ 0x140738710 (RtlAddRange.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 */

_BYTE *__fastcall RtlpCreateRangeListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *result; // rax

  result = ExAllocateFromNPagedLookasideList(&RtlpRangeListEntryLookasideList);
  if ( result )
  {
    result[33] = 0;
    *((_WORD *)result + 17) = 0;
    *((_QWORD *)result + 3) = a5;
    *(_QWORD *)result = a1;
    *((_QWORD *)result + 1) = a2;
    result[32] = a3;
    *((_QWORD *)result + 2) = a4;
  }
  return result;
}
