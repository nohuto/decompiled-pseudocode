/*
 * XREFs of HvlFlushRangeListTb @ 0x14028D990
 * Callers:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400B91A0 (KeFlushMultipleRangeTb.c)
 *     MiAgeWorkingSetTail @ 0x1400B94E0 (MiAgeWorkingSetTail.c)
 *     KeFlushSingleCurrentTb @ 0x1401670BC (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A27C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14028D8FC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTb @ 0x14028DE88 (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x14028DF3C (HvlpFlushRangeListTbEx.c)
 */

char __fastcall HvlFlushRangeListTb(int a1, __int64 a2, int a3, int a4, char a5, int a6, __int64 a7)
{
  int v7; // r10d
  char v8; // bl

  v7 = a1;
  if ( a2 && HvlpUseExtendedProcessorSetHypercalls() )
  {
    v8 = a5;
    HvlpFlushRangeListTbEx(v7, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v8 = a5;
    HvlpFlushRangeListTb(v7, a2, a3, a4, a5, a6, a7);
  }
  return v8;
}
