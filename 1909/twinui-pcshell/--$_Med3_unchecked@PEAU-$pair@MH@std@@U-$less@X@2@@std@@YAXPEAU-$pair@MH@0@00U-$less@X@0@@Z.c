/*
 * XREFs of ??$_Med3_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@00U?$less@X@0@@Z @ 0x180420F98
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAU?$pair@MH@std@@PEAU12@@0@PEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x180421048 (--$_Partition_by_median_guess_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YA-AU-$pair@PEAU-$p.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked<std::pair<float,int> *,std::less<void>>(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm0_4
  float v5; // xmm1_4
  __int64 result; // rax
  int v7; // ecx
  float v8; // xmm1_4
  int v9; // ecx
  float v10; // xmm1_4
  int v11; // ecx

  v3 = *(float *)a2;
  v5 = *(float *)a1;
  if ( *(float *)a1 > *(float *)a2
    || v3 <= v5 && (result = *(unsigned int *)(a1 + 4), *(_DWORD *)(a2 + 4) < (int)result) )
  {
    if ( a2 != a1 )
    {
      *(float *)a2 = v5;
      *(float *)a1 = v3;
      v7 = *(_DWORD *)(a2 + 4);
      result = *(unsigned int *)(a1 + 4);
      *(_DWORD *)(a2 + 4) = result;
      *(_DWORD *)(a1 + 4) = v7;
      v3 = *(float *)a2;
    }
  }
  v8 = *(float *)a3;
  if ( v3 > *(float *)a3 || v8 <= v3 && (result = *(unsigned int *)(a2 + 4), *(_DWORD *)(a3 + 4) < (int)result) )
  {
    if ( a3 != a2 )
    {
      *(float *)a3 = v3;
      *(float *)a2 = v8;
      v9 = *(_DWORD *)(a3 + 4);
      result = *(unsigned int *)(a2 + 4);
      *(_DWORD *)(a3 + 4) = result;
      *(_DWORD *)(a2 + 4) = v9;
      v3 = *(float *)a2;
    }
    v10 = *(float *)a1;
    if ( *(float *)a1 > v3 || v3 <= v10 && (result = *(unsigned int *)(a1 + 4), *(_DWORD *)(a2 + 4) < (int)result) )
    {
      if ( a2 != a1 )
      {
        *(float *)a2 = v10;
        *(float *)a1 = v3;
        v11 = *(_DWORD *)(a2 + 4);
        result = *(unsigned int *)(a1 + 4);
        *(_DWORD *)(a2 + 4) = result;
        *(_DWORD *)(a1 + 4) = v11;
      }
    }
  }
  return result;
}
