/*
 * XREFs of BgpRasPrintGlyph @ 0x14017A2D4
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14017A014 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x1409555A0 (BgpTxtDisplayString.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     BgpFmRoundUp @ 0x14016F8C0 (BgpFmRoundUp.c)
 *     RaspAntiAlias @ 0x14017A620 (RaspAntiAlias.c)
 *     RaspGetCacheEntry @ 0x14017AA08 (RaspGetCacheEntry.c)
 *     RaspRasterize @ 0x14017AA98 (RaspRasterize.c)
 *     RaspFreeMemory @ 0x14017AC5C (RaspFreeMemory.c)
 *     RaspRectangleCreate @ 0x14017B5BC (RaspRectangleCreate.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RaspAddCacheEntry @ 0x1409525CC (RaspAddCacheEntry.c)
 *     RaspDestroyCachedBitmap @ 0x140952630 (RaspDestroyCachedBitmap.c)
 *     BgpGxCopyRectangle @ 0x140955458 (BgpGxCopyRectangle.c)
 */

__int64 __fastcall BgpRasPrintGlyph(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8,
        _QWORD *a9)
{
  _QWORD *v9; // rsi
  int v10; // edi
  unsigned __int64 v11; // r15
  __m128i *v12; // r14
  char v13; // r12
  int v14; // r13d
  int v16; // r8d
  int v17; // r8d
  int v18; // r9d
  char *Memory; // rbx
  __int16 v20; // r15
  __int64 v21; // rdx
  _DWORD *v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rcx
  int v26; // r10d
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // r9
  int v30; // r10d
  int v31; // r11d
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  bool v35; // zf
  __int128 v36; // xmm0
  __m128i v37; // xmm3
  __int128 v38; // xmm1
  __int64 v39; // xmm0_8
  int v40; // edx
  unsigned __int64 v41; // xmm3_8
  int v43; // r9d
  int v44; // eax
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v46; // [rsp+54h] [rbp-ACh]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  _DWORD *v48; // [rsp+60h] [rbp-A0h] BYREF
  char *v49; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v51; // [rsp+78h] [rbp-88h]
  unsigned __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  int *v55; // [rsp+98h] [rbp-68h]
  _QWORD v56[4]; // [rsp+A0h] [rbp-60h] BYREF
  char v57; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v58; // [rsp+110h] [rbp+10h] BYREF
  __m128i v59; // [rsp+120h] [rbp+20h]
  __int128 v60; // [rsp+130h] [rbp+30h]
  __int128 v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+50h]
  char v63[8]; // [rsp+1E8h] [rbp+E8h]

  v9 = a9;
  v10 = 0;
  v49 = 0LL;
  v11 = 0LL;
  v45 = 0;
  v12 = 0LL;
  v54 = a1;
  v13 = 0;
  v14 = 0;
  v55 = a7;
  v51 = a4;
  LOWORD(v46) = a3;
  *a7 = 0;
  v63[0] = a6 & 1;
  v47 = a2;
  v52 = 0LL;
  v50 = 0LL;
  if ( !a9 )
  {
    v9 = v56;
    memset(v56, 0, 24);
  }
  if ( a3 >= 0x20u )
  {
    v16 = *(_DWORD *)(a2 + 16);
    v48 = *(_DWORD **)(a2 + 8);
    RaspGetCacheEntry((unsigned int)&RaspBitmapCache, a3, v16, v48[10], (__int64)v48, (__int64)&v49);
    Memory = v49;
    if ( v49 )
    {
      v23 = v47;
      v22 = v48;
LABEL_13:
      v25 = *((__int16 *)v22 + 43);
      v26 = *((_DWORD *)Memory + 11);
      v48 = (_DWORD *)*((_QWORD *)Memory + 2);
      v27 = *(_QWORD *)(v23 + 8);
      LODWORD(v49) = *v48 / *((_DWORD *)Memory + 14);
      v45 = v26;
      v28 = BgpFmRoundUp(
              ((*(unsigned int *)(v23 + 16) * v25 * *(unsigned int *)(v27 + 96)) << 6)
            / (72LL
             * *(unsigned __int16 *)(v27 + 120)));
      v32 = *((_DWORD *)Memory + 12);
      v33 = a5 + v28;
      if ( v32 >= 0 && v32 > v33 )
      {
        v43 = *((unsigned __int16 *)Memory + 30);
        v46 = 0;
        DbgPrintEx(0x65u, 0, "BGFX internal font error char %x!\n", v43);
        v29 = v47;
        v34 = 0;
        v30 = v45;
        v31 = (int)v49;
      }
      else
      {
        v34 = v33 - v32;
        v46 = v34;
      }
      if ( *(_DWORD *)v54 < v34 + v31 || *(_DWORD *)(v54 + 4) < v30 + v51 )
      {
        v10 = -2147483643;
        goto LABEL_26;
      }
      if ( v63[0] )
      {
        v35 = (*(_BYTE *)(v29 + 20) & 1) == 0;
        v12 = &v58;
        v36 = *(_OWORD *)(v54 + 32);
        v37 = *(__m128i *)(v54 + 16);
        v38 = *(_OWORD *)(v54 + 48);
        v58 = *(__m128i *)v54;
        v59 = v37;
        v60 = v36;
        v39 = *(_QWORD *)(v54 + 64);
        v40 = _mm_cvtsi128_si32(_mm_srli_si128(v58, 4));
        v41 = _mm_srli_si128(v37, 8).m128i_u64[0];
        v61 = v38;
        if ( v35 )
          v40 = v30;
        v62 = v39;
        v45 = v40;
        v58.m128i_i64[0] = __PAIR64__(v40, v31);
        v59.m128i_i64[1] = v40 * ((unsigned __int32)v58.m128i_i32[2] >> 3) * v34 + v41;
        goto LABEL_22;
      }
      v52 = __PAIR64__(v31, v30);
      v53 = v30;
      v44 = RaspRectangleCreate(&v52, 32LL, &v50, v9);
      v12 = (__m128i *)v50;
      v10 = v44;
      if ( v44 >= 0 )
      {
        v29 = v47;
LABEL_22:
        RaspAntiAlias((_DWORD)v48, (_DWORD)v12, *((_DWORD *)Memory + 13), *((_DWORD *)Memory + 14), v29);
        if ( !v63[0] )
        {
          v48 = 0LL;
          v50 = __PAIR64__(v46, v51);
          BgpGxCopyRectangle(v54, v12, &v50, &v48);
        }
        *v55 = v45;
        if ( v13 )
          RaspAddCacheEntry(&RaspBitmapCache, Memory);
LABEL_26:
        if ( v10 >= 0 )
          goto LABEL_27;
      }
LABEL_39:
      if ( !v13 )
      {
LABEL_28:
        if ( !v14 )
        {
LABEL_29:
          if ( v11 )
            RaspFreeMemory(v11, v9);
          goto LABEL_31;
        }
LABEL_33:
        if ( v10 >= 0 || Memory )
          goto LABEL_31;
        goto LABEL_29;
      }
      if ( Memory )
        RaspDestroyCachedBitmap(Memory);
LABEL_27:
      if ( v13 )
        goto LABEL_33;
      goto LABEL_28;
    }
    LOBYTE(v14) = (dword_140406AD0 & 4) != 0;
    if ( (dword_140406AD0 & 4) == 0 && !*v9 )
    {
      v13 = 0;
      if ( ((unsigned __int8)((_BYTE)v49 + 1) & *(_BYTE *)(v47 + 20)) == 0 )
        v13 = (_BYTE)v49 + 1;
    }
    v20 = v46;
    v10 = RaspRasterize(
            v47,
            (unsigned __int16)v46,
            v17,
            v18,
            v14,
            (__int64)&v52,
            (__int64)&v45,
            (__int64)&v49,
            (__int64)v9);
    if ( v10 >= 0 )
    {
      if ( !v13 )
      {
        Memory = &v57;
LABEL_12:
        v21 = v9[2];
        v22 = v48;
        v23 = v47;
        v24 = v48[10];
        *((_DWORD *)Memory + 10) = *(_DWORD *)(v47 + 16);
        *((_DWORD *)Memory + 11) = v45;
        *((_DWORD *)Memory + 12) = (_DWORD)v49;
        *((_WORD *)Memory + 30) = v20;
        v11 = v52;
        *((_DWORD *)Memory + 13) = 4;
        *((_DWORD *)Memory + 14) = 4;
        *((_DWORD *)Memory + 9) = v24;
        *((_QWORD *)Memory + 3) = v22;
        *((_QWORD *)Memory + 2) = v11;
        *(_QWORD *)(Memory + 62) = v21;
        goto LABEL_13;
      }
      Memory = (char *)BgpFwAllocateMemory(0x46uLL);
      if ( Memory )
        goto LABEL_12;
      v10 = -1073741801;
    }
    v11 = v52;
    goto LABEL_39;
  }
LABEL_31:
  if ( !v63[0] && v12 )
    RaspFreeMemory(v12, v9);
  v9[2] = 0LL;
  return (unsigned int)v10;
}
