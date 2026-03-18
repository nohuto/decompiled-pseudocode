/*
 * XREFs of _vsnwprintf_l @ 0x1C001A430
 * Callers:
 *     _vsnwprintf @ 0x1C001A414 (_vsnwprintf.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C000C270 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 *     _flsbuf @ 0x1C001A53C (_flsbuf.c)
 *     _woutput_l @ 0x1C001A54C (_woutput_l.c)
 *     memset @ 0x1C001B300 (memset.c)
 */

__int64 __fastcall vsnwprintf_l(
        wchar_t *string,
        unsigned __int64 count,
        const wchar_t *format,
        localeinfo_struct *plocinfo,
        char *ap)
{
  unsigned int v9; // edi
  char *ptr; // rcx
  _iobuf str; // [rsp+30h] [rbp-30h] BYREF

  memset(&str, 0, sizeof(str));
  if ( format && (!count || string) )
  {
    str._flag = 66;
    str._base = (char *)string;
    str._ptr = (char *)string;
    if ( count <= 0x3FFFFFFF )
      str._cnt = 2 * count;
    else
      str._cnt = 0x7FFFFFFF;
    v9 = woutput_l(&str, format, plocinfo, ap);
    if ( string )
    {
      if ( --str._cnt < 0 )
      {
        flsbuf(0, &str);
        ptr = str._ptr;
      }
      else
      {
        *str._ptr = 0;
        ptr = ++str._ptr;
      }
      if ( --str._cnt < 0 )
        flsbuf(0, &str);
      else
        *ptr = 0;
    }
    return v9;
  }
  else
  {
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFFFFFFLL;
  }
}
