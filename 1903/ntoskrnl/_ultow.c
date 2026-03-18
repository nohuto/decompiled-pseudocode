/*
 * XREFs of _ultow @ 0x14019F860
 * Callers:
 *     AdtpBuildUlongString @ 0x14092D80C (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x14019F880 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
