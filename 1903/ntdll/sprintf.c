/*
 * XREFs of sprintf @ 0x180090DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 */

int sprintf(char *const Buffer, const char *const Format, ...)
{
  int v2; // eax
  bool v3; // sf
  int v4; // ebx
  char *v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  char *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format && Buffer )
  {
    v8 = Buffer;
    v6 = Buffer;
    v7 = 0x7FFFFFFF;
    v9 = 66;
    v2 = sub_180092D30(&v6, Format, 0LL, (__int64 *)va);
    v3 = --v7 < 0;
    v4 = v2;
    if ( v3 )
      sub_180092D20(0LL, &v6);
    else
      *v6 = 0;
    return v4;
  }
  else
  {
    sub_18008C6D8();
    return -1;
  }
}
