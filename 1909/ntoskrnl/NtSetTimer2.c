/*
 * XREFs of NtSetTimer2 @ 0x14009A960
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x14009A980 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetTimer2(void *a1, __int64 a2)
{
  if ( a2 )
    return ExpSetTimer2(a1);
  else
    return 3221225712LL;
}
