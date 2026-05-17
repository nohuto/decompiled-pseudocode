/*
 * XREFs of _ultow @ 0x18008D370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D428 @ 0x18008D428 (sub_18008D428.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Buffer, int Radix)
{
  sub_18008D428(Value, Buffer, Radix, 0LL);
  return Buffer;
}
