/*
 * XREFs of RtlpHpSegSegmentFree @ 0x1401547C4
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x14000A588 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x14000ACF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCleanup @ 0x140154764 (RtlpHpSegContextCleanup.c)
 *     RtlpHpSegContextCompact @ 0x1401B6530 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x14000866C (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegMgrRelease @ 0x14015484C (RtlpHpSegMgrRelease.c)
 */

__int64 __fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD *HeapManager; // rax
  unsigned int v8; // edx
  int v10; // ebx
  unsigned __int64 i; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  if ( a4 )
  {
    v12 = *(_OWORD *)(a1 + 40);
    HeapManager = RtlpHpEnvGetHeapManager(&v12);
    RtlCSparseBitmapBitsClear(
      (__int64)(HeapManager + 1),
      2 * ((unsigned __int64)(a2 - HeapManager[9]) >> 20),
      2 * ((unsigned __int64)v8 >> 20));
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && a3 == 0x7FFFFFFF )
  {
    v10 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      v10 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  return RtlpHpSegMgrRelease(a1);
}
