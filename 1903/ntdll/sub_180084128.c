/*
 * XREFs of sub_180084128 @ 0x180084128
 * Callers:
 *     RtlGetUILanguageInfo @ 0x180083E70 (RtlGetUILanguageInfo.c)
 * Callees:
 *     sub_180014518 @ 0x180014518 (sub_180014518.c)
 *     sub_18006FDFC @ 0x18006FDFC (sub_18006FDFC.c)
 *     sub_1800FDC58 @ 0x1800FDC58 (sub_1800FDC58.c)
 */

__int64 __fastcall sub_180084128(char a1, __int64 a2, _WORD *a3, unsigned int *a4, wchar_t *a5)
{
  int v7; // r12d
  unsigned int v9; // ebp
  unsigned int v10; // edi
  wchar_t *v11; // rbx
  unsigned int v12; // ecx
  int v14; // esi
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[40]; // [rsp+38h] [rbp-50h] BYREF
  char v18; // [rsp+A0h] [rbp+18h] BYREF

  v7 = (int)a3;
  v16 = 0;
  v9 = 0;
  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  v10 = *a4;
  v11 = a5;
  if ( (*a3 & 0x406) != 0 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( (int)sub_1800FDC58(a2, v7, (unsigned __int16)v14, (_DWORD)a4, (__int64)&v18, (__int64)v17) >= 0 )
      {
        v15 = (a1 & 4) != 0
            ? sub_180014518(a2, (__int64)v17, &v16, v11, v10)
            : sub_18006FDFC(a2, (__int64)v17, &v16, v11, v10);
        v9 = v15;
        if ( v15 < 0 )
          break;
      }
      if ( ++v14 >= 4 )
      {
        v12 = v16;
        if ( v16 )
          goto LABEL_9;
        goto LABEL_5;
      }
    }
  }
  else
  {
LABEL_5:
    if ( v11 && v10 )
      *v11 = 0;
    v12 = 1;
LABEL_9:
    if ( v11 )
    {
      if ( v12 >= v10 )
      {
        if ( v10 )
          *v11 = 0;
        if ( v10 > 1 )
          v11[1] = 0;
      }
      else
      {
        v11[v12] = 0;
      }
    }
    *a4 = v12 + 1;
  }
  return v9;
}
