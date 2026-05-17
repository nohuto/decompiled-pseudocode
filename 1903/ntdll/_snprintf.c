/*
 * XREFs of _snprintf @ 0x18008D660
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 */

int snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int v4; // edi
  char *v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-40h]
  char *v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format && (!BufferCount || Buffer) )
  {
    v9 = 66;
    v8 = Buffer;
    v6 = Buffer;
    if ( BufferCount > 0x7FFFFFFF )
      LODWORD(BufferCount) = 0x7FFFFFFF;
    v7 = BufferCount;
    v4 = sub_180092D30(&v6, Format, 0LL, (__int64 *)va);
    if ( Buffer )
    {
      if ( --v7 < 0 )
        sub_180092D20(0LL, &v6);
      else
        *v6 = 0;
    }
    return v4;
  }
  else
  {
    sub_18008C6D8();
    return -1;
  }
}
