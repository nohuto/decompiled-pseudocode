/*
 * XREFs of _ltoa @ 0x18008D180
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D26C @ 0x18008D26C (sub_18008D26C.c)
 */

char *__cdecl ltoa(int Value, char *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_18008D26C(Value, Buffer, Radix, v3);
  return Buffer;
}
