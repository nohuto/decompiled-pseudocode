/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C024F70C
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C024AF80 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C024FC50 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F00 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C024E4A8 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C024F110 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02510A4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0251274 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0252D38 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0256250 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpUpdateSprite(
        struct SPRITE *a1,
        HDC a2,
        struct _POINTL *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct _POINTL *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct _RECTL *a10)
{
  struct _BLENDFUNCTION *v11; // r14
  struct _RECTL *v12; // r13
  unsigned int v14; // ecx
  unsigned int v15; // edi
  int v16; // r15d
  __int64 v17; // rcx
  _DWORD *v18; // rsi
  __int64 v19; // rcx
  LONG v20; // eax
  __int64 v21; // r12
  LONG cx; // eax
  LONG cy; // edx
  LONG v24; // eax
  unsigned int updated; // esi
  unsigned int v26; // edx
  unsigned int v27; // r12d
  HDC v28; // rdx
  int v29; // ecx
  unsigned int v30; // r8d
  int v31; // edx
  unsigned int *p_BlendOp; // rax
  unsigned int v33; // eax
  struct _POINTL *v34; // rdx
  unsigned int v35; // r8d
  struct _POINTL *v36; // rcx
  int v37; // edx
  LONG v38; // ecx
  int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // [rsp+50h] [rbp-B0h] BYREF
  struct tagSIZE *v43; // [rsp+58h] [rbp-A8h]
  struct _POINTL *v44; // [rsp+60h] [rbp-A0h]
  struct _POINTL *v45; // [rsp+68h] [rbp-98h]
  struct _SPRITESTATE *v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL v48; // [rsp+80h] [rbp-80h] BYREF
  HDC v49; // [rsp+90h] [rbp-70h]
  struct _SPRITESTATE *v50[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v51; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v52; // [rsp+170h] [rbp+70h] BYREF
  __int64 v53; // [rsp+180h] [rbp+80h]
  struct _RECTL v54; // [rsp+190h] [rbp+90h] BYREF
  __int64 v55; // [rsp+1A0h] [rbp+A0h]

  v11 = a8;
  v12 = a10;
  v49 = a5;
  v44 = a6;
  v43 = a4;
  v45 = a3;
  *(_QWORD *)&v51.left = a2;
  if ( !a1 )
    return 0LL;
  v46 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v47 = *(_QWORD *)v46;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v50, (struct PDEVOBJ *)&v47);
  v14 = a9 & 0xEFFFFFFF;
  v42 = a9 & 0x10000000;
  if ( (a9 & 0x10000000) == 0 )
    v14 = a9;
  v15 = v14 & 0xFFDFFFFF;
  v16 = v14 & 0x200000;
  if ( (v14 & 0x200000) == 0 )
    v15 = v14;
  SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v46 + 120));
  v17 = *((_QWORD *)a1 + 16);
  if ( v17 )
  {
    v18 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v17);
    if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v18) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 272));
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        v20 = v18[14];
        *(_QWORD *)&v48.left = 0LL;
        v48.right = v20;
        v48.bottom = v18[15];
        if ( a10 )
        {
          v54 = *a10;
          ERECTL::operator*=(&v54.left, &v48.left);
        }
        else
        {
          v54 = v48;
        }
        v12 = &v54;
      }
      MDCOBJ::MDCOBJ((MDCOBJ *)&v52, a5);
      v21 = *(_QWORD *)&v52.left;
      if ( *(_QWORD *)&v52.left && v43 )
      {
        cx = v18[14];
        cy = v43->cy;
        if ( v43->cx < cx )
          cx = v43->cx;
        v48.left = cx;
        v24 = v18[15];
        if ( cy < v24 )
          v24 = cy;
        v48.top = v24;
        v43 = (struct tagSIZE *)&v48;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 68));
      if ( v21 )
        XDCOBJ::vUnlockFast((XDCOBJ *)&v52);
    }
  }
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v46 + 120));
  updated = 1;
  if ( (v15 & 0x20000000) != 0 )
  {
    v26 = v42;
    v15 &= ~0x20000000u;
    *((_DWORD *)a1 + 56) = v15 | (v42 != 0 ? 0x10000000 : 0);
    if ( (v15 & 2) != 0 && a8 )
      *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
    v27 = a7;
    *((_DWORD *)a1 + 58) = a7;
    if ( v26 )
    {
      vSpCreateExMirror(**((HDEV **)a1 + 2));
      *(_DWORD *)a1 |= 0x100u;
    }
    v28 = v49;
    if ( !v49 )
    {
      v29 = *((_DWORD *)a1 + 56);
      v30 = *((_DWORD *)a1 + 51);
      v42 = *((_DWORD *)a1 + 50);
      if ( v29 == 3 && a8->AlphaFormat == (_BYTE)v49 )
      {
        v31 = 1;
        v42 = (unsigned int)*a8;
        v29 = 2;
        HIBYTE(v42) = 1;
        v30 = a7;
      }
      else
      {
        v31 = 0;
      }
      *((_DWORD *)a1 + 1) = v29;
      p_BlendOp = &v42;
      *((_DWORD *)a1 + 51) = v30;
      if ( !v31 )
        p_BlendOp = (unsigned int *)&a8->BlendOp;
      *((_DWORD *)a1 + 50) = *p_BlendOp;
      goto LABEL_83;
    }
  }
  else
  {
    if ( v15 == 0x40000000 )
    {
      v15 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
      if ( (*((_DWORD *)a1 + 56) & 0x10000000) == 0 )
        v15 = *((_DWORD *)a1 + 56);
      if ( (*(_DWORD *)a1 & 0x40) != 0 && !v15 )
        v15 = *((_DWORD *)a1 + 1);
      v11 = (struct _BLENDFUNCTION *)&v42;
      v27 = *((_DWORD *)a1 + 58);
      v42 = *((_DWORD *)a1 + 57);
    }
    else
    {
      v27 = a7;
    }
    v28 = v49;
  }
  if ( (*(_DWORD *)(v47 + 40) & 0x400) == 0 )
  {
    if ( *(_QWORD *)&v51.left || v43 || v28 || v44 || v27 )
    {
      updated = bSpUpdateShape(a1, v15, *(HDC *)&v51.left, v28, v27, v11, v44, v43, v12);
      if ( updated && !v16 )
      {
        v36 = v45;
        if ( !v45 )
          v36 = (struct _POINTL *)((char *)a1 + 112);
        v35 = 0;
        v34 = v36;
        goto LABEL_64;
      }
    }
    else
    {
      if ( v15 - 2 <= 1 && v11 && !v45 )
      {
        v33 = bSpUpdateAlpha(a1, v11, 1);
LABEL_65:
        updated = v33;
        goto LABEL_66;
      }
      if ( (v15 & 0x7FFFFFFF) == 0 && !v11 )
      {
        v34 = v45;
        v35 = v15 & 0x80000000;
LABEL_64:
        v33 = bSpUpdatePosition(a1, v34, v35, 0);
        goto LABEL_65;
      }
    }
LABEL_66:
    if ( v12 )
    {
      v37 = *((_DWORD *)a1 + 28);
      v51.left = v37 + v12->left;
      v38 = v37 + v12->right;
      v39 = *((_DWORD *)a1 + 29);
      v51.right = v38;
      v51.top = v39 + v12->top;
      v51.bottom = v39 + v12->bottom;
      ERECTL::operator*=(&v51.left, (int *)a1 + 20);
      if ( !ERECTL::bEmpty((ERECTL *)&v51) )
      {
        v52 = v51;
        vSpAddAndCompactDirtyRect(a1, &v52);
        v40 = 0LL;
        v54 = (struct _RECTL)0LL;
        v55 = 0LL;
        if ( v16 )
        {
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v54, v46, &v51);
          v40 = *(_QWORD *)&v54.left;
        }
        if ( !v40 && v16 || (vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v51, 0), v16) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v54);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v54);
      }
    }
    else
    {
      v41 = 0LL;
      v52 = (struct _RECTL)0LL;
      v53 = 0LL;
      if ( v16 )
      {
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v52, v46, (struct _RECTL *)a1 + 5);
        v41 = *(_QWORD *)&v52.left;
      }
      if ( !v41 && v16 || (vSpRedrawSprite(a1), v16) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
      if ( (*(_DWORD *)(v47 + 40) & 0x400) == 0 )
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v47,
          (struct _SURFOBJ *)((*(_QWORD *)(v47 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v47 + 2544) != 0LL)),
          0LL,
          0);
    }
  }
LABEL_83:
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v50);
  return updated;
}
