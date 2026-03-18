/*
 * XREFs of GreGetCharacterPlacementW @ 0x1C028A030
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x1C027EB30 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     GreGetGlyphIndicesW @ 0x1C00F8CAC (GreGetGlyphIndicesW.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     GreGetKerningPairs @ 0x1C011936C (GreGetKerningPairs.c)
 *     GreGetTextExtentExW @ 0x1C013CF34 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C0289EE0 (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
 */

__int64 __fastcall GreGetCharacterPlacementW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        __int128 *a5,
        int a6)
{
  int v6; // r15d
  unsigned int v7; // ebx
  HDC v9; // r10
  unsigned int *v10; // rdi
  __int128 v12; // xmm0
  __m128i v13; // xmm1
  int *v14; // r13
  __int128 v15; // xmm0
  unsigned int v16; // r8d
  int v17; // r12d
  bool v18; // zf
  int v19; // eax
  unsigned int *v20; // rcx
  __int64 v21; // rbx
  int *i; // rdx
  unsigned int KerningPairs; // eax
  __int64 v24; // rsi
  unsigned int *v25; // rax
  unsigned int *v26; // r15
  unsigned __int64 v27; // r9
  unsigned int cx; // esi
  _DWORD *v29; // rcx
  unsigned __int16 *v30; // r10
  __int16 v31; // r11
  unsigned __int16 *j; // rdx
  unsigned int v33; // r9d
  unsigned __int16 *v34; // r12
  __int64 v35; // rax
  int *v36; // rdx
  unsigned __int16 *k; // rax
  int v38; // r15d
  int v39; // eax
  unsigned int v40; // ecx
  int *v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // r8d
  signed int v45; // edx
  unsigned int v46; // r10d
  unsigned int *v47; // rcx
  __int64 v48; // r9
  unsigned int v49; // r8d
  __int64 v50; // rax
  int *v51; // r8
  int v52; // ecx
  __int64 v53; // rdx
  int v54; // eax
  _DWORD *v55; // rax
  unsigned int m; // ecx
  LONG cy; // esi
  struct tagSIZE v58; // [rsp+48h] [rbp-59h] BYREF
  unsigned int *v59; // [rsp+50h] [rbp-51h] BYREF
  unsigned int Size; // [rsp+58h] [rbp-49h] BYREF
  int Size_4; // [rsp+5Ch] [rbp-45h]
  int v62; // [rsp+60h] [rbp-41h]
  void *v63[2]; // [rsp+68h] [rbp-39h]
  void *Src[2]; // [rsp+78h] [rbp-29h]
  void *v65[2]; // [rsp+88h] [rbp-19h]
  __m128i v66; // [rsp+98h] [rbp-9h]
  int v69; // [rsp+108h] [rbp+67h]
  unsigned int v70; // [rsp+110h] [rbp+6Fh]

  v70 = a4;
  v6 = 0;
  v59 = 0LL;
  v7 = a3;
  v62 = 0;
  v58 = 0LL;
  v9 = a1;
  v10 = 0LL;
  if ( !a5 )
  {
    if ( !(unsigned int)GreGetTextExtentW(a1, a2, a3, &v58, 1) )
      return 0LL;
    return (unsigned int)LOWORD(v58.cx) | (v58.cy << 16);
  }
  v12 = *a5;
  *(_OWORD *)Src = a5[1];
  v13 = (__m128i)a5[3];
  v14 = (int *)Src[1];
  *(_OWORD *)v63 = v12;
  v15 = a5[2];
  v66 = v13;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  *(_OWORD *)v65 = v15;
  if ( v7 > v16 )
    v7 = v16;
  v17 = a6 | 0x100000;
  Size = v7;
  if ( (a6 & 0x10000) == 0 )
    v17 = a6;
  if ( (v17 & 0x200000) != 0 )
  {
    v18 = Src[1] == 0LL;
    if ( !Src[1] )
      goto LABEL_13;
    v19 = nCalcJustInArray(&v59, 1u, (char *)Src[1], 1, v16);
    v10 = v59;
    a4 = v70;
    v9 = a1;
    v62 = v19;
    if ( !v19 )
      v17 &= ~0x200000u;
  }
  v18 = v14 == 0LL;
LABEL_13:
  if ( !v18 )
    v6 = 1;
  v69 = v6;
  if ( v65[0] )
  {
    v6 += 2;
    v69 = v6;
  }
  if ( v6 == 2 )
    v14 = (int *)v65[0];
  Size_4 = v17 & 0x100000;
  if ( !(unsigned int)GreGetTextExtentExW(
                        v9,
                        a2,
                        v7,
                        a4,
                        (unsigned int *)((unsigned __int64)&Size & -(__int64)((v17 & 0x100000) != 0)),
                        v14,
                        &v58,
                        0) )
  {
    if ( !v10 )
      return 0LL;
    v20 = v10;
LABEL_22:
    Win32FreePool(v20);
    return 0LL;
  }
  LODWORD(v21) = Size;
  if ( v14 )
  {
    if ( Size )
    {
      for ( i = &v14[Size - 1]; i > v14; --i )
        *i -= *(i - 1);
    }
  }
  if ( Size_4 && !(_DWORD)v21 )
  {
    if ( v10 )
      Win32FreePool(v10);
    return (unsigned int)LOWORD(v58.cx) | (v58.cy << 16);
  }
  if ( (v17 & 8) != 0
    && v6
    && (unsigned int)v21 >= 2
    && (KerningPairs = GreGetKerningPairs(a1, 0, 0LL), (v24 = KerningPairs) != 0)
    && (v25 = (unsigned int *)PALLOCMEM2(8 * KerningPairs, 1954051143LL, 1), (v26 = v25) != 0LL) )
  {
    if ( (unsigned int)GreGetKerningPairs(a1, v24, (unsigned __int64)v25) != (_DWORD)v24 )
    {
      if ( v10 )
        Win32FreePool(v10);
      v20 = v26;
      goto LABEL_22;
    }
    v27 = (unsigned __int64)&v26[2 * v24];
    cx = v58.cx;
    if ( (unsigned __int64)v26 < v27 )
    {
      v29 = v26 + 1;
      v30 = &a2[(unsigned int)(v21 - 1)];
      do
      {
        v31 = *((_WORD *)v29 - 2);
        for ( j = a2; j < v30; ++j )
        {
          if ( v31 == *j && j[1] == *((_WORD *)v29 - 1) )
          {
            v14[j - a2] += *v29;
            cx += *v29;
            v58.cx = cx;
          }
        }
        v29 += 2;
      }
      while ( (unsigned __int64)(v29 - 1) < v27 );
      v10 = v59;
    }
    Win32FreePool(v26);
    v33 = v70;
    if ( Size_4 )
    {
      while ( cx > v70 )
      {
        if ( !(_DWORD)v21 )
          goto LABEL_56;
        v21 = (unsigned int)(v21 - 1);
        cx -= v14[v21];
        v58.cx = cx;
      }
      if ( !(_DWORD)v21 )
      {
LABEL_56:
        if ( v10 )
          Win32FreePool(v10);
        *((_DWORD *)a5 + 14) = 0;
        *((_DWORD *)a5 + 15) = 0;
        return 0LL;
      }
    }
  }
  else
  {
    cx = v58.cx;
    v33 = v70;
  }
  if ( (v17 & 0x10000) == 0 || !v69 )
  {
    v34 = a2;
    goto LABEL_90;
  }
  v34 = a2;
  if ( (_DWORD)v21 )
  {
    v35 = (unsigned int)(v21 - 1);
    v36 = &v14[v35];
    for ( k = &a2[v35]; k >= a2 && *k == 32; --k )
    {
      cx -= *v36;
      LODWORD(v21) = v21 - 1;
      --v36;
    }
    if ( !(_DWORD)v21 )
      goto LABEL_56;
    v38 = v33 - cx;
    if ( (int)(v33 - cx) < 0 || (unsigned int)v21 < 2 )
      goto LABEL_88;
    v39 = v62;
    if ( !v62 )
    {
      v39 = nCalcJustInArray(&v59, 0x20u, (char *)a2, 0, v21);
      if ( !v39 )
      {
        while ( v38 > 0 )
        {
          v40 = 0;
          v41 = v14;
          do
          {
            ++*v41;
            if ( !--v38 )
              break;
            ++v40;
            ++v41;
          }
          while ( v40 < (int)v21 - 1 );
        }
        v10 = v59;
LABEL_88:
        v58.cx = v70;
        goto LABEL_90;
      }
      v10 = v59;
    }
    v42 = v39 - 1;
    v43 = v39 - 1;
    if ( v42 >= 0 )
    {
      do
      {
        if ( (int)v21 - 1 >= v10[v43] )
          break;
        --v42;
        --v43;
      }
      while ( v43 >= 0 );
    }
    v44 = v42 + 1;
    v45 = v38 % (unsigned int)(v42 + 1);
    v46 = v38 / (unsigned int)(v42 + 1);
    if ( v42 != -1 )
    {
      v47 = v10;
      v48 = v44;
      do
      {
        v49 = v46;
        if ( v45 > 0 )
          v49 = v46 + 1;
        v50 = *v47;
        --v45;
        ++v47;
        v14[v50] += v49;
        --v48;
      }
      while ( v48 );
    }
    goto LABEL_88;
  }
LABEL_90:
  if ( v69 == 3 )
    memmove(v65[0], Src[1], 4LL * (unsigned int)v21);
  v51 = (int *)v65[0];
  if ( v65[0] )
  {
    v52 = 0;
    if ( (_DWORD)v21 )
    {
      v53 = (unsigned int)v21;
      do
      {
        v54 = *v51;
        *v51 = v52;
        v52 += v54;
        ++v51;
        --v53;
      }
      while ( v53 );
    }
  }
  if ( v63[1] )
    memmove(v63[1], v34, 2LL * (unsigned int)v21);
  if ( v65[1] )
    memset(v65[1], 1, (unsigned int)v21);
  v55 = Src[0];
  if ( Src[0] )
  {
    for ( m = 0; m < (unsigned int)v21; ++v55 )
      *v55 = m++;
  }
  if ( v66.m128i_i64[0] && (unsigned int)GreGetGlyphIndicesW(a1, v34, v21, v66.m128i_i64[0], 0, 0) == -1 )
  {
    LODWORD(v21) = 0;
    cy = 0;
    v58.cx = 0;
  }
  else
  {
    cy = v58.cy;
  }
  if ( v10 )
    Win32FreePool(v10);
  *((_DWORD *)a5 + 14) = v21;
  *((_DWORD *)a5 + 15) = v21;
  return (cy << 16) | (unsigned int)LOWORD(v58.cx);
}
