/*
 * XREFs of sub_18002C690 @ 0x18002C690
 * Callers:
 *     sub_18002C138 @ 0x18002C138 (sub_18002C138.c)
 *     sub_1800808C0 @ 0x1800808C0 (sub_1800808C0.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_18002C690(_WORD *a1, unsigned __int64 a2, char a3)
{
  _WORD *result; // rax

  if ( a3 )
  {
    for ( result = (_WORD *)(a2 - 2); result >= a1; --result )
    {
      if ( *result == 64 )
        return result;
    }
  }
  else
  {
    while ( (unsigned __int64)a1 < a2 )
    {
      if ( *a1 == 46 )
        return a1;
      ++a1;
    }
  }
  return (_WORD *)a2;
}
