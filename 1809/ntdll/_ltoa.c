/*
 * XREFs of _ltoa @ 0x1800908A0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x18009098C (xtoa.c)
 */

char *__cdecl ltoa(int Value, char *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  xtoa(Value, Buffer, Radix, v3);
  return Buffer;
}
