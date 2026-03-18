/*
 * XREFs of _ultow @ 0x1401950F0
 * Callers:
 *     AdtpBuildUlongString @ 0x1408EFBD4 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x140195110 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
