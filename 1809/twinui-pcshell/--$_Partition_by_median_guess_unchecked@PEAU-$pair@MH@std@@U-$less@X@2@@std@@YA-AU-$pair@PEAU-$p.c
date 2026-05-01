/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAU?$pair@MH@std@@PEAU12@@0@PEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x18039C144
 * Callers:
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x18039C5CC (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@00U?$less@X@0@@Z @ 0x18039C094 (--$_Med3_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@00U-$less@X@0@@Z.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked<std::pair<float,int> *,std::less<void>>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  float *v18; // rax
  float *v19; // rcx
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  unsigned __int64 v24; // r8
  float *v25; // r9
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  int v29; // ecx
  bool v30; // zf
  float *v31; // r10
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  int v35; // ecx
  float v36; // xmm0_4
  int v37; // ecx
  float v38; // xmm0_4
  int v39; // ecx
  float v40; // xmm0_4
  int v41; // ecx
  float v42; // xmm0_4
  int v43; // ecx
  float v44; // xmm0_4
  int v45; // ecx
  unsigned __int64 *result; // rax

  v3 = a3 - 8;
  v7 = a2;
  v8 = a2 + 8 * ((__int64)(a3 - a2) >> 4);
  v9 = (__int64)(a3 - 8 - a2) >> 3;
  if ( v9 <= 40 )
  {
    v16 = a3 - 8;
  }
  else
  {
    v10 = (v9 + 1) >> 3;
    v11 = 8 * v10 + a2;
    std::_Med3_unchecked<std::pair<float,int> *,std::less<void>>(a2, v11, 16 * v10 + a2);
    std::_Med3_unchecked<std::pair<float,int> *,std::less<void>>(v8 - v12, v8, v12 + v8);
    std::_Med3_unchecked<std::pair<float,int> *,std::less<void>>(v3 - v13, v3 - v14, v3);
    v7 = v11;
    v16 = v15;
  }
  std::_Med3_unchecked<std::pair<float,int> *,std::less<void>>(v7, v8, v16);
  v17 = v8 + 8;
  v18 = (float *)v8;
  if ( a2 < v8 )
  {
    v19 = (float *)v8;
    while ( 1 )
    {
      v20 = *(float *)(v8 - 8);
      v21 = *(float *)v8;
      if ( *(float *)v8 > v20
        || v20 > v21
        || *(_DWORD *)(v8 - 4) < *(_DWORD *)(v8 + 4)
        || v20 > v21
        || v21 <= v20 && *(_DWORD *)(v8 + 4) < *(_DWORD *)(v8 - 4) )
      {
        break;
      }
      v8 = (unsigned __int64)(v19 - 2);
      v19 = (float *)v8;
      v18 = (float *)v8;
      if ( a2 >= v8 )
        goto LABEL_15;
    }
    v18 = v19;
  }
LABEL_15:
  if ( v17 < a3 )
  {
    v22 = *v18;
    do
    {
      v23 = *(float *)v17;
      if ( v22 > *(float *)v17
        || v23 > v22
        || *(_DWORD *)(v17 + 4) < *(_DWORD *)(v8 + 4)
        || v23 > v22
        || v22 <= v23 && *(_DWORD *)(v8 + 4) < *(_DWORD *)(v17 + 4) )
      {
        break;
      }
      v17 += 8LL;
    }
    while ( v17 < a3 );
  }
  v24 = v17;
  v25 = (float *)v8;
  while ( 2 )
  {
    while ( v24 < a3 )
    {
      v26 = *(float *)v8;
      v27 = *(float *)v24;
      if ( *(float *)v24 <= *(float *)v8 )
      {
        if ( v26 > v27 )
          break;
        if ( *(_DWORD *)(v8 + 4) >= *(_DWORD *)(v24 + 4) )
        {
          if ( v26 > v27 || v27 <= v26 && *(_DWORD *)(v24 + 4) < *(_DWORD *)(v8 + 4) )
            break;
          if ( v17 != v24 )
          {
            v28 = *(float *)v17;
            *(float *)v17 = v27;
            *(float *)v24 = v28;
            v29 = *(_DWORD *)(v17 + 4);
            *(_DWORD *)(v17 + 4) = *(_DWORD *)(v24 + 4);
            *(_DWORD *)(v24 + 4) = v29;
          }
          v17 += 8LL;
        }
      }
LABEL_34:
      v24 += 8LL;
    }
    v30 = v25 == (float *)a2;
    if ( (unsigned __int64)v25 <= a2 )
      goto LABEL_48;
    v31 = v25 - 2;
    do
    {
      v32 = *v31;
      v33 = *(float *)v8;
      if ( *(float *)v8 > *v31 )
        goto LABEL_46;
      if ( v32 > v33 )
        break;
      if ( *((_DWORD *)v31 + 1) < *(_DWORD *)(v8 + 4) )
        goto LABEL_46;
      if ( v32 > v33 || v33 <= v32 && *(_DWORD *)(v8 + 4) < *((_DWORD *)v31 + 1) )
        break;
      v8 -= 8LL;
      if ( (float *)v8 != v31 )
      {
        v34 = *(float *)v8;
        *(float *)v8 = v32;
        *v31 = v34;
        v35 = *(_DWORD *)(v8 + 4);
        *(float *)(v8 + 4) = v31[1];
        *((_DWORD *)v31 + 1) = v35;
      }
LABEL_46:
      v25 -= 2;
      v31 -= 2;
    }
    while ( a2 < (unsigned __int64)v25 );
    v30 = v25 == (float *)a2;
LABEL_48:
    if ( !v30 )
    {
      v25 -= 2;
      if ( v24 == a3 )
      {
        v8 -= 8LL;
        if ( v25 != (float *)v8 )
        {
          v40 = *v25;
          *v25 = *(float *)v8;
          *(float *)v8 = v40;
          v41 = *((_DWORD *)v25 + 1);
          v25[1] = *(float *)(v8 + 4);
          *(_DWORD *)(v8 + 4) = v41;
        }
        v17 -= 8LL;
        if ( v8 != v17 )
        {
          v42 = *(float *)v8;
          *(_DWORD *)v8 = *(_DWORD *)v17;
          *(float *)v17 = v42;
          v43 = *(_DWORD *)(v8 + 4);
          *(_DWORD *)(v8 + 4) = *(_DWORD *)(v17 + 4);
          *(_DWORD *)(v17 + 4) = v43;
        }
        continue;
      }
      if ( (float *)v24 != v25 )
      {
        v44 = *(float *)v24;
        *(float *)v24 = *v25;
        *v25 = v44;
        v45 = *(_DWORD *)(v24 + 4);
        *(float *)(v24 + 4) = v25[1];
        *((_DWORD *)v25 + 1) = v45;
      }
      goto LABEL_34;
    }
    break;
  }
  if ( v24 != a3 )
  {
    if ( v17 != v24 && v8 != v17 )
    {
      v36 = *(float *)v8;
      *(_DWORD *)v8 = *(_DWORD *)v17;
      *(float *)v17 = v36;
      v37 = *(_DWORD *)(v8 + 4);
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(v17 + 4);
      *(_DWORD *)(v17 + 4) = v37;
    }
    v17 += 8LL;
    if ( v8 != v24 )
    {
      v38 = *(float *)v8;
      *(_DWORD *)v8 = *(_DWORD *)v24;
      *(float *)v24 = v38;
      v39 = *(_DWORD *)(v8 + 4);
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(v24 + 4);
      *(_DWORD *)(v24 + 4) = v39;
    }
    v8 += 8LL;
    goto LABEL_34;
  }
  result = a1;
  *a1 = v8;
  a1[1] = v17;
  return result;
}
