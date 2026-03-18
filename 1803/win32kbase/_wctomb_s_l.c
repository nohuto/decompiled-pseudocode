/*
 * XREFs of _wctomb_s_l @ 0x1C0075ABC
 * Callers:
 *     wctomb_s @ 0x1C0075B6C (wctomb_s.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C006E8B0 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 *     RtlUnicodeToMultiByteN_0 @ 0x1C0075BA4 (RtlUnicodeToMultiByteN_0.c)
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
      ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
      return 22;
    }
    if ( MbCh )
    {
      if ( RtlUnicodeToMultiByteN_0(MbCh, SizeInBytes, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
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
