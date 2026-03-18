/*
 * XREFs of GreGetCharacterPlacementW @ 0x1C02B43E4
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x1C02A7310 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     GreGetGlyphIndicesW @ 0x1C00F5248 (GreGetGlyphIndicesW.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     GreGetKerningPairs @ 0x1C0144EE4 (GreGetKerningPairs.c)
 *     GreGetTextExtentExW @ 0x1C01675D8 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C02B4248 (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
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
  unsigned int x; // esi
  _DWORD *v29; // rcx
  unsigned __int16 *v30; // r10
  __int16 v31; // ax
  unsigned __int16 *v32; // r8
  unsigned int v33; // r9d
  unsigned __int16 *v34; // r12
  __int64 v35; // rax
  int *v36; // rdx
  unsigned __int16 *j; // rax
  __int64 v38; // rax
  int v39; // r15d
  int v40; // eax
  unsigned int v41; // ecx
  int *v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // r8d
  signed int v46; // edx
  unsigned int v47; // r10d
  unsigned int *v48; // rcx
  __int64 v49; // r9
  unsigned int v50; // r8d
  __int64 v51; // rax
  int *v52; // r8
  int v53; // ecx
  __int64 v54; // rdx
  int v55; // eax
  _DWORD *v56; // rax
  unsigned int k; // ecx
  LONG y; // esi
  __int64 v59; // rax
  struct _POINTL v60; // [rsp+48h] [rbp-59h] BYREF
  int v61; // [rsp+50h] [rbp-51h]
  unsigned int *v62; // [rsp+58h] [rbp-49h] BYREF
  int v63; // [rsp+60h] [rbp-41h]
  int v64; // [rsp+64h] [rbp-3Dh]
  void *v65[2]; // [rsp+68h] [rbp-39h]
  void *Src[2]; // [rsp+78h] [rbp-29h]
  void *v67[2]; // [rsp+88h] [rbp-19h]
  __m128i v68; // [rsp+98h] [rbp-9h]
  size_t Size; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v72; // [rsp+110h] [rbp+6Fh]

  v72 = a4;
  v6 = 0;
  v62 = 0LL;
  v7 = a3;
  v64 = 0;
  v60 = 0LL;
  v9 = a1;
  v10 = 0LL;
  if ( !a5 )
  {
    if ( (unsigned int)GreGetTextExtentW(a1, a2, a3, (struct tagSIZE *)&v60, 1) )
      return (unsigned int)LOWORD(v60.x) | (v60.y << 16);
    return 0LL;
  }
  v12 = *a5;
  *(_OWORD *)Src = a5[1];
  v13 = (__m128i)a5[3];
  v14 = (int *)Src[1];
  *(_OWORD *)v65 = v12;
  v15 = a5[2];
  v68 = v13;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  *(_OWORD *)v67 = v15;
  if ( v7 > v16 )
    v7 = v16;
  v17 = a6 | 0x100000;
  LODWORD(Size) = v7;
  if ( (a6 & 0x10000) == 0 )
    v17 = a6;
  if ( (v17 & 0x200000) != 0 )
  {
    v18 = Src[1] == 0LL;
    if ( !Src[1] )
      goto LABEL_13;
    v19 = nCalcJustInArray(&v62, 1u, (char *)Src[1], 1, v16);
    v10 = v62;
    a4 = v72;
    v9 = a1;
    v64 = v19;
    if ( !v19 )
      v17 &= ~0x200000u;
  }
  v18 = v14 == 0LL;
LABEL_13:
  if ( !v18 )
    v6 = 1;
  v61 = v6;
  if ( v67[0] )
  {
    v6 += 2;
    v61 = v6;
  }
  if ( v6 == 2 )
    v14 = (int *)v67[0];
  v63 = v17 & 0x100000;
  if ( !(unsigned int)GreGetTextExtentExW(
                        v9,
                        a2,
                        v7,
                        a4,
                        (unsigned int *)((unsigned __int64)&Size & -(__int64)((v17 & 0x100000) != 0)),
                        v14,
                        (struct tagSIZE *)&v60,
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
    if ( (_DWORD)Size )
    {
      for ( i = &v14[(unsigned int)(Size - 1)]; i > v14; --i )
        *i -= *(i - 1);
    }
  }
  if ( v63 && !(_DWORD)v21 )
  {
    if ( v10 )
      Win32FreePool(v10);
    return (unsigned int)LOWORD(v60.x) | (v60.y << 16);
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
    x = v60.x;
    if ( (unsigned __int64)v26 < v27 )
    {
      v29 = v26 + 1;
      v30 = &a2[(unsigned int)(v21 - 1)];
      do
      {
        v31 = *((_WORD *)v29 - 2);
        v32 = a2;
        for ( LOWORD(Size) = v31; v32 < v30; ++v32 )
        {
          if ( v31 == *v32 )
          {
            if ( v32[1] == *((_WORD *)v29 - 1) )
            {
              v14[v32 - a2] += *v29;
              x += *v29;
              v60.x = x;
            }
            v31 = Size;
          }
        }
        v29 += 2;
      }
      while ( (unsigned __int64)(v29 - 1) < v27 );
    }
    Win32FreePool(v26);
    v33 = v72;
    if ( v63 )
    {
      while ( x > v72 )
      {
        if ( !(_DWORD)v21 )
          goto LABEL_66;
        v21 = (unsigned int)(v21 - 1);
        x -= v14[v21];
        v60.x = x;
      }
      if ( !(_DWORD)v21 )
      {
LABEL_66:
        if ( v10 )
          Win32FreePool(v10);
        v38 = (__int64)a5;
        *((_DWORD *)a5 + 14) = 0;
        *(_DWORD *)(v38 + 60) = 0;
        return 0LL;
      }
    }
  }
  else
  {
    x = v60.x;
    v33 = v72;
  }
  if ( (v17 & 0x10000) == 0 || !v61 )
  {
    v34 = a2;
    goto LABEL_90;
  }
  v34 = a2;
  if ( (_DWORD)v21 )
  {
    v35 = (unsigned int)(v21 - 1);
    v36 = &v14[v35];
    for ( j = &a2[v35]; j >= a2 && *j == 32; --j )
    {
      x -= *v36;
      LODWORD(v21) = v21 - 1;
      --v36;
    }
    if ( !(_DWORD)v21 )
      goto LABEL_66;
    v39 = v33 - x;
    if ( (int)(v33 - x) < 0 || (unsigned int)v21 < 2 )
      goto LABEL_88;
    v40 = v64;
    if ( !v64 )
    {
      v40 = nCalcJustInArray(&v62, 0x20u, (char *)a2, 0, v21);
      if ( !v40 )
      {
        while ( v39 > 0 )
        {
          v41 = 0;
          v42 = v14;
          do
          {
            ++*v42;
            if ( !--v39 )
              break;
            ++v41;
            ++v42;
          }
          while ( v41 < (int)v21 - 1 );
        }
        v10 = v62;
LABEL_88:
        v60.x = v72;
        goto LABEL_90;
      }
      v10 = v62;
    }
    v43 = v40 - 1;
    v44 = v40 - 1;
    if ( v43 >= 0 )
    {
      do
      {
        if ( (int)v21 - 1 >= v10[v44] )
          break;
        --v43;
        --v44;
      }
      while ( v44 >= 0 );
    }
    v45 = v43 + 1;
    v46 = v39 % (unsigned int)(v43 + 1);
    v47 = v39 / (unsigned int)(v43 + 1);
    if ( v43 != -1 )
    {
      v48 = v10;
      v49 = v45;
      do
      {
        v50 = v47;
        if ( v46 > 0 )
          v50 = v47 + 1;
        v51 = *v48;
        --v46;
        ++v48;
        v14[v51] += v50;
        --v49;
      }
      while ( v49 );
    }
    goto LABEL_88;
  }
LABEL_90:
  if ( v61 == 3 )
    memmove(v67[0], Src[1], 4LL * (unsigned int)v21);
  v52 = (int *)v67[0];
  if ( v67[0] )
  {
    v53 = 0;
    if ( (_DWORD)v21 )
    {
      v54 = (unsigned int)v21;
      do
      {
        v55 = *v52;
        *v52 = v53;
        v53 += v55;
        ++v52;
        --v54;
      }
      while ( v54 );
    }
  }
  if ( v65[1] )
    memmove(v65[1], v34, 2LL * (unsigned int)v21);
  if ( v67[1] )
    memset(v67[1], 1, (unsigned int)v21);
  v56 = Src[0];
  if ( Src[0] )
  {
    for ( k = 0; k < (unsigned int)v21; ++v56 )
      *v56 = k++;
  }
  if ( v68.m128i_i64[0] && (unsigned int)GreGetGlyphIndicesW(a1, v34, v21, v68.m128i_i64[0], 0, 0) == -1 )
  {
    LODWORD(v21) = 0;
    y = 0;
    v60.x = 0;
  }
  else
  {
    y = v60.y;
  }
  if ( v10 )
    Win32FreePool(v10);
  v59 = (__int64)a5;
  *((_DWORD *)a5 + 14) = v21;
  *(_DWORD *)(v59 + 60) = v21;
  return (y << 16) | (unsigned int)LOWORD(v60.x);
}
