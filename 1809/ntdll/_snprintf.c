/*
 * XREFs of _snprintf @ 0x180090D80
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _flsbuf @ 0x180096490 (_flsbuf.c)
 *     _output_l @ 0x1800964A0 (_output_l.c)
 */

int snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int v4; // edi
  FILE File; // [rsp+30h] [rbp-48h] BYREF
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format && (!BufferCount || Buffer) )
  {
    File._flag = 66;
    File._base = Buffer;
    File._ptr = Buffer;
    if ( BufferCount > 0x7FFFFFFF )
      LODWORD(BufferCount) = 0x7FFFFFFF;
    File._cnt = BufferCount;
    v4 = output_l(&File, Format, 0LL, (__int64 *)va);
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
    }
    return v4;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
