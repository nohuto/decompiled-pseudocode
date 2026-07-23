/*
 * XREFs of _ultow @ 0x140195250
 * Callers:
 *     AdtpBuildUlongString @ 0x1408F0E74 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x140195270 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
