/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C010B444 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C024A74C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C024AD60 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C024F70C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C024FEE0 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02500A0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0250618 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02509A4 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0250D74 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     GreClientRgnUpdatedStable @ 0x1C0034634 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C00346AC (GreClientRgnUpdated.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C007A474 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C009EBF0 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FDC0C (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00FE1C0 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FE3AC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00FE72C (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010505C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010B4C8 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251858 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0251A34 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C0253994 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0254F44 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  _QWORD **v4; // rdi
  struct SPRITE *v5; // rbx
  struct _RECTL *v6; // rsi
  LONG x; // edx
  LONG y; // r8d
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  LONG v13; // ecx
  struct ERECTL *v14; // rax
  struct REGION *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // edx
  _QWORD *v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rbx
  int v26; // ecx
  int v27; // r8d
  struct _SURFOBJ *v28; // r11
  int v29; // r8d
  int v30; // r10d
  int v31; // edi
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // r9d
  bool v38; // cc
  unsigned int v39; // r8d
  struct _SURFOBJ *Surface; // rax
  unsigned int v41; // esi
  struct _RECTL *v42; // r8
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v45; // rax
  struct _RECTL v46; // xmm0
  int v47; // edx
  struct _XLATEOBJ *v48; // r8
  int v49; // ecx
  int v50; // eax
  bool v51; // cl
  __int64 v52; // rax
  unsigned int v53; // ecx
  struct _POINTL v54; // rax
  struct _XLATEOBJ *v55; // rax
  LONG v56; // esi
  LONG v57; // eax
  bool v58; // zf
  __int64 v59; // rax
  unsigned int v60; // r8d
  unsigned int v61; // edx
  struct SPRITE **v62; // rcx
  LONG v63; // ecx
  struct _POINTL *v64; // rdx
  int v65; // eax
  bool v67; // [rsp+60h] [rbp-A0h]
  struct _XLATEOBJ *v68; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v69; // [rsp+70h] [rbp-90h]
  int v70; // [rsp+78h] [rbp-88h]
  int v71; // [rsp+7Ch] [rbp-84h]
  struct _POINTL v72; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v73; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v74; // [rsp+90h] [rbp-70h] BYREF
  int v75; // [rsp+98h] [rbp-68h]
  struct _RECTL *v76; // [rsp+A0h] [rbp-60h] BYREF
  struct SPRITE *v77; // [rsp+A8h] [rbp-58h] BYREF
  int v78; // [rsp+B0h] [rbp-50h]
  struct _POINTL v79; // [rsp+B8h] [rbp-48h] BYREF
  struct _POINTL *v80; // [rsp+C0h] [rbp-40h]
  struct _RECTL *v81; // [rsp+C8h] [rbp-38h]
  _QWORD v82[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL si128; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v84; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v85[4]; // [rsp+100h] [rbp+0h] BYREF
  char v86[52]; // [rsp+104h] [rbp+4h] BYREF
  __int64 v87; // [rsp+138h] [rbp+38h]
  __int64 v88; // [rsp+150h] [rbp+50h]
  int v89; // [rsp+158h] [rbp+58h]
  int v90; // [rsp+180h] [rbp+80h]
  __int64 v91; // [rsp+190h] [rbp+90h]

  v4 = (_QWORD **)*((_QWORD *)a1 + 2);
  v5 = a1;
  v6 = (struct _RECTL *)*((_QWORD *)a1 + 14);
  LODWORD(v68) = a3;
  v73 = (struct _POINTL)v4;
  v81 = v6;
  v75 = a4;
  v80 = a2;
  v77 = a1;
  v71 = 1;
  if ( a2 )
  {
    *((struct _POINTL *)a1 + 14) = *a2;
    x = a2->x;
    y = a2->y;
    si128.right = x + *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    v10 = *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25);
    si128.left = x;
    si128.bottom = y + v10;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)v5 & 0x11) != 0 || !bIntersect((const struct _RECTL *)(v4 + 5), &si128, &si128) )
  {
    v11 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v11 = 32;
  }
  v12 = *(_DWORD *)v5;
  v13 = *(_DWORD *)v5 & 0x20;
  v70 = *(_DWORD *)v5;
  v72.x = v13;
  if ( v11 == v13 )
  {
    if ( si128.left == *((_DWORD *)v5 + 20)
      && si128.top == *((_DWORD *)v5 + 21)
      && si128.right == *((_DWORD *)v5 + 22)
      && si128.bottom == *((_DWORD *)v5 + 23) )
    {
      if ( *((_DWORD *)v5 + 1) == 2 && gpto )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v4, (struct _RECTL *)v5 + 5, (struct _RECTL *)v5 + 5);
      goto LABEL_133;
    }
    v12 = v70;
  }
  if ( v13 )
  {
    *(_DWORD *)v5 = v12 & 0xFFFFFFDF;
    --*((_DWORD *)v4 + 14);
  }
  if ( !*((_QWORD *)v5 + 20) )
  {
    if ( !(_DWORD)v68 )
      goto LABEL_53;
LABEL_23:
    v88 = 0LL;
    v14 = (struct SPRITE *)((char *)v5 + 80);
    v89 = 0;
    v91 = 0LL;
    v87 = 0LL;
    v15 = (struct REGION *)*((_QWORD *)v5 + 23);
    v90 = 1;
    if ( v15 )
    {
      XCLIPOBJ::vSetup((XCLIPOBJ *)v85, v15, v14, 0);
      v74 = (struct _CLIPOBJ *)v85;
      if ( ERECTL::bEmpty((ERECTL *)v86) )
        goto LABEL_53;
      v14 = (struct SPRITE *)((char *)v5 + 80);
    }
    else
    {
      v74 = 0LL;
    }
    if ( *((_QWORD *)v5 + 16) )
    {
      if ( *((_DWORD *)v5 + 56) == 3 && !*((_BYTE *)v5 + 231) || *((_DWORD *)v5 + 1) == 1 )
      {
        vSpRedrawArea((struct _SPRITESTATE *)v4, (struct _RECTL *)v14, 1);
      }
      else
      {
        vSpDirectDriverAccess((struct _SPRITESTATE *)v4, 0LL);
        v16 = v4[4];
        v82[0] = 0LL;
        v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
        v18 = v4[4];
        v19 = *((_QWORD *)v5 + 18);
        v20 = *(_QWORD *)(v17 + 128);
        v21 = *(_DWORD *)(*((_QWORD *)v5 + 16) + 72LL);
        v68 = 0LL;
        if ( (*((_DWORD *)v18 + 18) == v21 && (*(_DWORD *)v5 & 0x40) == 0
           || (unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v68,
                              0LL,
                              0,
                              v19,
                              v20,
                              (__int64)ppalDefault,
                              (__int64)ppalDefault,
                              0,
                              0,
                              0,
                              0))
          && SURFREFVIEW::bMap((SURFREFVIEW *)v82, *((struct _SURFOBJ **)v5 + 16)) )
        {
          v76 = (struct _RECTL *)((char *)v5 + 80);
          v79.x = *((_DWORD *)v5 + 20) - (_DWORD)v6;
          v79.y = *((_DWORD *)v5 + 21) - HIDWORD(v81);
          v22 = v4[4];
          v23 = 0LL;
          v69 = v22;
          if ( v22
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v69) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v69) + 112) & 0x200) == 0 )
          {
            v23 = SURFOBJ_TO_SURFACE_NOT_NULL(v69);
            GreLockDisplayDevice(*(_QWORD *)(v23 + 48));
          }
          v24 = (_QWORD *)*((_QWORD *)v5 + 16);
          v25 = 0LL;
          v69 = v24;
          if ( v24
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v69) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v69) + 112) & 0x200) == 0 )
          {
            v25 = SURFOBJ_TO_SURFACE_NOT_NULL(v69);
            GreLockDisplayDevice(*(_QWORD *)(v25 + 48));
          }
          SpBitBlt(
            *(struct _SURFOBJ **)(*(_QWORD *)&v73 + 32LL),
            *((struct _SURFOBJ **)v77 + 16),
            0LL,
            v74,
            v68,
            v76,
            &v79,
            0LL,
            0LL,
            0LL,
            0xCCCCu);
          if ( v25 )
            GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
          if ( v23 )
            GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
          v4 = (_QWORD **)v73;
          v5 = v77;
        }
        vSpDirectDriverAccess((struct _SPRITESTATE *)v4, 1LL);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v68);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v82);
      }
      GreClientRgnUpdated(0);
      GreClientRgnUpdatedStable();
    }
    goto LABEL_53;
  }
  if ( (_DWORD)v68 )
    goto LABEL_23;
  vSpRedrawUncoveredArea(v5, &si128);
LABEL_53:
  v26 = si128.right - si128.left;
  v27 = si128.bottom - si128.top;
  LODWORD(v68) = si128.right - si128.left;
  LODWORD(v69) = si128.bottom - si128.top;
  if ( si128.right == si128.left )
  {
    if ( v75 == 1 && *((_DWORD *)v4 + 14) == v26 && *((_DWORD *)v4 + 270) != v26 )
      vSpUnhook((struct _SPRITESTATE *)v4);
  }
  else
  {
    *(_DWORD *)v5 |= 0x20u;
    ++*((_DWORD *)v4 + 14);
    if ( v75 == 1 && !*((_DWORD *)v4 + 270) )
    {
      vSpHook((struct _SPRITESTATE *)v4);
      v26 = (int)v68;
      v27 = (int)v69;
    }
    v28 = (struct _SURFOBJ *)*((_QWORD *)v5 + 20);
    if ( v28 && v26 <= v28->sizlBitmap.cx && v27 <= v28->sizlBitmap.cy )
    {
      if ( si128.left < *((_DWORD *)v5 + 20)
        || si128.top < *((_DWORD *)v5 + 21)
        || si128.right > *((_DWORD *)v5 + 22)
        || si128.bottom > *((_DWORD *)v5 + 23) )
      {
        v29 = 0;
        LODWORD(v69) = *((_DWORD *)v5 + 52);
        v30 = 0;
        LODWORD(v68) = *((_DWORD *)v5 + 54);
        v31 = (int)v69;
        if ( si128.left >= (int)v69 )
        {
          if ( si128.right > (int)v68 )
            v29 = si128.right - (_DWORD)v68;
        }
        else
        {
          v29 = si128.left - (_DWORD)v69;
        }
        v32 = *((_DWORD *)v5 + 53);
        v33 = *((_DWORD *)v5 + 55);
        LODWORD(v69) = v33;
        if ( si128.top >= v32 )
        {
          if ( si128.bottom > v33 )
            v30 = si128.bottom - v33;
        }
        else
        {
          v30 = si128.top - v32;
        }
        v34 = v29 + (_DWORD)v68;
        *((_DWORD *)v5 + 52) = v31 + v29;
        *((_DWORD *)v5 + 54) = v34;
        v35 = v30 + v32;
        v36 = v30 + (_DWORD)v69;
        *((_DWORD *)v5 + 53) = v35;
        *((_DWORD *)v5 + 55) = v36;
        *((_DWORD *)v5 + 42) = -(v31 + v29);
        *((_DWORD *)v5 + 43) = -v35;
        vSpSmallUnderlayCopy(
          v5,
          (struct _POINTL *)v5 + 21,
          v28,
          (struct _POINTL *)v5 + 21,
          v28,
          v29,
          v30,
          &si128,
          (struct _RECTL *)v5 + 5);
        v4 = (_QWORD **)v73;
      }
    }
    else
    {
      v37 = v27;
      v38 = v27 <= *((_DWORD *)v5 + 45);
      v39 = v26;
      if ( v38 )
        v37 = *((_DWORD *)v5 + 45);
      if ( v26 <= *((_DWORD *)v5 + 44) )
        v39 = *((_DWORD *)v5 + 44);
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v4, 0, v39, v37);
      v76 = (struct _RECTL *)Surface;
      if ( !Surface )
      {
        v41 = 0;
        bSpUpdatePosition(v5, 0LL, 0, 0);
        goto LABEL_134;
      }
      Surface->fjBitmap |= 4u;
      v73.x = -si128.left;
      v73.y = -si128.top;
      if ( (int)v68 > 128 || (int)v69 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v4, &v73, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          v5,
          &v73,
          Surface,
          (struct _POINTL *)v5 + 21,
          *((struct _SURFOBJ **)v5 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)v5 + 5);
      vSpDeleteSurface(*((SURFOBJ **)v5 + 20));
      v42 = v76;
      left = si128.left;
      top = si128.top;
      v45 = v73;
      *((_DWORD *)v5 + 52) = si128.left;
      *((_QWORD *)v5 + 20) = v42;
      *((struct _POINTL *)v5 + 21) = v45;
      *((_DWORD *)v5 + 53) = top;
      *((_DWORD *)v5 + 54) = v42[2].left + left;
      *((_DWORD *)v5 + 55) = top + v42[2].top;
    }
  }
  v46 = (struct _RECTL)*((_OWORD *)v5 + 5);
  v47 = *(_DWORD *)v5;
  v48 = (struct _XLATEOBJ *)*((_QWORD *)v5 + 24);
  v49 = v72.x != 0;
  v50 = (*(_DWORD *)v5 >> 5) & 1;
  v68 = v48;
  v84 = v46;
  *((struct _RECTL *)v5 + 5) = si128;
  if ( v50 != v49 )
  {
    v51 = (v70 & 0x20) == 0 && (v47 & 0x20) != 0;
    v67 = v51;
    if ( v48 )
      goto LABEL_104;
    v52 = *((_QWORD *)v5 + 1);
    v74 = (struct _CLIPOBJ *)v52;
    if ( !v52 )
      goto LABEL_128;
    if ( !v51 )
      goto LABEL_128;
    v53 = 0;
    LODWORD(v69) = 0;
    if ( !*(_DWORD *)(v52 + 20) )
      goto LABEL_128;
    while ( 1 )
    {
      v54 = (struct _POINTL)*((_QWORD *)&v74[1].iUniq + v53);
      v79 = v54;
      if ( *(struct SPRITE **)&v54 != v5 )
      {
        v76 = *(struct _RECTL **)(*(_QWORD *)&v54 + 192LL);
        if ( v76 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v77);
          if ( v77 && RGNOBJ::bCopy((RGNOBJ *)&v77, (struct RGNOBJ *)&v76) )
          {
            LODWORD(v74) = -*(_DWORD *)(*(_QWORD *)&v79 + 112LL);
            HIDWORD(v74) = -*(_DWORD *)(*(_QWORD *)&v79 + 116LL);
            RGNOBJ::bOffset((RGNOBJ *)&v77, (struct _POINTL *)&v74);
            v58 = v78 == 1;
            v55 = (struct _XLATEOBJ *)v77;
            *((_QWORD *)v5 + 24) = v77;
            v68 = v55;
            if ( v58 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v77);
LABEL_103:
            v51 = v67;
LABEL_104:
            if ( v68 )
            {
              if ( v51 )
                v56 = v80->x;
              else
                v56 = -(int)v6;
              v72.x = v56;
              if ( v51 )
                v57 = v80->y;
              else
                v57 = -HIDWORD(v81);
              v72.y = v57;
              if ( !v56 )
              {
                v58 = v57 == 0;
                goto LABEL_126;
              }
              goto LABEL_127;
            }
            goto LABEL_128;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v77);
          if ( v78 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v77);
        }
      }
      v53 = (_DWORD)v69 + 1;
      LODWORD(v69) = v53;
      if ( v53 >= *(_DWORD *)&v74->iDComplexity )
        goto LABEL_103;
    }
  }
  if ( !v48 || ((unsigned __int8)v70 & (unsigned __int8)v47 & 0x20) == 0 )
    goto LABEL_128;
  v59 = *((_QWORD *)v5 + 1);
  if ( v59 )
  {
    v60 = *(_DWORD *)(v59 + 20);
    v61 = 0;
    if ( v60 )
    {
      v62 = (struct SPRITE **)(v59 + 24);
      while ( *v62 == v5 || (*(_DWORD *)*v62 & 0x20) == 0 )
      {
        ++v61;
        ++v62;
        if ( v61 >= v60 )
          goto LABEL_123;
      }
      v76 = v6;
      RGNOBJ::vSet((RGNOBJ *)&v68, (struct _RECTL *)v5 + 6);
      RGNOBJ::bOffset((RGNOBJ *)&v68, (struct _POINTL *)&v76);
    }
  }
LABEL_123:
  if ( v68 )
  {
    v63 = v80->y - HIDWORD(v81);
    v72.x = v80->x - (_DWORD)v6;
    v72.y = v63;
    if ( v72.x )
      goto LABEL_127;
    v58 = v63 == 0;
LABEL_126:
    if ( !v58 )
LABEL_127:
      RGNOBJ::bOffset((RGNOBJ *)&v68, &v72);
  }
LABEL_128:
  *((_DWORD *)v4 + 29) = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(v5);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v4, &si128, &v84);
  if ( !*((_DWORD *)v4 + 29) )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v4);
  vSpRemoveAllSpriteOverlapPresents(*v4, v64);
LABEL_133:
  v41 = v71;
LABEL_134:
  if ( v75 == 1 )
  {
    v65 = *((_DWORD *)v4 + 270);
    if ( *((_DWORD *)v4 + 14) )
    {
      if ( !v65 )
        vSpHook((struct _SPRITESTATE *)v4);
    }
    else if ( v65 )
    {
      vSpUnhook((struct _SPRITESTATE *)v4);
    }
  }
  return v41;
}
