/*
 * XREFs of _vsnwprintf_l @ 0x1C00A6598
 * Callers:
 *     _vsnwprintf @ 0x1C00A657C (_vsnwprintf.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C009DC30 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 *     _flsbuf @ 0x1C00A6B98 (_flsbuf.c)
 *     _woutput_l @ 0x1C00A6BA8 (_woutput_l.c)
 */

int __cdecl vsnwprintf_l(wchar_t *DstBuf, size_t MaxCount, const wchar_t *Format, _locale_t Locale, va_list ArgList)
{
  int v6; // edi
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = (char *)DstBuf;
    File._ptr = (char *)DstBuf;
    if ( MaxCount <= 0x3FFFFFFF )
      File._cnt = 2 * MaxCount;
    else
      File._cnt = 0x7FFFFFFF;
    v6 = woutput_l(&File, Format, Locale, ArgList);
    if ( DstBuf )
    {
      if ( --File._cnt < 0 )
      {
        flsbuf(0, &File);
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *ptr = 0;
    }
    return v6;
  }
  else
  {
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
    return -1;
  }
}
