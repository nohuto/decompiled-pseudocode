/*
 * XREFs of sub_180025164 @ 0x180025164
 * Callers:
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_18007DDBC @ 0x18007DDBC (sub_18007DDBC.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall sub_180025164(void *a1)
{
  _UNKNOWN **result; // rax

  for ( result = (_UNKNOWN **)off_18015F520; result != &off_18015F520; result = (_UNKNOWN **)*result )
  {
    if ( result[7] == a1 )
      return result;
  }
  return 0LL;
}
