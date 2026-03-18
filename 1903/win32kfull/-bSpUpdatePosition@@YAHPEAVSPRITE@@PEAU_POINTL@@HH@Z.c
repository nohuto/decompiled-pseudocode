/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4
 * Callers:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003D4B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C003E40C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00426D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00C6000 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0138774 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027B950 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027BF68 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C027E920 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027EAE8 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027EF08 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C027F2EC (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C003CC10 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003D040 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C003D63C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C003D9B8 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C003E80C (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003EA70 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0040050 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C005ED8C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     GreClientRgnUpdatedStable @ 0x1C00C32BC (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C00C6368 (GreClientRgnUpdated.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C01387F8 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C027F86C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C027F9C4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C02810D0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0281458 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _POINTL v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // r15
  LONG x; // edx
  LONG y; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  LONG v17; // r13d
  struct REGION *v18; // rdx
  struct _CLIPOBJ *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _XLATEOBJ *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // edx
  struct _SURFOBJ *v27; // rdx
  int v28; // r12d
  int v29; // esi
  struct _SURFOBJ *v30; // r11
  int v31; // ebx
  int v32; // r10d
  int v33; // r8d
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  unsigned int v38; // r9d
  unsigned int v39; // r8d
  struct _SURFOBJ *Surface; // rax
  struct _SURFOBJ *v41; // rbx
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v44; // rax
  struct _RECTL v45; // xmm0
  int v46; // edx
  int v47; // ecx
  struct _POINTL v48; // r8
  int v49; // eax
  bool v50; // bl
  __int64 v51; // r12
  __int64 v52; // r13
  __int64 v53; // rsi
  struct _POINTL v54; // rax
  LONG v55; // edi
  LONG v56; // r13d
  bool v57; // zf
  __int64 v58; // rax
  unsigned int v59; // r8d
  unsigned int v60; // edx
  struct SPRITE **v61; // rcx
  LONG v62; // ecx
  int v63; // eax
  int v64; // [rsp+60h] [rbp-A0h]
  struct _POINTL v65; // [rsp+68h] [rbp-98h] BYREF
  struct _XLATEOBJ *v66; // [rsp+70h] [rbp-90h] BYREF
  int v67; // [rsp+78h] [rbp-88h]
  struct _POINTL v68; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v69; // [rsp+88h] [rbp-78h] BYREF
  int v70; // [rsp+90h] [rbp-70h]
  struct _POINTL v71; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v72; // [rsp+A0h] [rbp-60h]
  int v73; // [rsp+A8h] [rbp-58h]
  int v74; // [rsp+ACh] [rbp-54h]
  struct _POINTL *v75; // [rsp+B0h] [rbp-50h]
  _QWORD v76[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct _RECTL si128; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL v78; // [rsp+D8h] [rbp-28h] BYREF
  struct _CLIPOBJ v79; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+128h] [rbp+28h]
  __int64 v81; // [rsp+140h] [rbp+40h]
  int v82; // [rsp+148h] [rbp+48h]
  int v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+180h] [rbp+80h]

  v65 = 0LL;
  v4 = (struct _POINTL)*((_QWORD *)a1 + 14);
  v5 = 1;
  v6 = *((_QWORD *)a1 + 2);
  v67 = a4;
  v75 = a2;
  v74 = 1;
  *(_QWORD *)&v78.left = 0LL;
  *(_QWORD *)&v78.right = 0LL;
  v72 = v4;
  if ( a2 )
  {
    *((struct _POINTL *)a1 + 14) = *a2;
    x = a2->x;
    y = a2->y;
    si128.right = x + *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    v12 = *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25);
    si128.left = x;
    si128.bottom = y + v12;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)a1 & 0x11) != 0 || !bIntersect((const struct _RECTL *)(v6 + 40), &si128, &si128) )
  {
    v13 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v13 = 32;
  }
  v14 = *(_DWORD *)a1;
  v15 = *(_DWORD *)a1 & 0x20;
  v64 = *(_DWORD *)a1;
  v73 = v15;
  if ( v13 == v15 )
  {
    if ( si128.left == *((_DWORD *)a1 + 20)
      && si128.top == *((_DWORD *)a1 + 21)
      && si128.right == *((_DWORD *)a1 + 22)
      && si128.bottom == *((_DWORD *)a1 + 23) )
    {
      if ( gpto && *((_DWORD *)a1 + 1) == 2 )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, (struct _RECTL *)a1 + 5, (struct _RECTL *)a1 + 5);
      goto LABEL_11;
    }
    v14 = v64;
  }
  if ( v15 )
  {
    *(_DWORD *)a1 = v14 & 0xFFFFFFDF;
    --*(_DWORD *)(v6 + 56);
  }
  v17 = v72.y;
  if ( !*((_QWORD *)a1 + 20) )
  {
    if ( !a3 )
      goto LABEL_44;
LABEL_25:
    v81 = 0LL;
    v82 = 0;
    v84 = 0LL;
    v80 = 0LL;
    v18 = (struct REGION *)*((_QWORD *)a1 + 23);
    v83 = 1;
    if ( v18 )
    {
      XCLIPOBJ::vSetup((XCLIPOBJ *)&v79, v18, (struct SPRITE *)((char *)a1 + 80), 0);
      v19 = &v79;
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v79.rclBounds) )
        goto LABEL_44;
    }
    else
    {
      v19 = 0LL;
    }
    if ( !*((_QWORD *)a1 + 16) )
      goto LABEL_44;
    if ( *((_DWORD *)a1 + 56) == 3 && !*((_BYTE *)a1 + 231) || *((_DWORD *)a1 + 1) == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)v6, (struct _RECTL *)a1 + 5, 1);
      goto LABEL_43;
    }
    vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 0);
    v20 = *(_QWORD *)(v6 + 32);
    v76[0] = 0LL;
    v21 = SURFOBJ_TO_SURFACE_NOT_NULL(v20);
    v22 = 0LL;
    v23 = *(_QWORD *)(v6 + 32);
    v24 = *((_QWORD *)a1 + 18);
    v25 = *(_QWORD *)(v21 + 128);
    v26 = *(_DWORD *)(*((_QWORD *)a1 + 16) + 72LL);
    v66 = 0LL;
    if ( *(_DWORD *)(v23 + 72) != v26 || (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v66, 0LL, 0LL, v24, v25, ppalDefault, ppalDefault, 0, 0, 0, 0) )
      {
LABEL_42:
        vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 1);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v76);
LABEL_43:
        GreClientRgnUpdated(0LL);
        GreClientRgnUpdatedStable();
        goto LABEL_44;
      }
      v22 = v66;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v76, *((struct _SURFOBJ **)a1 + 16)) )
    {
      v27 = *(struct _SURFOBJ **)(v6 + 32);
      v68.x = *((_DWORD *)a1 + 20) - v4.x;
      v68.y = *((_DWORD *)a1 + 21) - v17;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v71, v27);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v69, *((struct _SURFOBJ **)a1 + 16));
      SpBitBlt(
        *(struct _SURFOBJ **)(v6 + 32),
        *((struct _SURFOBJ **)a1 + 16),
        0LL,
        v19,
        v22,
        (struct _RECTL *)a1 + 5,
        &v68,
        0LL,
        0LL,
        0LL,
        0xCCCCu);
      if ( v69 )
        GreUnlockDisplayDevice(*(_QWORD *)(*(_QWORD *)&v69 + 48LL));
      if ( v71 )
        GreUnlockDisplayDevice(*(_QWORD *)(*(_QWORD *)&v71 + 48LL));
    }
    goto LABEL_42;
  }
  if ( a3 )
    goto LABEL_25;
  vSpRedrawUncoveredArea(a1, &si128);
LABEL_44:
  v28 = si128.bottom - si128.top;
  v29 = si128.right - si128.left;
  if ( si128.right == si128.left )
  {
    if ( v67 == 1 && *(_DWORD *)(v6 + 56) == v29 && *(_DWORD *)(v6 + 1080) != v29 )
      vSpUnhook((struct _SPRITESTATE *)v6);
  }
  else
  {
    *(_DWORD *)a1 |= 0x20u;
    ++*(_DWORD *)(v6 + 56);
    if ( v67 == 1 && !*(_DWORD *)(v6 + 1080) )
      vSpHook((struct _SPRITESTATE *)v6);
    v30 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
    if ( v30 && v29 <= v30->sizlBitmap.cx && v28 <= v30->sizlBitmap.cy )
    {
      if ( si128.left < *((_DWORD *)a1 + 20)
        || si128.top < *((_DWORD *)a1 + 21)
        || si128.right > *((_DWORD *)a1 + 22)
        || si128.bottom > *((_DWORD *)a1 + 23) )
      {
        v31 = *((_DWORD *)a1 + 52);
        v32 = 0;
        v33 = 0;
        if ( si128.left >= v31 )
        {
          v34 = *((_DWORD *)a1 + 54);
          if ( si128.right > v34 )
            v32 = si128.right - v34;
        }
        else
        {
          v32 = si128.left - v31;
        }
        v35 = *((_DWORD *)a1 + 53);
        v36 = *((_DWORD *)a1 + 55);
        if ( si128.top >= v35 )
        {
          if ( si128.bottom > v36 )
            v33 = si128.bottom - v36;
        }
        else
        {
          v33 = si128.top - v35;
        }
        *((_DWORD *)a1 + 54) += v32;
        v37 = v33 + v35;
        *((_DWORD *)a1 + 52) = v31 + v32;
        *((_DWORD *)a1 + 53) = v37;
        *((_DWORD *)a1 + 55) = v33 + v36;
        *((_DWORD *)a1 + 42) = -(v31 + v32);
        *((_DWORD *)a1 + 43) = -v37;
        vSpSmallUnderlayCopy(
          a1,
          (struct _POINTL *)a1 + 21,
          v30,
          (struct _POINTL *)a1 + 21,
          v30,
          v32,
          v33,
          &si128,
          (struct _RECTL *)a1 + 5);
      }
    }
    else
    {
      v38 = v28;
      v39 = v29;
      if ( v28 <= *((_DWORD *)a1 + 45) )
        v38 = *((_DWORD *)a1 + 45);
      if ( v29 <= *((_DWORD *)a1 + 44) )
        v39 = *((_DWORD *)a1 + 44);
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v6, 0, v39, v38);
      v41 = Surface;
      if ( !Surface )
      {
        v5 = 0;
        bSpUpdatePosition(a1, 0LL, 0, 0);
        goto LABEL_11;
      }
      Surface->fjBitmap |= 4u;
      v65.x = -si128.left;
      v65.y = -si128.top;
      if ( v29 > 128 || v28 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v6, &v65, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          a1,
          &v65,
          Surface,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)a1 + 5);
      vSpDeleteSurface(*((SURFOBJ **)a1 + 20));
      left = si128.left;
      top = si128.top;
      v44 = v65;
      *((_DWORD *)a1 + 52) = si128.left;
      *((struct _POINTL *)a1 + 21) = v44;
      *((_QWORD *)a1 + 20) = v41;
      *((_DWORD *)a1 + 53) = top;
      *((_DWORD *)a1 + 54) = v41->sizlBitmap.cx + left;
      *((_DWORD *)a1 + 55) = top + v41->sizlBitmap.cy;
    }
  }
  v66 = 0LL;
  v45 = (struct _RECTL)*((_OWORD *)a1 + 5);
  v46 = *(_DWORD *)a1;
  v47 = v73 != 0;
  v48 = (struct _POINTL)*((_QWORD *)a1 + 24);
  v49 = (*(_DWORD *)a1 >> 5) & 1;
  v65 = v48;
  v78 = v45;
  *((struct _RECTL *)a1 + 5) = si128;
  if ( v49 != v47 )
  {
    v50 = (v64 & 0x20) == 0 && (v46 & 0x20) != 0;
    if ( v48 )
      goto LABEL_95;
    v51 = *((_QWORD *)a1 + 1);
    if ( !v51 )
      goto LABEL_118;
    if ( !v50 )
      goto LABEL_118;
    v52 = 0LL;
    if ( !*(_DWORD *)(v51 + 20) )
      goto LABEL_118;
    while ( 1 )
    {
      v53 = *(_QWORD *)(v51 + 8 * v52 + 24);
      if ( (struct SPRITE *)v53 != a1 )
      {
        v71 = *(struct _POINTL *)(v53 + 192);
        if ( v71 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v69);
          if ( *(_QWORD *)&v69 && RGNOBJ::bCopy((RGNOBJ *)&v69, (struct RGNOBJ *)&v71) )
          {
            v68.x = -*(_DWORD *)(v53 + 112);
            v68.y = -*(_DWORD *)(v53 + 116);
            RGNOBJ::bOffset((RGNOBJ *)&v69, &v68);
            v57 = v70 == 1;
            v54 = v69;
            *((struct _POINTL *)a1 + 24) = v69;
            v65 = v54;
            if ( v57 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v69);
LABEL_94:
            v17 = v72.y;
LABEL_95:
            if ( v65 )
            {
              if ( v50 )
                v55 = v75->x;
              else
                v55 = -v4.x;
              LODWORD(v66) = v55;
              if ( v50 )
                v56 = v75->y;
              else
                v56 = -v17;
              HIDWORD(v66) = v56;
              if ( !v55 )
              {
                v57 = v56 == 0;
                goto LABEL_116;
              }
              goto LABEL_117;
            }
            goto LABEL_118;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v69);
          if ( v70 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v69);
        }
      }
      v52 = (unsigned int)(v52 + 1);
      if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 20) )
        goto LABEL_94;
    }
  }
  if ( !*(_QWORD *)&v48 || ((unsigned __int8)v64 & (unsigned __int8)v46 & 0x20) == 0 )
    goto LABEL_118;
  v58 = *((_QWORD *)a1 + 1);
  if ( v58 )
  {
    v59 = *(_DWORD *)(v58 + 20);
    v60 = 0;
    if ( v59 )
    {
      v61 = (struct SPRITE **)(v58 + 24);
      while ( *v61 == a1 || (*(_DWORD *)*v61 & 0x20) == 0 )
      {
        ++v60;
        ++v61;
        if ( v60 >= v59 )
          goto LABEL_113;
      }
      v71 = v4;
      RGNOBJ::vSet((RGNOBJ *)&v65, (struct _RECTL *)a1 + 6);
      RGNOBJ::bOffset((RGNOBJ *)&v65, &v71);
    }
  }
LABEL_113:
  if ( v65 )
  {
    v62 = v75->y - v17;
    LODWORD(v66) = v75->x - v4.x;
    HIDWORD(v66) = v62;
    if ( (_DWORD)v66 )
      goto LABEL_117;
    v57 = v62 == 0;
LABEL_116:
    if ( !v57 )
LABEL_117:
      RGNOBJ::bOffset((RGNOBJ *)&v65, (struct _POINTL *)&v66);
  }
LABEL_118:
  *(_DWORD *)(v6 + 116) = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(a1);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, &si128, &v78);
  if ( !*(_DWORD *)(v6 + 116) )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v6);
  vSpRemoveAllSpriteOverlapPresents(*(HDEV *)v6);
  v5 = v74;
LABEL_11:
  if ( v67 == 1 )
  {
    v63 = *(_DWORD *)(v6 + 1080);
    if ( *(_DWORD *)(v6 + 56) )
    {
      if ( !v63 )
        vSpHook((struct _SPRITESTATE *)v6);
    }
    else if ( v63 )
    {
      vSpUnhook((struct _SPRITESTATE *)v6);
    }
  }
  return v5;
}
