/*
 * XREFs of RtlpHpSegFree @ 0x140007CDC
 * Callers:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     RtlpHpSegLfhVsFree @ 0x140007CC0 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpVsContextFree @ 0x1400079BC (RtlpHpVsContextFree.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140008D00 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpSegPageRangeShrink @ 0x14000ACF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegDescriptorValidate @ 0x1400BEC10 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BED70 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v11; // rcx
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v5 = RtlpHpSegDescriptorValidate();
  if ( v5 )
  {
    v8 = (v5 & *(_QWORD *)a1) + ((v5 - (v5 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( v7 > v8 )
    {
      if ( (*(_BYTE *)(v5 + 24) & 0xC) == 8 )
      {
        return (unsigned int)RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(a1 + 24), v8, v7, a3);
      }
      else
      {
        v9 = RtlpHpVsContextFree(*(_QWORD *)(a1 + 32), v8, v7, a3, &v12);
        if ( v9 )
        {
          v11 = *(_QWORD *)(a1 + 24);
          if ( v12 <= (unsigned int)*(unsigned __int16 *)(v11 + 60) - 16 )
            RtlpHpLfhBucketUpdateStats(v11, v12, 0LL);
        }
      }
    }
    else
    {
      RtlpHpSegPageRangeShrink(a1, v5, v6, a3);
      return 1;
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), v7, 0, 0LL, 0LL);
    return 0;
  }
  return v9;
}
