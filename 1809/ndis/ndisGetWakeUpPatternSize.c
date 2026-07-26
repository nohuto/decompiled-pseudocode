/*
 * XREFs of ndisGetWakeUpPatternSize @ 0x1C004A348
 * Callers:
 *     ndisCreateWakeUpPatternEntry @ 0x1C00E65E8 (ndisCreateWakeUpPatternEntry.c)
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00E9AE4 (ndisXlateWakeUpPatternListToWolPatternList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetWakeUpPatternSize(unsigned int *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  v1 = a1[2];
  v2 = v1 + 24;
  result = (unsigned int)(v1 + 24);
  if ( v2 <= a1[3] + a1[4] )
    return a1[3] + a1[4];
  return result;
}
