/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAEU?$less@X@std@@@std@@YA?AU?$pair@PEAEPEAE@0@PEAE0U?$less@X@0@@Z @ 0x18007D4CC
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x18007D194 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 **__fastcall std::_Partition_by_median_guess_unchecked<unsigned char *,std::less<void>>(
        unsigned __int8 **a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r11
  unsigned __int8 *v4; // r9
  __int64 v8; // rax
  unsigned __int8 v9; // dl
  __int64 v10; // rbx
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // dl
  unsigned __int8 *v13; // rcx
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  unsigned __int8 *v16; // r8
  unsigned __int8 *v17; // rcx
  unsigned __int8 v18; // bl
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // al
  unsigned __int8 v25; // cl
  unsigned __int8 *v26; // rdx
  unsigned __int8 *v27; // rcx
  unsigned __int8 v28; // al
  unsigned __int8 *v29; // r8
  unsigned __int8 *v30; // r11
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // al
  bool v33; // zf
  unsigned __int8 *v34; // rcx
  unsigned __int8 v35; // bl
  unsigned __int8 v36; // al
  unsigned __int8 v37; // cl
  unsigned __int8 v38; // cl
  unsigned __int8 v39; // cl
  unsigned __int8 v40; // cl
  unsigned __int8 v41; // cl
  unsigned __int8 **result; // rax

  v3 = a3 - 1;
  v4 = &a2[(a3 - a2) >> 1];
  if ( a3 - 1 - a2 <= 40 )
  {
    v24 = *v4;
    if ( *v4 < *a2 )
    {
      *v4 = *a2;
      *a2 = v24;
      v24 = *v4;
    }
    v25 = *v3;
    if ( *v3 < v24 )
    {
      *v3 = v24;
      *v4 = v25;
      if ( v25 < *a2 )
      {
        *v4 = *a2;
        *a2 = v25;
      }
    }
  }
  else
  {
    v8 = (a3 - a2) >> 3;
    v9 = a2[v8];
    v10 = 2 * v8;
    if ( v9 < *a2 )
    {
      a2[v8] = *a2;
      *a2 = v9;
      v9 = a2[v8];
    }
    v11 = a2[v10];
    if ( v11 < v9 )
    {
      a2[v10] = v9;
      a2[v8] = v11;
      if ( v11 < *a2 )
      {
        a2[v8] = *a2;
        *a2 = v11;
      }
    }
    v12 = *v4;
    v13 = &v4[-v8];
    v14 = v4[-v8];
    if ( *v4 < v14 )
    {
      *v4 = v14;
      *v13 = v12;
      v12 = *v4;
    }
    v15 = v4[v8];
    if ( v15 < v12 )
    {
      v4[v8] = v12;
      *v4 = v15;
      if ( v15 < *v13 )
      {
        *v4 = *v13;
        *v13 = v15;
      }
    }
    v16 = &v3[-v10];
    v17 = &v3[-v8];
    v18 = v3[-v8];
    if ( v18 < *v16 )
    {
      *v17 = *v16;
      *v16 = v18;
      v18 = *v17;
    }
    v19 = *v3;
    if ( *v3 < v18 )
    {
      *v3 = v18;
      *v17 = v19;
      if ( v19 < *v16 )
      {
        *v17 = *v16;
        *v16 = v19;
      }
    }
    v20 = *v4;
    v21 = a2[v8];
    if ( *v4 < v21 )
    {
      *v4 = v21;
      a2[v8] = v20;
      v20 = *v4;
    }
    v22 = *v17;
    if ( *v17 < v20 )
    {
      *v17 = v20;
      *v4 = v22;
      v23 = a2[v8];
      if ( v22 < v23 )
      {
        *v4 = v23;
        a2[v8] = v22;
      }
    }
  }
  v26 = v4 + 1;
  if ( a2 < v4 )
  {
    v27 = v4;
    do
    {
      if ( *(v4 - 1) < *v4 )
        break;
      if ( *v4 < *(v4 - 1) )
        break;
      v4 = v27 - 1;
      v27 = v4;
    }
    while ( a2 < v4 );
  }
  if ( v26 < a3 )
  {
    v28 = *v4;
    do
    {
      if ( *v26 < v28 )
        break;
      if ( v28 < *v26 )
        break;
      ++v26;
    }
    while ( v26 < a3 );
  }
  v29 = v26;
  v30 = v4;
  while ( 1 )
  {
    while ( v29 < a3 )
    {
      v31 = *v29;
      if ( *v4 < *v29 )
        goto LABEL_43;
      if ( v31 < *v4 )
        break;
      if ( v26 != v29 )
      {
        v32 = *v26;
        *v26 = v31;
        *v29 = v32;
      }
      ++v26;
LABEL_43:
      ++v29;
    }
    v33 = v30 == a2;
    if ( v30 > a2 )
    {
      v34 = v30 - 1;
      do
      {
        v35 = *v34;
        if ( *v34 >= *v4 )
        {
          if ( *v4 < v35 )
            break;
          if ( --v4 != v34 )
          {
            v36 = *v4;
            *v4 = v35;
            *v34 = v36;
          }
        }
        --v30;
        --v34;
      }
      while ( a2 < v30 );
      v33 = v30 == a2;
    }
    if ( v33 )
      break;
    --v30;
    if ( v29 != a3 )
    {
      v41 = *v29;
      *v29 = *v30;
      *v30 = v41;
      goto LABEL_43;
    }
    if ( v30 != --v4 )
    {
      v39 = *v30;
      *v30 = *v4;
      *v4 = v39;
    }
    v40 = *v4;
    *v4 = *--v26;
    *v26 = v40;
  }
  if ( v29 != a3 )
  {
    if ( v26 != v29 )
    {
      v37 = *v4;
      *v4 = *v26;
      *v26 = v37;
    }
    v38 = *v4;
    ++v26;
    *v4++ = *v29;
    *v29 = v38;
    goto LABEL_43;
  }
  result = a1;
  *a1 = v4;
  a1[1] = v26;
  return result;
}
