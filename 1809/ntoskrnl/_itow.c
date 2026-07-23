/*
 * XREFs of _itow @ 0x140195220
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x140195270 (xtow.c)
 */

wchar_t *__cdecl itow(int Value, wchar_t *Dest, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  xtow(Value, Dest, Radix, v3);
  return Dest;
}
