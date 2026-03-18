/*
 * XREFs of BgpRasPrintGlyph @ 0x140182FAC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140182CE8 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x1409946C8 (BgpTxtDisplayString.c)
 * Callees:
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     BgpFmRoundUp @ 0x140178FC0 (BgpFmRoundUp.c)
 *     RaspGetCacheEntry @ 0x1401834C0 (RaspGetCacheEntry.c)
 *     RaspRectangleDestroy @ 0x14018353C (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x140183550 (RaspRasterize.c)
 *     RaspRectangleCreate @ 0x14018407C (RaspRectangleCreate.c)
 *     RaspAntiAlias @ 0x140184F10 (RaspAntiAlias.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RaspAddCacheEntry @ 0x140991634 (RaspAddCacheEntry.c)
 *     RaspDestroyCachedBitmap @ 0x140991698 (RaspDestroyCachedBitmap.c)
 *     BgpGxCopyRectangle @ 0x140994580 (BgpGxCopyRectangle.c)
 */

__int64 __fastcall BgpRasPrintGlyph(
        __m128i *a1,
        __int64 a2,
        __int16 a3,
        unsigned int a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8,
        _QWORD *a9)
{
  int v9; // edx
  int v10; // edi
  _QWORD *v11; // rsi
  __int64 v12; // r12
  __m128i *v13; // r14
  bool v14; // r15
  int v15; // r13d
  int v16; // r8d
  int v17; // r8d
  int v18; // r9d
  _BYTE *Memory; // rbx
  __int16 v20; // r12
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
  __m128i v36; // xmm0
  __m128i v37; // xmm3
  __m128i v38; // xmm1
  __int64 v39; // xmm0_8
  int v40; // edx
  unsigned __int64 v41; // xmm3_8
  int v43; // r9d
  int v44; // eax
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v46; // [rsp+54h] [rbp-ACh]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  _DWORD *v48; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v49; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v53[4]; // [rsp+88h] [rbp-78h] BYREF
  __m128i *v54; // [rsp+98h] [rbp-68h]
  int *v55; // [rsp+A0h] [rbp-60h]
  _QWORD v56[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v57[80]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v58[5]; // [rsp+110h] [rbp+10h] BYREF
  char v59[8]; // [rsp+1E8h] [rbp+E8h]

  v47 = a2;
  LOWORD(v46) = a3;
  v54 = a1;
  v51 = a4;
  v55 = a7;
  memset(v58, 0, 0x48uLL);
  memset(v57, 0, 0x46uLL);
  v9 = (unsigned __int16)v46;
  *a7 = 0;
  v10 = 0;
  v53[0] = 0;
  v11 = v56;
  v49 = 0LL;
  v12 = 0LL;
  v45 = 0;
  v13 = 0LL;
  memset(v56, 0, sizeof(v56));
  v14 = 0;
  v15 = 0;
  v59[0] = a6 & 1;
  v52 = 0LL;
  v50 = 0LL;
  if ( a9 )
    v11 = a9;
  if ( (unsigned __int16)v9 >= 0x20u )
  {
    v16 = *(_DWORD *)(v47 + 16);
    v48 = *(_DWORD **)(v47 + 8);
    RaspGetCacheEntry((unsigned int)&RaspBitmapCache, v9, v16, v48[10], (__int64)v48, (__int64)&v49);
    Memory = v49;
    if ( v49 )
    {
      v23 = v47;
      v22 = v48;
LABEL_12:
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
      if ( v54->m128i_i32[0] < v34 + v31 || v54->m128i_i32[1] < v30 + v51 )
      {
        v10 = -2147483643;
        goto LABEL_25;
      }
      if ( v59[0] )
      {
        v35 = (*(_BYTE *)(v29 + 20) & 1) == 0;
        v13 = v58;
        v36 = v54[2];
        v37 = v54[1];
        v38 = v54[3];
        v58[0] = *v54;
        v58[1] = v37;
        v58[2] = v36;
        v39 = v54[4].m128i_i64[0];
        v40 = _mm_cvtsi128_si32(_mm_srli_si128(v58[0], 4));
        v41 = _mm_srli_si128(v37, 8).m128i_u64[0];
        v58[3] = v38;
        if ( v35 )
          v40 = v30;
        v58[4].m128i_i64[0] = v39;
        v45 = v40;
        v58[0].m128i_i64[0] = __PAIR64__(v40, v31);
        v58[1].m128i_i64[1] = v40 * ((unsigned __int32)v58[0].m128i_i32[2] >> 3) * v34 + v41;
        goto LABEL_21;
      }
      v53[1] = v31;
      v53[0] = v30;
      v53[2] = v30;
      v44 = RaspRectangleCreate(v53, 32LL, &v50, v11);
      v13 = (__m128i *)v50;
      v10 = v44;
      if ( v44 >= 0 )
      {
        v29 = v47;
LABEL_21:
        RaspAntiAlias((_DWORD)v48, (_DWORD)v13, *((_DWORD *)Memory + 13), *((_DWORD *)Memory + 14), v29);
        if ( !v59[0] )
        {
          v48 = 0LL;
          v50 = __PAIR64__(v46, v51);
          BgpGxCopyRectangle(v54, v13, &v50, &v48);
        }
        *v55 = v45;
        if ( v14 )
          RaspAddCacheEntry(&RaspBitmapCache, Memory);
LABEL_25:
        if ( v10 >= 0 )
          goto LABEL_26;
      }
LABEL_38:
      if ( !v14 )
      {
LABEL_27:
        if ( !v15 )
        {
LABEL_28:
          if ( v12 )
            RaspRectangleDestroy(v12, v11);
          goto LABEL_30;
        }
LABEL_32:
        if ( v10 >= 0 || Memory )
          goto LABEL_30;
        goto LABEL_28;
      }
      if ( Memory )
        RaspDestroyCachedBitmap(Memory);
LABEL_26:
      if ( v14 )
        goto LABEL_32;
      goto LABEL_27;
    }
    LOBYTE(v15) = (dword_14042C030 & 4) != 0;
    if ( (dword_14042C030 & 4) == 0 && !*v11 )
      v14 = (*(_BYTE *)(v47 + 20) & 1) == 0;
    v20 = v46;
    v10 = RaspRasterize(
            v47,
            (unsigned __int16)v46,
            v17,
            v18,
            v15,
            (__int64)&v52,
            (__int64)&v45,
            (__int64)&v49,
            (__int64)v11);
    if ( v10 >= 0 )
    {
      if ( !v14 )
      {
        Memory = v57;
LABEL_11:
        v21 = v11[2];
        v22 = v48;
        v23 = v47;
        v24 = v48[10];
        *((_DWORD *)Memory + 10) = *(_DWORD *)(v47 + 16);
        *((_DWORD *)Memory + 11) = v45;
        *((_DWORD *)Memory + 12) = (_DWORD)v49;
        *((_WORD *)Memory + 30) = v20;
        v12 = v52;
        *((_DWORD *)Memory + 13) = 4;
        *((_DWORD *)Memory + 14) = 4;
        *((_DWORD *)Memory + 9) = v24;
        *((_QWORD *)Memory + 3) = v22;
        *((_QWORD *)Memory + 2) = v12;
        *(_QWORD *)(Memory + 62) = v21;
        goto LABEL_12;
      }
      Memory = (_BYTE *)BgpFwAllocateMemory(0x46uLL);
      if ( Memory )
        goto LABEL_11;
      v10 = -1073741801;
    }
    v12 = v52;
    goto LABEL_38;
  }
LABEL_30:
  if ( !v59[0] && v13 )
    RaspRectangleDestroy(v13, v11);
  v11[2] = 0LL;
  return (unsigned int)v10;
}
