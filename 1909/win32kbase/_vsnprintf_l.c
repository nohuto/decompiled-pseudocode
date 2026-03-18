/*
 * XREFs of _vsnprintf_l @ 0x1C00B8120
 * Callers:
 *     _vsnprintf @ 0x1C00B8104 (_vsnprintf.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C000F910 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 *     _flsbuf @ 0x1C00B8748 (_flsbuf.c)
 *     _output_l @ 0x1C00B8758 (_output_l.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

int __cdecl vsnprintf_l(char *DstBuf, size_t MaxCount, const char *Format, _locale_t Locale, va_list ArgList)
{
  int v9; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  memset(&File, 0, sizeof(File));
  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = DstBuf;
    File._ptr = DstBuf;
    if ( MaxCount > 0x7FFFFFFF )
      LODWORD(MaxCount) = 0x7FFFFFFF;
    File._cnt = MaxCount;
    v9 = output_l(&File, Format, Locale, ArgList);
    if ( DstBuf )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
    }
    return v9;
  }
  else
  {
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
    return -1;
  }
}
