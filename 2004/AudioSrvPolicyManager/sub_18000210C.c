/*
 * XREFs of sub_18000210C @ 0x18000210C
 * Callers:
 *     sub_180004AC4 @ 0x180004AC4 (sub_180004AC4.c)
 *     sub_180026E90 @ 0x180026E90 (sub_180026E90.c)
 *     sub_18002E450 @ 0x18002E450 (sub_18002E450.c)
 *     sub_18003AE48 @ 0x18003AE48 (sub_18003AE48.c)
 *     sub_18003AF2A @ 0x18003AF2A (sub_18003AF2A.c)
 *     sub_18003B01D @ 0x18003B01D (sub_18003B01D.c)
 *     sub_18003B074 @ 0x18003B074 (sub_18003B074.c)
 * Callees:
 *     vsnprintf @ 0x18003A7E4 (vsnprintf.c)
 */

__int64 sub_18000210C(char *DstBuf, __int64 a2, const char *a3, ...)
{
  int v4; // edi
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
      *(_WORD *)DstBuf = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnprintf(DstBuf, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      *(_WORD *)&DstBuf[2 * v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      *(_WORD *)&DstBuf[2 * v5] = 0;
    }
  }
  return (unsigned int)v4;
}
