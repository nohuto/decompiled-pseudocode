/*
 * XREFs of wctomb_s @ 0x180096CE4
 * Callers:
 *     _output_l @ 0x1800933D0 (_output_l.c)
 * Callees:
 *     _wctomb_s_l @ 0x180096C2C (_wctomb_s_l.c)
 */

errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, 0LL);
}
