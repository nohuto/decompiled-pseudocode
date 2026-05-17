/*
 * XREFs of sub_1800ED4B0 @ 0x1800ED4B0
 * Callers:
 *     sub_1800EB844 @ 0x1800EB844 (sub_1800EB844.c)
 *     sub_1800EC73C @ 0x1800EC73C (sub_1800EC73C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800ED4B0(__int64 a1, _DWORD *a2, __int16 *a3)
{
  __int64 result; // rax
  __int16 v4; // cx

  result = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( (*(_WORD *)(a1 + 4) & 0xEBFF) != 0 || *(_WORD *)(a1 + 4) == 1024 )
  {
    v4 = *(_WORD *)(a1 + 4);
    *a2 = 1;
  }
  else
  {
    v4 = *(_WORD *)(a1 + 6);
    if ( v4 <= 0 )
    {
      *a2 = 0;
      result = 3221225485LL;
      v4 = 0;
    }
    else
    {
      *a2 = 3;
    }
  }
  *a3 = v4;
  return result;
}
