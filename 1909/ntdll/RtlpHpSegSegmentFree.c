/*
 * XREFs of RtlpHpSegSegmentFree @ 0x18004FE48
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x180036AE0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004E58C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCompact @ 0x18004F270 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextCleanup @ 0x18004FDE8 (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlCSparseBitmapBitsClear @ 0x18004FFA8 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x180050284 (RtlpHpSegMgrRelease.c)
 *     RtlpHeapLogRangeRelease @ 0x180101634 (RtlpHeapLogRangeRelease.c)
 */

unsigned int *__fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rbp
  unsigned int *result; // rax
  __int64 v9; // rcx
  unsigned __int64 i; // rcx

  v6 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    RtlCSparseBitmapBitsClear(
      &unk_180166A70,
      2 * ((unsigned __int64)(a2 - qword_180166A68) >> 20),
      2 * ((unsigned __int64)(unsigned int)v6 >> 20));
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  RtlpHpSegMgrRelease(a1, a2, a3);
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v9 = *((_QWORD *)result + 18) + 558LL;
  }
  else
  {
    v9 = 2147353480LL;
  }
  if ( *(_BYTE *)v9 )
    return (unsigned int *)RtlpHeapLogRangeRelease(a1, a2, v6);
  return result;
}
