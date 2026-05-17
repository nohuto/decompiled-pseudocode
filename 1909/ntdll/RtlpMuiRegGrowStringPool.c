/*
 * XREFs of RtlpMuiRegGrowStringPool @ 0x1800FE5C0
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x180015918 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegResizeStringPool @ 0x1800FEF0C (RtlpMuiRegResizeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGrowStringPool(unsigned __int16 *a1, __int64 a2, int a3, char a4)
{
  unsigned __int16 *v5; // r10
  int v6; // r9d
  unsigned int v7; // edx
  unsigned int v8; // r8d
  __int64 v9; // r9
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // eax

  v5 = a1;
  if ( a1 )
  {
    v6 = 16;
    v7 = a1[3] + 1;
    if ( a3 >= 0 )
      v6 = a3;
    v8 = a1[2];
    v9 = (unsigned int)a1[5] + v6;
    v10 = v8;
    if ( v7 >= v8 )
      v10 = v7;
    v11 = v5[4];
    v12 = v11;
    if ( (int)v9 >= v11 )
      v12 = v9;
    if ( a4 || v10 != v8 || v12 != v11 )
    {
      LOBYTE(v9) = a4;
      return RtlpMuiRegResizeStringPool(v5, (unsigned __int16)v10, (unsigned __int16)v12, v9);
    }
  }
  return (__int64)v5;
}
