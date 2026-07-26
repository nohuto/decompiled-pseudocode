/*
 * XREFs of ndisOidPostWolPatternList @ 0x1C004B020
 * Callers:
 *     <none>
 * Callees:
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00E9AE4 (ndisXlateWakeUpPatternListToWolPatternList.c)
 */

__int64 __fastcall ndisOidPostWolPatternList(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(result + 4) && *(_DWORD *)(result + 32) == -50265851 )
  {
    *(_DWORD *)(result + 32) = -50265844;
    if ( !*(_DWORD *)(a1 + 40) )
      return ndisXlateWakeUpPatternListToWolPatternList();
  }
  return result;
}
