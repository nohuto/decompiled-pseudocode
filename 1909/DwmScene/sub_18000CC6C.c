/*
 * XREFs of sub_18000CC6C @ 0x18000CC6C
 * Callers:
 *     sub_18000AA90 @ 0x18000AA90 (sub_18000AA90.c)
 *     sub_180127742 @ 0x180127742 (sub_180127742.c)
 *     sub_18012780A @ 0x18012780A (sub_18012780A.c)
 *     sub_1801278D4 @ 0x1801278D4 (sub_1801278D4.c)
 *     sub_180127922 @ 0x180127922 (sub_180127922.c)
 * Callees:
 *     vsnprintf @ 0x18012732C (vsnprintf.c)
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
