/*
 * XREFs of _vsnprintf_l @ 0x18009173C
 * Callers:
 *     _vsnprintf @ 0x180091720 (_vsnprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _flsbuf @ 0x180096490 (_flsbuf.c)
 *     _output_l @ 0x1800964A0 (_output_l.c)
 */

int __cdecl vsnprintf_l(
        char *const Buffer,
        const size_t BufferCount,
        const char *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int v6; // edi
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( Format && (!BufferCount || Buffer) )
  {
    File._flag = 66;
    File._base = Buffer;
    if ( BufferCount > 0x7FFFFFFF )
      LODWORD(BufferCount) = 0x7FFFFFFF;
    File._ptr = Buffer;
    File._cnt = BufferCount;
    v6 = output_l(&File, Format, Locale, ArgList);
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
    }
    return v6;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
