/*
 * XREFs of sub_1800290D0 @ 0x1800290D0
 * Callers:
 *     sub_180025600 @ 0x180025600 (sub_180025600.c)
 *     sub_1800DF878 @ 0x1800DF878 (sub_1800DF878.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18001A040 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall sub_1800290D0(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  unsigned int v6; // edi
  const WCHAR *v7; // r8
  __int64 v8; // r9
  WCHAR v9; // cx
  __int64 v10; // rbx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  __int64 v14; // r9

  v6 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v7 + 32;
      if ( (unsigned __int16)(*v7 - 65) > 0x19u )
        v9 = *v7;
      ++v7;
      v6 = v9 + a1[6] * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = 0LL;
  v11 = a1[3] - 1;
  v12 = 0;
  if ( v11 < 0 )
    return v10;
  while ( 1 )
  {
    v13 = (v11 + v12) >> 1;
    v14 = (unsigned int)a1[5] + 8LL * v13;
    if ( v6 < *(_DWORD *)((char *)a1 + v14) )
    {
      v11 = v13 - 1;
      goto LABEL_10;
    }
    if ( v6 <= *(_DWORD *)((char *)a1 + v14) )
      break;
    v12 = v13 + 1;
LABEL_10:
    if ( v12 > v11 )
      return v10;
  }
  v10 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v14 + 4)] + (unsigned int)a1[4];
  if ( !v10
    || !RtlCompareUnicodeStrings(
          a2,
          a3,
          (PCWCH)((char *)a1 + *(unsigned int *)(v10 + 4)),
          (unsigned __int64)*(unsigned int *)(v10 + 12) >> 1,
          1u) )
  {
    return v10;
  }
  return 0LL;
}
