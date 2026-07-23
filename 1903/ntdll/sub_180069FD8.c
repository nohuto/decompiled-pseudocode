/*
 * XREFs of sub_180069FD8 @ 0x180069FD8
 * Callers:
 *     RtlQueryPackageClaims @ 0x180069D00 (RtlQueryPackageClaims.c)
 *     sub_18008A700 @ 0x18008A700 (sub_18008A700.c)
 *     sub_1800D0EBC @ 0x1800D0EBC (sub_1800D0EBC.c)
 * Callees:
 *     sub_18006A0E4 @ 0x18006A0E4 (sub_18006A0E4.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800CE23C @ 0x1800CE23C (sub_1800CE23C.c)
 */

__int64 sub_180069FD8(_WORD *a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4, int a5, const WCHAR *a6, ...)
{
  unsigned __int64 v7; // rdi
  int v10; // ebx
  unsigned __int64 v11; // r8
  _WORD *v12; // r13
  const WCHAR *v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  _WORD *v17; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v7 = a2 >> 1;
  v10 = 0;
  v11 = 3221225485LL;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *a1 = 0;
    return (unsigned int)v10;
  }
  v17 = a1;
  v12 = a1;
  v18[0] = a2 >> 1;
  if ( (a5 & 0x100) != 0 )
  {
    v13 = &word_18011C2FC;
    if ( a6 )
      v13 = a6;
  }
  else
  {
    v13 = a6;
  }
  v10 = 0;
  if ( (a5 & 0xFFFFE000) != 0 )
  {
    v10 = -1073741811;
    if ( v7 )
      *a1 = 0;
  }
  else
  {
    if ( !v7 )
    {
      if ( !*v13 )
        goto LABEL_12;
      v10 = a1 != 0LL ? -2147483643 : -1073741811;
LABEL_11:
      if ( v10 >= 0 )
      {
LABEL_12:
        if ( a3 )
          *a3 = v12;
        if ( a4 )
          *a4 = (a2 & 1) + 2 * v7;
        return (unsigned int)v10;
      }
      goto LABEL_26;
    }
    v18[0] = 0LL;
    v14 = sub_18006A0E4(a1, v7, v18, v13, va);
    v15 = v18[0];
    v10 = v14;
    v7 -= v18[0];
    v18[0] = v7;
    v12 = &a1[v15];
    v17 = v12;
    if ( v14 >= 0 )
    {
      if ( (a5 & 0x200) != 0 )
      {
        v11 = (a2 & 1) + 2 * v7;
        if ( v11 > 2 )
          memset(v12 + 1, (unsigned __int8)a5, v11 - 2);
      }
      goto LABEL_11;
    }
  }
LABEL_26:
  if ( (a5 & 0x1C00) != 0 && a2 )
  {
    sub_1800CE23C(a1, a2, v11, &v17, v18, a5);
    v12 = v17;
    v7 = v18[0];
  }
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
    goto LABEL_12;
  return (unsigned int)v10;
}
