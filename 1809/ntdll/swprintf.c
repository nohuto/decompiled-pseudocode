/*
 * XREFs of swprintf @ 0x180091470
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _flsbuf @ 0x180096490 (_flsbuf.c)
 *     _woutput_l @ 0x180096E30 (_woutput_l.c)
 */

int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  int v3; // eax
  bool v4; // sf
  int v5; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v9; // [rsp+90h] [rbp+28h] BYREF

  v9 = Format;
  if ( BufferCount && Buffer )
  {
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v3 = woutput_l(&File, BufferCount, 0LL, &v9);
    v4 = --File._cnt < 0;
    v5 = v3;
    if ( v4 )
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
    return v5;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
