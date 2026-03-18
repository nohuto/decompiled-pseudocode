/*
 * XREFs of _fputwc_nolock @ 0x1C00B9C90
 * Callers:
 *     write_char_0 @ 0x1C00B99E0 (write_char_0.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C000F910 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 *     _flswbuf @ 0x1C00B9D30 (_flswbuf.c)
 */

wint_t __cdecl fputwc_nolock(wchar_t Ch, FILE *File)
{
  wint_t result; // ax
  bool v3; // sf

  if ( File )
  {
    v3 = File->_cnt - 2 < 0;
    File->_cnt -= 2;
    if ( v3 )
    {
      return flswbuf(Ch);
    }
    else
    {
      *(_WORD *)File->_ptr = Ch;
      result = Ch;
      File->_ptr += 2;
    }
  }
  else
  {
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
    return -1;
  }
  return result;
}
