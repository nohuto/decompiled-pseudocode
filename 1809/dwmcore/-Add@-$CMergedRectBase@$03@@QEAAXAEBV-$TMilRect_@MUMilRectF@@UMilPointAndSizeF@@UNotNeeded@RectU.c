/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA1B4
 * Callers:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800A9C8C (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800A9F28 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x1801B922C (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18006BA08 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800AA428 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall CMergedRectBase<4>::Add(__int64 a1, float *a2)
{
  _UNKNOWN **v2; // rax
  float v5; // xmm7_4
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // r9d
  _BYTE *v9; // r11
  float *v10; // r10
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  __int64 v14; // rcx
  unsigned int v15; // r9d
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm4_4
  char v19; // bp
  float v20; // xmm2_4
  float *v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // r10
  float v24; // xmm0_4
  unsigned int v25; // eax
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  _BYTE *v28; // r11
  __int64 v29; // rsi
  float *v30; // rdx
  unsigned int v31; // eax
  float v32; // xmm6_4
  _BYTE *v33; // rax
  __int128 v35; // [rsp+20h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return (char)v2;
  v5 = FLOAT_3_4028235e38;
  v6 = -1;
  v7 = -1;
  if ( (*(_BYTE *)(a1 + 68) & 0xF) == 0 )
  {
    v27 = 0;
    *(_DWORD *)(a1 + 68) = 1;
    if ( *(_DWORD *)(a1 + 72) > 1u )
    {
      v32 = 0.0;
      v23 = 0LL;
      do
      {
        v19 = 0;
        v20 = v32;
        if ( *(_BYTE *)(a1 + v23 + 64) )
        {
          v24 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a1 + 16LL * (unsigned int)v23);
          if ( v24 > v32 )
            v32 = v24;
          v25 = v23;
          v26 = v23 + 1;
          if ( v24 <= v20 )
            v25 = v22;
          v27 = v25;
          if ( v26 < 4 )
          {
            v28 = (_BYTE *)(v26 + a1 + 64);
            while ( 1 )
            {
              if ( *v28 )
              {
                v29 = v26;
                if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                        v21,
                                        a1 + 16LL * v26) )
                  break;
              }
              ++v26;
              ++v28;
              if ( v26 >= 4 )
                goto LABEL_35;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v21, v30);
            *(_BYTE *)(v29 + a1 + 64) = 0;
            v19 = 1;
            --*(_DWORD *)(a1 + 72);
          }
        }
LABEL_35:
        v31 = v23 + 1;
        v23 = 0LL;
        if ( !v19 )
          v23 = v31;
      }
      while ( (unsigned int)v23 < 4 );
    }
    else
    {
      if ( *(_DWORD *)(a1 + 72) != 1 )
        goto LABEL_4;
      v33 = (_BYTE *)(a1 + 64);
      while ( !*v33 )
      {
        ++v27;
        ++v33;
        if ( v27 >= 4 )
          goto LABEL_4;
      }
    }
    if ( v27 )
      CMergedRectBase<4>::SwapExisting(a1, 0, v27);
  }
LABEL_4:
  v8 = 0;
  v9 = (_BYTE *)(a1 + 64);
  v10 = (float *)(a1 + 12);
  do
  {
    if ( *v9 )
    {
      v11 = *(v10 - 1);
      if ( v11 > *(v10 - 3) && *v10 > *(v10 - 2) )
      {
        v12 = a2[2];
        if ( v12 > *a2 )
        {
          v13 = a2[3];
          if ( v13 > a2[1] && v11 > *a2 && v12 > *(v10 - 3) && *v10 > a2[1] && v13 > *(v10 - 2) )
          {
            v14 = v8;
            goto LABEL_20;
          }
        }
      }
      if ( *(_DWORD *)(a1 + 72) == 4 )
      {
        v35 = *(_OWORD *)(v10 - 3);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v35, a2);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v35);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a1 + 16LL * v15);
        v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2);
        v18 = v17 - v16;
        if ( v5 > v18 )
        {
          v5 = v18;
          v6 = v8;
        }
      }
    }
    else
    {
      v7 = v8;
    }
    ++v8;
    ++v9;
    v10 += 4;
  }
  while ( v8 < 4 );
  if ( v7 != -1 )
  {
    LOBYTE(v2) = 2 * v7;
    *(_OWORD *)(a1 + 16LL * v7) = *(_OWORD *)a2;
    *(_BYTE *)(v7 + a1 + 64) = 1;
    ++*(_DWORD *)(a1 + 68);
    ++*(_DWORD *)(a1 + 72);
    return (char)v2;
  }
  v14 = v6;
LABEL_20:
  LOBYTE(v2) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(a1 + 16 * v14), a2);
  ++*(_DWORD *)(a1 + 68);
  return (char)v2;
}
