/*
 * XREFs of DrvSetDimUndimTransitionTime @ 0x1C00D5B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvSetDimUndimTransitionTime(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  gUndimTransitionTime = a2;
  result = 0LL;
  gDimTransitionTime = a1;
  return result;
}
