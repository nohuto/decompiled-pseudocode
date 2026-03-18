/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00426D0
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C003F044 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C01628E4 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003E76C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0043E6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043F98 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0043FD4 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0161E34 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C016249C (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0162510 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C01629F8 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C027FF60 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
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
  struct _BLENDFUNCTION *v12; // r14
  struct _RECTL *v13; // r13
  unsigned int v14; // ecx
  unsigned int v15; // edi
  int v16; // r15d
  __int64 v17; // rcx
  _DWORD *v18; // rsi
  __int64 v19; // rcx
  LONG cx; // eax
  LONG cy; // edx
  LONG v22; // eax
  unsigned int updated; // esi
  unsigned int v24; // r12d
  HDC v25; // rdx
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rax
  unsigned int v31; // edx
  int v32; // ecx
  unsigned int v33; // edx
  struct _POINTL *v34; // rdx
  unsigned int v35; // r8d
  unsigned int v36; // eax
  __int64 v37; // rax
  LONG v38; // eax
  struct _POINTL *v39; // rcx
  struct _BLENDFUNCTION v40; // [rsp+50h] [rbp-B0h] BYREF
  HDC v41; // [rsp+58h] [rbp-A8h]
  struct _POINTL *v42; // [rsp+60h] [rbp-A0h]
  struct _POINTL *v43; // [rsp+68h] [rbp-98h]
  struct _SPRITESTATE *v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  struct tagSIZE *v48; // [rsp+90h] [rbp-70h]
  struct _RECTL v49; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v50[192]; // [rsp+B0h] [rbp-50h] BYREF
  HDC v51[2]; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v52; // [rsp+180h] [rbp+80h] BYREF
  __int64 v53; // [rsp+190h] [rbp+90h]
  __int128 v54; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v55; // [rsp+1B0h] [rbp+B0h]

  v40 = 0;
  v12 = a8;
  v13 = a10;
  v41 = a5;
  v42 = a6;
  v48 = a4;
  v43 = a3;
  v51[0] = a2;
  if ( a1 )
  {
    v44 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
    v45 = *(_QWORD *)v44;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v50, (struct PDEVOBJ *)&v45);
    v14 = a9 & 0xEFFFFFFF;
    v46 = a9 & 0x10000000;
    if ( (a9 & 0x10000000) == 0 )
      v14 = a9;
    v15 = v14 & 0xFFDFFFFF;
    v16 = v14 & 0x200000;
    if ( (v14 & 0x200000) == 0 )
      v15 = v14;
    v47 = 0LL;
    v52 = (struct _RECTL)0LL;
    SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v44 + 120));
    v17 = *((_QWORD *)a1 + 16);
    if ( v17 )
    {
      v18 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v17);
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v18) )
      {
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 272));
        if ( (*(_DWORD *)a1 & 0x200) != 0 )
        {
          v38 = v18[14];
          *(_QWORD *)&v49.left = 0LL;
          v49.right = v38;
          v49.bottom = v18[15];
          if ( a10 )
          {
            v52 = *a10;
            ERECTL::operator*=(&v52, &v49);
          }
          else
          {
            v52 = v49;
          }
          v13 = &v52;
        }
        DCOBJ::DCOBJ((DCOBJ *)&v54, v41);
        if ( (_QWORD)v54 && a4 )
        {
          cx = v18[14];
          cy = a4->cy;
          if ( a4->cx < cx )
            cx = a4->cx;
          LODWORD(v47) = cx;
          v22 = v18[15];
          if ( cy < v22 )
            v22 = cy;
          HIDWORD(v47) = v22;
          v48 = (struct tagSIZE *)&v47;
        }
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 68));
        if ( (_QWORD)v54 )
          XDCOBJ::vUnlockFast((XDCOBJ *)&v54);
      }
    }
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v44 + 120));
    updated = 1;
    if ( (v15 & 0x20000000) != 0 )
    {
      v31 = v46;
      v15 &= ~0x20000000u;
      *((_DWORD *)a1 + 56) = v15 | (v46 != 0 ? 0x10000000 : 0);
      if ( (v15 & 2) != 0 && a8 )
        *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
      v24 = a7;
      *((_DWORD *)a1 + 58) = a7;
      if ( v31 )
      {
        vSpCreateExMirror(**((HDEV **)a1 + 2));
        *(_DWORD *)a1 |= 0x100u;
      }
      v25 = v41;
      if ( !v41 )
      {
        v32 = *((_DWORD *)a1 + 56);
        v33 = *((_DWORD *)a1 + 51);
        v40 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
        if ( v32 == 3 && !a8->AlphaFormat )
        {
          v32 = 2;
          v40 = *a8;
          v12 = &v40;
          v40.AlphaFormat = 1;
          v33 = a7;
        }
        *((_DWORD *)a1 + 1) = v32;
        *((_DWORD *)a1 + 51) = v33;
        *((struct _BLENDFUNCTION *)a1 + 50) = *v12;
        goto LABEL_40;
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
        v12 = &v40;
        v24 = *((_DWORD *)a1 + 58);
        v40 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
      }
      else
      {
        v24 = a7;
      }
      v25 = v41;
    }
    if ( (*(_DWORD *)(v45 + 40) & 0x400) != 0 )
    {
LABEL_40:
      SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v50);
      return updated;
    }
    if ( v51[0] || v48 || v25 || v42 || v24 )
    {
      updated = bSpUpdateShape(a1, v15, v51[0], v25, v24, v12, v42, v48, v13);
      if ( updated && !v16 )
      {
        v39 = v43;
        if ( !v43 )
          v39 = (struct _POINTL *)((char *)a1 + 112);
        v35 = 0;
        v34 = v39;
        goto LABEL_57;
      }
    }
    else
    {
      if ( v15 - 2 <= 1 && v12 && !v43 )
      {
        v36 = bSpUpdateAlpha(a1, v12, 1);
        goto LABEL_58;
      }
      if ( (v15 & 0x7FFFFFFF) == 0 && !v12 )
      {
        v34 = v43;
        v35 = v15 & 0x80000000;
LABEL_57:
        v36 = bSpUpdatePosition(a1, v34, v35, 0);
LABEL_58:
        updated = v36;
      }
    }
    if ( v13 )
    {
      v26 = *((_DWORD *)a1 + 28);
      LODWORD(v51[0]) = v26 + v13->left;
      v27 = v26 + v13->right;
      v28 = *((_DWORD *)a1 + 29);
      LODWORD(v51[1]) = v27;
      HIDWORD(v51[0]) = v28 + v13->top;
      HIDWORD(v51[1]) = v28 + v13->bottom;
      ERECTL::operator*=(v51, (char *)a1 + 80);
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v51) )
      {
        v54 = *(_OWORD *)v51;
        vSpAddAndCompactDirtyRect(a1, &v54);
        v29 = 0LL;
        v52 = (struct _RECTL)0LL;
        v53 = 0LL;
        if ( v16 )
        {
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v52, v44, (struct _RECTL *)v51);
          v29 = *(_QWORD *)&v52.left;
        }
        if ( !v29 && v16 || (vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), (struct _RECTL *)v51, 0), v16) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
      }
    }
    else
    {
      v37 = 0LL;
      v54 = 0uLL;
      v55 = 0LL;
      if ( v16 )
      {
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v54, v44, (struct _RECTL *)a1 + 5);
        v37 = v54;
      }
      if ( !v37 && v16 || (vSpRedrawSprite(a1), v16) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v54);
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v54);
      if ( (*(_DWORD *)(v45 + 40) & 0x400) == 0 )
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v45,
          (struct _SURFOBJ *)((*(_QWORD *)(v45 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v45 + 2552) != 0LL)),
          0LL,
          0);
    }
    goto LABEL_40;
  }
  return 0LL;
}
