/*
 * XREFs of _ultoa @ 0x18008D1D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D26C @ 0x18008D26C (sub_18008D26C.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  sub_18008D26C(Value, Buffer, Radix, 0LL);
  return Buffer;
}
