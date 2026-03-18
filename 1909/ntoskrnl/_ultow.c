/*
 * XREFs of _ultow @ 0x14019FF80
 * Callers:
 *     AdtpBuildUlongString @ 0x14092D280 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x14019FFA0 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
