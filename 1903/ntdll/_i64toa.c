/*
 * XREFs of _i64toa @ 0x18008D140
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D1F0 @ 0x18008D1F0 (sub_18008D1F0.c)
 */

char *__cdecl i64toa(__int64 Value, char *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_18008D1F0(Value, Buffer, Radix, v3);
  return Buffer;
}
