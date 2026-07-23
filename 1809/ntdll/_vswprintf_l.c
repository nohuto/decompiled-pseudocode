/*
 * XREFs of _vswprintf_l @ 0x180091674
 * Callers:
 *     _vswprintf @ 0x180091660 (_vswprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _flsbuf @ 0x180096490 (_flsbuf.c)
 *     _woutput_l @ 0x180096E30 (_woutput_l.c)
 */

int __cdecl vswprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int v5; // eax
  bool v6; // sf
  int v7; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  if ( BufferCount && Buffer )
  {
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v5 = woutput_l(&File, BufferCount, Format, Locale);
    v6 = --File._cnt < 0;
    v7 = v5;
    if ( v6 )
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
    return v7;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
