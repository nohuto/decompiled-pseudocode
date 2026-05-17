/*
 * XREFs of _ui64toa @ 0x18008D1B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D1F0 @ 0x18008D1F0 (sub_18008D1F0.c)
 */

char *__cdecl ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  sub_18008D1F0(Value, Buffer, Radix, 0LL);
  return Buffer;
}
