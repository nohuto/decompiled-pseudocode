/*
 * XREFs of sub_18006E5E0 @ 0x18006E5E0
 * Callers:
 *     sub_18007B430 @ 0x18007B430 (sub_18007B430.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

__int64 *__fastcall sub_18006E5E0(__int64 *a1, _BYTE *a2, _BYTE *a3)
{
  size_t v4; // rdi
  void *v5; // rsi

  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( a2 != a3 )
  {
    v4 = a3 - a2;
    if ( a3 - a2 > (unsigned __int64)a1[3] )
    {
      sub_18000E118(a1, v4, 0LL, a2);
    }
    else
    {
      v5 = a1;
      if ( (unsigned __int64)a1[3] >= 0x10 )
        v5 = (void *)*a1;
      a1[2] = v4;
      memmove(v5, a2, v4);
      *((_BYTE *)v5 + v4) = 0;
    }
  }
  return a1;
}
