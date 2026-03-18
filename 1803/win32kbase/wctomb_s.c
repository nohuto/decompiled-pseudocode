/*
 * XREFs of wctomb_s @ 0x1C0075B6C
 * Callers:
 *     _output_l @ 0x1C0074FF4 (_output_l.c)
 * Callees:
 *     _wctomb_s_l @ 0x1C0075ABC (_wctomb_s_l.c)
 */

errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, 0LL);
}
