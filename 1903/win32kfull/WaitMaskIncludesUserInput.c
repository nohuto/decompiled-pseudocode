/*
 * XREFs of WaitMaskIncludesUserInput @ 0x1C01314FC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitMaskIncludesUserInput(char a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) )
    return 1;
  return v1;
}
