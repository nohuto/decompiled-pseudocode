/*
 * XREFs of _ultoa @ 0x1800908F0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x18009098C (xtoa.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
