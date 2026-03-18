/*
 * XREFs of ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C011A324
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011A924 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawRoundedRectangularShadow(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp
  int v10; // r10d
  int v11; // edx
  _DWORD *v12; // rdi
  int v13; // eax
  __int128 v14; // xmm0
  __int64 v15; // rcx
  int v16; // edi
  char *v17; // rdx
  __int64 v18; // rcx
  int v19; // edx
  _DWORD *v20; // rdi
  int v21; // eax
  __int128 v22; // xmm0
  __int64 v23; // rcx
  int v24; // r8d
  __int128 *v25; // rdx
  int v26; // r9d
  __int64 v27; // r11
  __int64 v28; // rcx
  _DWORD *v29; // rdi
  int v30; // eax
  _DWORD *v31; // rdx
  int v32; // eax
  __int128 v33; // xmm0
  __int64 v34; // rcx
  int v35; // ecx
  int *v36; // rdx
  int *v37; // r8
  __int64 v38; // r9
  _DWORD *v39; // rdi
  int v40; // eax
  __int64 v41; // rdi
  char *v42; // r8
  _DWORD *v43; // rdx
  __int64 i; // rcx
  int v45; // eax
  int v46; // ecx
  int *v47; // rdx
  int *v48; // r8
  __int64 v49; // r9
  _DWORD *v50; // rdi
  int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // rcx
  _DWORD *v54; // rdi
  int v55; // eax
  int *v56; // rcx
  int v57; // r10d
  int *v58; // rdi
  __int64 v59; // r8
  _DWORD *v60; // rdx
  int v61; // eax

  v5 = -a2;
  v10 = 5 * a5;
  if ( a4 )
  {
    v35 = a2 * (a3 - 6);
    v36 = (int *)&unk_1C02DFE60;
    do
    {
      v37 = v36;
      v38 = 5LL;
      v39 = &a1[v10 - 5 + (__int64)v35];
      do
      {
        v40 = *v37--;
        *v39++ = v40;
        --v38;
      }
      while ( v38 );
      v35 += v5;
      v36 += 5;
    }
    while ( (__int64)v36 < (__int64)dword_1C02DFEC4 );
  }
  else
  {
    v11 = a2 * (a3 - 5);
    v12 = &unk_1C02DFE50;
    do
    {
      v13 = v12[4];
      v14 = *(_OWORD *)v12;
      v12 += 5;
      v15 = v11 - (__int64)v10;
      v11 += v5;
      *(_OWORD *)&a1[v15] = v14;
      a1[v15 + 4] = v13;
    }
    while ( (__int64)v12 < (__int64)dword_1C02DFEB4 );
  }
  v16 = a3 - v10;
  if ( a4 )
  {
    if ( v16 > 10 )
    {
      v41 = (unsigned int)(v16 - 10);
      v42 = (char *)&a1[v10 - 5 + (__int64)(a2 * (a3 - 11))];
      do
      {
        v43 = v42;
        for ( i = 16LL; i > -4; i -= 4LL )
        {
          v45 = *(_DWORD *)((char *)&xmmword_1C02DFD58 + i);
          *v43++ = v45;
        }
        v42 += 4 * v5;
        --v41;
      }
      while ( v41 );
    }
  }
  else if ( v16 > 10 )
  {
    v17 = (char *)&a1[a2 * (a3 - 10) - (__int64)v10];
    v18 = (unsigned int)(v16 - 10);
    do
    {
      *(_OWORD *)v17 = xmmword_1C02DFD58;
      *((_DWORD *)v17 + 4) = 50331648;
      v17 += 4 * v5;
      --v18;
    }
    while ( v18 );
  }
  if ( a4 )
  {
    v46 = a2 * (v10 - 1);
    v47 = (int *)&unk_1C02DFDF0;
    do
    {
      v48 = v47;
      v49 = 5LL;
      v50 = &a1[v10 - 5 + (__int64)v46];
      do
      {
        v51 = *v48--;
        *v50++ = v51;
        --v49;
      }
      while ( v49 );
      v46 += v5;
      v47 += 5;
    }
    while ( (__int64)v47 < (__int64)dword_1C02DFE54 );
  }
  else
  {
    v19 = a2 * v10;
    v20 = &unk_1C02DFDE0;
    do
    {
      v21 = v20[4];
      v22 = *(_OWORD *)v20;
      v20 += 5;
      v23 = v19 - (__int64)v10;
      v19 += v5;
      *(_OWORD *)&a1[v23] = v22;
      a1[v23 + 4] = v21;
    }
    while ( (__int64)v20 < (__int64)dword_1C02DFE44 );
  }
  v24 = a2 * (v10 - 1);
  v25 = &xmmword_1C02DFD58;
  v26 = v24;
  if ( a4 )
  {
    v52 = a2 - 10;
    do
    {
      if ( v10 < v52 )
      {
        v53 = v52 - v10;
        v54 = &a1[v10 + (__int64)v26];
        v55 = *(_DWORD *)v25;
        while ( v53 )
        {
          *v54++ = v55;
          --v53;
        }
      }
      v26 += v5;
      v25 = (__int128 *)((char *)v25 + 4);
    }
    while ( (__int64)v25 < (__int64)&unk_1C02DFD6C );
  }
  else
  {
    v27 = a2 - v10;
    do
    {
      if ( v27 > 10 )
      {
        v28 = v27 - 10;
        v29 = &a1[v26 + 10];
        v30 = *(_DWORD *)v25;
        while ( v28 )
        {
          *v29++ = v30;
          --v28;
        }
      }
      v26 += v5;
      v25 = (__int128 *)((char *)v25 + 4);
    }
    while ( (__int64)v25 < (__int64)&unk_1C02DFD6C );
  }
  if ( a4 )
  {
    v56 = (int *)&unk_1C02DFD80;
    v57 = a2 * v10;
    do
    {
      v58 = v56;
      v59 = 5LL;
      v60 = &a1[v57 - 10];
      do
      {
        v61 = *v58--;
        *v60++ = v61;
        --v59;
      }
      while ( v59 );
      v57 += v5;
      v56 += 5;
    }
    while ( (__int64)v56 < (__int64)dword_1C02DFDE4 );
  }
  else
  {
    v31 = &unk_1C02DFD70;
    do
    {
      v32 = v31[4];
      v33 = *(_OWORD *)v31;
      v34 = v24;
      v31 += 5;
      v24 += v5;
      *(_OWORD *)&a1[v34 + 5] = v33;
      a1[v34 + 9] = v32;
    }
    while ( (__int64)v31 < (__int64)dword_1C02DFDD4 );
  }
}
