/*
 * XREFs of sub_18006B828 @ 0x18006B828
 * Callers:
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_18006B828(unsigned __int64 a1)
{
  __int64 v2; // rax
  _WORD *v3; // rcx
  unsigned __int16 v4; // ax
  __int64 v5; // r9
  _WORD *v6; // r8

  if ( !a1 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  v3 = (_WORD *)(a1 + 2 * v2);
  while ( 1 )
  {
    v6 = v3;
    if ( (unsigned __int64)v3 <= a1 )
      break;
    v4 = *--v3 - 47;
    if ( v4 <= 0x2Du )
    {
      v5 = 0x200000000801LL;
      if ( _bittest64(&v5, v4) )
        break;
    }
  }
  return v6;
}
