/*
 * XREFs of sub_18000283C @ 0x18000283C
 * Callers:
 *     sub_180002740 @ 0x180002740 (sub_180002740.c)
 *     sub_18006F388 @ 0x18006F388 (sub_18006F388.c)
 *     sub_18008C038 @ 0x18008C038 (sub_18008C038.c)
 *     sub_180114328 @ 0x180114328 (sub_180114328.c)
 * Callees:
 *     _vsnwprintf @ 0x18008E0D0 (_vsnwprintf.c)
 */

__int64 sub_18000283C(wchar_t *Buffer, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    if ( v3 )
      *Buffer = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(Buffer, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      Buffer[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      Buffer[v6] = 0;
    }
  }
  return (unsigned int)v5;
}
