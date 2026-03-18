/*
 * XREFs of EditionEdgyResetCurrentFrame @ 0x1C01BF320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EditionEdgyResetCurrentFrame()
{
  __int64 result; // rax

  result = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( result )
    *(_QWORD *)(result + 232) = 0LL;
  return result;
}
