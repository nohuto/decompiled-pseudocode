/*
 * XREFs of swprintf @ 0x18008DD50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 */

int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  int v3; // eax
  bool v4; // sf
  int v5; // ebx
  wchar_t *v6; // rcx
  wchar_t *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  wchar_t *v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  const wchar_t *v12; // [rsp+90h] [rbp+28h] BYREF

  v12 = Format;
  if ( BufferCount && Buffer )
  {
    v10 = Buffer;
    v8 = Buffer;
    v11 = 66;
    v9 = 0x7FFFFFFF;
    v3 = sub_1800936C0(&v8, BufferCount, 0LL, &v12);
    v4 = --v9 < 0;
    v5 = v3;
    if ( v4 )
    {
      sub_180092D20(0LL, &v8);
      v6 = v8;
    }
    else
    {
      *(_BYTE *)v8 = 0;
      v6 = (wchar_t *)((char *)v8 + 1);
      v8 = (wchar_t *)((char *)v8 + 1);
    }
    if ( --v9 < 0 )
      sub_180092D20(0LL, &v8);
    else
      *(_BYTE *)v6 = 0;
    return v5;
  }
  else
  {
    sub_18008C6D8();
    return -1;
  }
}
