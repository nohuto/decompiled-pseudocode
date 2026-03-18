/*
 * XREFs of std::_Partition_by_median_guess_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x1802309F8
 * Callers:
 *     std::_Sort_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x180230D90 (std--_Sort_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___.c)
 * Callees:
 *     std::_Med3_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x1802309A0 (std--_Med3_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___.c)
 */

__int64 **__fastcall std::_Partition_by_median_guess_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(
        __int64 **a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  __int64 *v3; // r15
  __int64 *v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 *v20; // r9
  __int64 v21; // r10
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  __int64 *v25; // r8
  __int64 *v26; // r9
  unsigned int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rax
  bool v30; // zf
  __int64 *v31; // rcx
  unsigned int v32; // r10d
  unsigned int v33; // r11d
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 **result; // rax

  v3 = (__int64 *)(a3 - 8);
  v7 = a2;
  v8 = &a2[(__int64)(a3 - (_QWORD)a2) >> 4];
  v9 = (__int64)(a3 - 8 - (_QWORD)a2) >> 3;
  if ( v9 <= 40 )
  {
    v16 = (__int64 *)(a3 - 8);
  }
  else
  {
    v10 = (v9 + 1) >> 3;
    v11 = 16 * v10;
    v12 = &a2[v10];
    std::_Med3_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(a2, v12, &a2[2 * v10]);
    std::_Med3_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(
      (__int64 *)((char *)v8 - v13),
      v8,
      (__int64 *)((char *)v8 + v13));
    std::_Med3_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(
      &v3[v11 / 0xFFFFFFFFFFFFFFF8uLL],
      (__int64 *)((char *)v3 - v14),
      v3);
    v16 = v15;
    v7 = v12;
  }
  std::_Med3_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(v7, v8, v16);
  v17 = v8 + 1;
  if ( a2 < v8 )
  {
    v18 = *v8;
    do
    {
      v19 = *(_DWORD *)(v18 + 264);
      v20 = v8 - 1;
      v21 = *(v8 - 1);
      v22 = *(_DWORD *)(v21 + 264);
      if ( v22 < v19 )
        break;
      if ( v19 < v22 )
        break;
      --v8;
      v18 = v21;
    }
    while ( a2 < v20 );
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v23 = *(_DWORD *)(*v8 + 264);
    do
    {
      v24 = *(_DWORD *)(*v17 + 264);
      if ( v24 < v23 )
        break;
      if ( v23 < v24 )
        break;
      ++v17;
    }
    while ( (unsigned __int64)v17 < a3 );
  }
  v25 = v17;
  v26 = v8;
  while ( 1 )
  {
    while ( (unsigned __int64)v25 < a3 )
    {
      v27 = *(_DWORD *)(*v8 + 264);
      v28 = *(_DWORD *)(*v25 + 264);
      if ( v27 < v28 )
        goto LABEL_20;
      if ( v28 < v27 )
        break;
      if ( v17 != v25 )
      {
        v29 = *v17;
        *v17 = *v25;
        *v25 = v29;
      }
      ++v17;
LABEL_20:
      ++v25;
    }
    v30 = v26 == a2;
    if ( v26 > a2 )
    {
      v31 = v26 - 1;
      do
      {
        v32 = *(_DWORD *)(*v31 + 264);
        v33 = *(_DWORD *)(*v8 + 264);
        if ( v32 >= v33 )
        {
          if ( v33 < v32 )
            break;
          if ( --v8 != v31 )
          {
            v34 = *v8;
            *v8 = *v31;
            *v31 = v34;
          }
        }
        --v26;
        --v31;
      }
      while ( a2 < v26 );
      v30 = v26 == a2;
    }
    if ( v30 )
      break;
    --v26;
    if ( v25 != (__int64 *)a3 )
    {
      v38 = *v25;
      *v25 = *v26;
      *v26 = v38;
      goto LABEL_20;
    }
    if ( v26 == --v8 )
    {
      v37 = *v8;
    }
    else
    {
      v37 = *v26;
      *v26 = *v8;
      *v8 = v37;
    }
    *v8 = *--v17;
    *v17 = v37;
  }
  if ( v25 != (__int64 *)a3 )
  {
    if ( v17 != v25 )
    {
      v35 = *v8;
      *v8 = *v17;
      *v17 = v35;
    }
    v36 = *v8;
    ++v17;
    *v8++ = *v25;
    *v25 = v36;
    goto LABEL_20;
  }
  result = a1;
  *a1 = v8;
  a1[1] = v17;
  return result;
}
