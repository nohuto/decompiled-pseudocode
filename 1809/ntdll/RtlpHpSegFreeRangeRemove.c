/*
 * XREFs of RtlpHpSegFreeRangeRemove @ 0x18001DF1C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18001DC90 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180020014 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegContextCompact @ 0x180068ADC (RtlpHpSegContextCompact.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x18010D7B8 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18001ECC0 (RtlRbRemoveNode.c)
 *     RtlpHpTlLogMemStats @ 0x180109F84 (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeRemove(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  __int64 result; // rax

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)a2);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = ~(unsigned __int16)*(_DWORD *)(a2 + 28);
  *(_DWORD *)a2 = -857879331;
  v5 = v4;
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), -v5);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    return RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
  return result;
}
