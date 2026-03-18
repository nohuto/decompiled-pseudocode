/*
 * XREFs of NtSetTimer2 @ 0x1400FBF70
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400FBFC0 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetTimer2(void *a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    return 3221225712LL;
  if ( a3 )
    return 3221225474LL;
  return ExpSetTimer2(a1);
}
