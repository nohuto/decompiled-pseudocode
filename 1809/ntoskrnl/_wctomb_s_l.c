/*
 * XREFs of _wctomb_s_l @ 0x140197E34
 * Callers:
 *     wctomb @ 0x140197EF0 (wctomb.c)
 *     wctomb_s @ 0x140197F30 (wctomb_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     RtlUnicodeToMultiByteN @ 0x140699260 (RtlUnicodeToMultiByteN.c)
 */

errno_t __cdecl wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  errno_t result; // eax
  ULONG BytesInMultiByteString; // [rsp+48h] [rbp+10h] BYREF
  WCHAR UnicodeString; // [rsp+58h] [rbp+20h] BYREF

  UnicodeString = WCh;
  if ( MbCh || !SizeInBytes )
  {
    if ( SizeConverted )
      *SizeConverted = -1;
    if ( SizeInBytes > 0x7FFFFFFF )
    {
      xHalTimerWatchdogStop();
      return 22;
    }
    if ( MbCh )
    {
      if ( RtlUnicodeToMultiByteN(MbCh, SizeInBytes, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
      {
        result = 42;
        gbl_errno = 42;
        return result;
      }
      if ( SizeConverted )
        *SizeConverted = BytesInMultiByteString;
    }
    else if ( SizeConverted )
    {
      *SizeConverted = _mb_cur_max;
    }
  }
  else if ( SizeConverted )
  {
    *SizeConverted = 0;
  }
  return 0;
}
