/*
 * XREFs of HvlFlushRangeListTb @ 0x14028D6F0
 * Callers:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140099010 (KeFlushMultipleRangeTb.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140166B0C (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A96C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14028D65C (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTb @ 0x14028DBE8 (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x14028DC9C (HvlpFlushRangeListTbEx.c)
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
