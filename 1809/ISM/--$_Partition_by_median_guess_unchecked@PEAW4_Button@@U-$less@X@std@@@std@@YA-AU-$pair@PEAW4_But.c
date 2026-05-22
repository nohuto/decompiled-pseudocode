/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x1800C752C
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800C7274 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

char **__fastcall std::_Partition_by_median_guess_unchecked<enum _Button *,std::less<void>>(
        char **a1,
        char *a2,
        char *a3)
{
  char *v3; // r11
  char *v7; // r9
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  char *v16; // rcx
  int v17; // r8d
  int v18; // r8d
  char *v19; // r8
  int *v20; // rcx
  int v21; // ebx
  int v22; // edx
  int v23; // edx
  int v24; // r8d
  int v25; // r8d
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  char *v29; // rdx
  char *v30; // rcx
  int v31; // eax
  char *v32; // r8
  char *v33; // r11
  int v34; // ecx
  int v35; // eax
  bool v36; // zf
  char *v37; // rcx
  int v38; // ebx
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  char **result; // rax

  v3 = a3 - 4;
  v7 = &a2[4 * ((a3 - a2) >> 3)];
  v8 = (a3 - 4 - a2) >> 2;
  if ( v8 <= 40 )
  {
    v27 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 < *(_DWORD *)a2 )
    {
      *(_DWORD *)v7 = *(_DWORD *)a2;
      *(_DWORD *)a2 = v27;
      v27 = *(_DWORD *)v7;
    }
    v28 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 < v27 )
    {
      *(_DWORD *)v3 = v27;
      *(_DWORD *)v7 = v28;
      if ( v28 < *(_DWORD *)a2 )
      {
        *(_DWORD *)v7 = *(_DWORD *)a2;
        *(_DWORD *)a2 = v28;
      }
    }
  }
  else
  {
    v9 = *(_DWORD *)a2;
    v10 = (v8 + 1) >> 3;
    v11 = 4 * v10;
    v12 = 8 * v10;
    v13 = *(_DWORD *)&a2[v11];
    if ( v13 < v9 )
    {
      *(_DWORD *)&a2[v11] = v9;
      *(_DWORD *)a2 = v13;
      v13 = *(_DWORD *)&a2[v11];
    }
    v14 = *(_DWORD *)&a2[v12];
    if ( v14 < v13 )
    {
      *(_DWORD *)&a2[v12] = v13;
      *(_DWORD *)&a2[v11] = v14;
      if ( v14 < *(_DWORD *)a2 )
      {
        *(_DWORD *)&a2[v11] = *(_DWORD *)a2;
        *(_DWORD *)a2 = v14;
      }
    }
    v15 = *(_DWORD *)v7;
    v16 = &v7[-v11];
    v17 = *(_DWORD *)&v7[-v11];
    if ( *(_DWORD *)v7 < v17 )
    {
      *(_DWORD *)v7 = v17;
      *(_DWORD *)v16 = v15;
      v15 = *(_DWORD *)v7;
    }
    v18 = *(_DWORD *)&v7[v11];
    if ( v18 < v15 )
    {
      *(_DWORD *)&v7[v11] = v15;
      *(_DWORD *)v7 = v18;
      if ( v18 < *(_DWORD *)v16 )
      {
        *(_DWORD *)v7 = *(_DWORD *)v16;
        *(_DWORD *)v16 = v18;
      }
    }
    v19 = &v3[-v12];
    v20 = (int *)&v3[-v11];
    v21 = *(_DWORD *)&v3[-v11];
    if ( v21 < *(_DWORD *)v19 )
    {
      *v20 = *(_DWORD *)v19;
      *(_DWORD *)v19 = v21;
      v21 = *v20;
    }
    v22 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 < v21 )
    {
      *(_DWORD *)v3 = v21;
      *v20 = v22;
      if ( v22 < *(_DWORD *)v19 )
      {
        *v20 = *(_DWORD *)v19;
        *(_DWORD *)v19 = v22;
      }
    }
    v23 = *(_DWORD *)v7;
    v24 = *(_DWORD *)&a2[v11];
    if ( *(_DWORD *)v7 < v24 )
    {
      *(_DWORD *)v7 = v24;
      *(_DWORD *)&a2[v11] = v23;
      v23 = *(_DWORD *)v7;
    }
    v25 = *v20;
    if ( *v20 < v23 )
    {
      *v20 = v23;
      *(_DWORD *)v7 = v25;
      v26 = *(_DWORD *)&a2[v11];
      if ( v25 < v26 )
      {
        *(_DWORD *)v7 = v26;
        *(_DWORD *)&a2[v11] = v25;
      }
    }
  }
  v29 = v7 + 4;
  if ( a2 < v7 )
  {
    v30 = v7;
    do
    {
      if ( *((_DWORD *)v7 - 1) < *(_DWORD *)v7 )
        break;
      if ( *(_DWORD *)v7 < *((_DWORD *)v7 - 1) )
        break;
      v7 = v30 - 4;
      v30 = v7;
    }
    while ( a2 < v7 );
  }
  if ( v29 < a3 )
  {
    v31 = *(_DWORD *)v7;
    do
    {
      if ( *(_DWORD *)v29 < v31 )
        break;
      if ( v31 < *(_DWORD *)v29 )
        break;
      v29 += 4;
    }
    while ( v29 < a3 );
  }
  v32 = v29;
  v33 = v7;
  while ( 1 )
  {
    while ( v32 < a3 )
    {
      v34 = *(_DWORD *)v32;
      if ( *(_DWORD *)v7 < *(_DWORD *)v32 )
        goto LABEL_43;
      if ( v34 < *(_DWORD *)v7 )
        break;
      if ( v29 != v32 )
      {
        v35 = *(_DWORD *)v29;
        *(_DWORD *)v29 = v34;
        *(_DWORD *)v32 = v35;
      }
      v29 += 4;
LABEL_43:
      v32 += 4;
    }
    v36 = v33 == a2;
    if ( v33 > a2 )
    {
      v37 = v33 - 4;
      do
      {
        v38 = *(_DWORD *)v37;
        if ( *(_DWORD *)v37 >= *(_DWORD *)v7 )
        {
          if ( *(_DWORD *)v7 < v38 )
            break;
          v7 -= 4;
          if ( v7 != v37 )
          {
            v39 = *(_DWORD *)v7;
            *(_DWORD *)v7 = v38;
            *(_DWORD *)v37 = v39;
          }
        }
        v33 -= 4;
        v37 -= 4;
      }
      while ( a2 < v33 );
      v36 = v33 == a2;
    }
    if ( v36 )
      break;
    v33 -= 4;
    if ( v32 != a3 )
    {
      v44 = *(_DWORD *)v32;
      *(_DWORD *)v32 = *(_DWORD *)v33;
      *(_DWORD *)v33 = v44;
      goto LABEL_43;
    }
    v7 -= 4;
    if ( v33 != v7 )
    {
      v42 = *(_DWORD *)v33;
      *(_DWORD *)v33 = *(_DWORD *)v7;
      *(_DWORD *)v7 = v42;
    }
    v43 = *(_DWORD *)v7;
    v29 -= 4;
    *(_DWORD *)v7 = *(_DWORD *)v29;
    *(_DWORD *)v29 = v43;
  }
  if ( v32 != a3 )
  {
    if ( v29 != v32 )
    {
      v40 = *(_DWORD *)v7;
      *(_DWORD *)v7 = *(_DWORD *)v29;
      *(_DWORD *)v29 = v40;
    }
    v41 = *(_DWORD *)v7;
    v29 += 4;
    *(_DWORD *)v7 = *(_DWORD *)v32;
    v7 += 4;
    *(_DWORD *)v32 = v41;
    goto LABEL_43;
  }
  result = a1;
  *a1 = v7;
  a1[1] = v29;
  return result;
}
