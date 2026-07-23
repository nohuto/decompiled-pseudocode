/*
 * XREFs of sprintf @ 0x180094510
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _flsbuf @ 0x180096490 (_flsbuf.c)
 *     _output_l @ 0x1800964A0 (_output_l.c)
 */

int sprintf(char *const Buffer, const char *const Format, ...)
{
  int v2; // eax
  bool v3; // sf
  int v4; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format && Buffer )
  {
    File._base = Buffer;
    File._ptr = Buffer;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v2 = output_l(&File, Format, 0LL, (__int64 *)va);
    v3 = --File._cnt < 0;
    v4 = v2;
    if ( v3 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v4;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
