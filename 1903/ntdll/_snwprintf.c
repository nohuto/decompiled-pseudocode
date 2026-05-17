/*
 * XREFs of _snwprintf @ 0x18008D710
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 */

int snwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, ...)
{
  int v4; // edi
  wchar_t *v5; // rcx
  wchar_t *v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+38h] [rbp-28h]
  wchar_t *v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  va_list va; // [rsp+98h] [rbp+38h] BYREF

  va_start(va, Format);
  if ( Format && (!BufferCount || Buffer) )
  {
    v10 = 66;
    v9 = Buffer;
    v7 = Buffer;
    if ( BufferCount <= 0x3FFFFFFF )
      v8 = 2 * BufferCount;
    else
      v8 = 0x7FFFFFFF;
    v4 = sub_1800936C0(&v7, Format, 0LL, (__int64 *)va);
    if ( Buffer )
    {
      if ( --v8 < 0 )
      {
        sub_180092D20(0LL, &v7);
        v5 = v7;
      }
      else
      {
        *(_BYTE *)v7 = 0;
        v5 = (wchar_t *)((char *)v7 + 1);
        v7 = (wchar_t *)((char *)v7 + 1);
      }
      if ( --v8 < 0 )
        sub_180092D20(0LL, &v7);
      else
        *(_BYTE *)v5 = 0;
    }
    return v4;
  }
  else
  {
    sub_18008C6D8();
    return -1;
  }
}
