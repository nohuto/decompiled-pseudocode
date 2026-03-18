/*
 * XREFs of _itow_s @ 0x1401A4F90
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x14018D0DC (RtlpFindRegTziForCurrentYear.c)
 * Callees:
 *     xtow_s @ 0x1401A5140 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
