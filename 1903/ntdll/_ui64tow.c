/*
 * XREFs of _ui64tow @ 0x18008D350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D390 @ 0x18008D390 (sub_18008D390.c)
 */

wchar_t *__cdecl ui64tow(unsigned __int64 Value, wchar_t *Buffer, int Radix)
{
  sub_18008D390(Value, Buffer, Radix, 0LL);
  return Buffer;
}
