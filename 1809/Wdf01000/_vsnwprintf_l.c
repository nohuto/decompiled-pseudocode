/*
 * XREFs of _vsnwprintf_l @ 0x1C001AA00
 * Callers:
 *     _vsnwprintf @ 0x1C001A9E4 (_vsnwprintf.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C000BB30 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 *     _flsbuf @ 0x1C001AAE4 (_flsbuf.c)
 *     _woutput_l @ 0x1C001AAF4 (_woutput_l.c)
 */

__int64 __fastcall vsnwprintf_l(
        wchar_t *string,
        unsigned __int64 count,
        const wchar_t *format,
        localeinfo_struct *plocinfo,
        char *ap)
{
  unsigned int v6; // edi
  char *ptr; // rcx
  _iobuf str; // [rsp+30h] [rbp-30h] BYREF

  if ( format && (!count || string) )
  {
    str._flag = 66;
    str._base = (char *)string;
    str._ptr = (char *)string;
    if ( count <= 0x3FFFFFFF )
      str._cnt = 2 * count;
    else
      str._cnt = 0x7FFFFFFF;
    v6 = woutput_l(&str, format, plocinfo, ap);
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
    return v6;
  }
  else
  {
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFFFFFFLL;
  }
}
