/*
 * XREFs of _itoa @ 0x140195010
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x140195040 (xtoa.c)
 */

char *__cdecl itoa(int Value, char *Dest, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  xtoa(Value, Dest, Radix, v3);
  return Dest;
}
