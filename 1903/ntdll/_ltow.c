/*
 * XREFs of _ltow @ 0x18008D320
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D428 @ 0x18008D428 (sub_18008D428.c)
 */

wchar_t *__cdecl ltow(int Value, wchar_t *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_18008D428(Value, Buffer, Radix, v3);
  return Buffer;
}
