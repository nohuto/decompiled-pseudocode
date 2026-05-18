/*
 * XREFs of sub_18000CC6C @ 0x18000CC6C
 * Callers:
 *     sub_18000AA90 @ 0x18000AA90 (sub_18000AA90.c)
 *     sub_180127632 @ 0x180127632 (sub_180127632.c)
 *     sub_1801276FA @ 0x1801276FA (sub_1801276FA.c)
 *     sub_1801277C4 @ 0x1801277C4 (sub_1801277C4.c)
 *     sub_180127812 @ 0x180127812 (sub_180127812.c)
 * Callees:
 *     vsnprintf @ 0x18012721C (vsnprintf.c)
 */

__int64 sub_18000CC6C(char *Buffer, __int64 a2, const char *a3, ...)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list ArgList; // [rsp+68h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *(_WORD *)Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnprintf(Buffer, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      *(_WORD *)&Buffer[2 * v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      *(_WORD *)&Buffer[2 * v5] = 0;
    }
  }
  return (unsigned int)v4;
}
