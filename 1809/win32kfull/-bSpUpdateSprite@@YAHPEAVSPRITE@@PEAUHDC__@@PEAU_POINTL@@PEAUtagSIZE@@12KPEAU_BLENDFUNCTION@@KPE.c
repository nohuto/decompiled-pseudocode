/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00100D0
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C0096670 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C015AD40 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00106E8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0096B08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C015A1E4 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C015A8D0 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C015A944 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C015AE9C (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0266E08 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
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
  struct _RECTL *v13; // r13
  struct _SPRITESTATE *v15; // rsi
  unsigned int v16; // ecx
  unsigned int v17; // edi
  int v18; // r15d
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  __int64 v21; // rcx
  LONG v22; // eax
  LONG cx; // eax
  LONG cy; // ecx
  LONG v25; // eax
  unsigned int updated; // esi
  unsigned int v27; // edx
  unsigned int v28; // r12d
  HDC v29; // rdx
  int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // eax
  struct _POINTL *v33; // rdx
  unsigned int v34; // r8d
  struct _POINTL *v35; // rcx
  int v36; // edx
  int v37; // ecx
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // [rsp+50h] [rbp-B0h] BYREF
  HDC v42; // [rsp+58h] [rbp-A8h]
  struct _POINTL *v43; // [rsp+60h] [rbp-A0h]
  struct _POINTL *v44; // [rsp+68h] [rbp-98h]
  struct _SPRITESTATE *v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  struct tagSIZE *v47; // [rsp+80h] [rbp-80h]
  _QWORD v48[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v49[40]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v50[192]; // [rsp+C0h] [rbp-40h] BYREF
  HDC v51[2]; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v52; // [rsp+190h] [rbp+90h] BYREF
  __int64 v53; // [rsp+1A0h] [rbp+A0h]
  struct _RECTL v54; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v55; // [rsp+1C0h] [rbp+C0h]

  v11 = a8;
  v13 = a10;
  v42 = a5;
  v43 = a6;
  v47 = a4;
  v44 = a3;
  v51[0] = a2;
  if ( !a1 )
    return 0LL;
  v15 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v45 = v15;
  v46 = *(_QWORD *)v15;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v50, (struct PDEVOBJ *)&v46);
  v16 = a9 & 0xEFFFFFFF;
  v41 = a9 & 0x10000000;
  if ( (a9 & 0x10000000) == 0 )
    v16 = a9;
  v17 = v16 & 0xFFDFFFFF;
  v18 = v16 & 0x200000;
  if ( (v16 & 0x200000) == 0 )
    v17 = v16;
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v15 + 15));
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_QWORD *)v15 + 15));
  v19 = *((_QWORD *)a1 + 16);
  if ( v19 )
  {
    v20 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v19);
    if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v20) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v21 + 272));
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        v22 = v20[14];
        *(_QWORD *)&v52.left = 0LL;
        v52.right = v22;
        v52.bottom = v20[15];
        if ( a10 )
        {
          v54 = *a10;
          ERECTL::operator*=(&v54, &v52);
        }
        else
        {
          v54 = v52;
        }
        v13 = &v54;
      }
      v48[0] = 0LL;
      v48[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v49);
      XDCOBJ::vLock((XDCOBJ *)v48, v42);
      if ( v48[0] && a4 )
      {
        cx = v20[14];
        if ( a4->cx < cx )
          cx = a4->cx;
        cy = a4->cy;
        v52.left = cx;
        v25 = v20[15];
        if ( cy < v25 )
          v25 = cy;
        v52.top = v25;
        v47 = (struct tagSIZE *)&v52;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v20 + 68));
      MDCOBJ::~MDCOBJ((MDCOBJ *)v48);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v49);
    }
    v15 = v45;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", *((_QWORD *)v15 + 15));
  GreReleaseSemaphoreInternal(*((_QWORD *)v15 + 15));
  updated = 1;
  if ( (v17 & 0x20000000) != 0 )
  {
    v27 = v41;
    v17 &= ~0x20000000u;
    *((_DWORD *)a1 + 56) = v17 | (v41 != 0 ? 0x10000000 : 0);
    if ( (v17 & 2) != 0 && a8 )
      *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
    v28 = a7;
    *((_DWORD *)a1 + 58) = a7;
    if ( v27 )
    {
      vSpCreateExMirror(**((HDEV **)a1 + 2));
      *(_DWORD *)a1 |= 0x100u;
    }
    v29 = v42;
    if ( !v42 )
    {
      v30 = *((_DWORD *)a1 + 56);
      v31 = *((_DWORD *)a1 + 51);
      v41 = *((_DWORD *)a1 + 50);
      if ( v30 == 3 && !a8->AlphaFormat )
      {
        v30 = 2;
        v41 = (unsigned int)*a8;
        v11 = (struct _BLENDFUNCTION *)&v41;
        HIBYTE(v41) = 1;
        v31 = a7;
      }
      *((_DWORD *)a1 + 1) = v30;
      *((_DWORD *)a1 + 51) = v31;
      *((struct _BLENDFUNCTION *)a1 + 50) = *v11;
      goto LABEL_80;
    }
  }
  else
  {
    if ( v17 == 0x40000000 )
    {
      v17 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
      if ( (*((_DWORD *)a1 + 56) & 0x10000000) == 0 )
        v17 = *((_DWORD *)a1 + 56);
      if ( (*(_DWORD *)a1 & 0x40) != 0 && !v17 )
        v17 = *((_DWORD *)a1 + 1);
      v11 = (struct _BLENDFUNCTION *)&v41;
      v28 = *((_DWORD *)a1 + 58);
      v41 = *((_DWORD *)a1 + 57);
    }
    else
    {
      v28 = a7;
    }
    v29 = v42;
  }
  if ( (*(_DWORD *)(v46 + 40) & 0x400) == 0 )
  {
    if ( v51[0] || v47 || v29 || v43 || v28 )
    {
      updated = bSpUpdateShape(a1, v17, v51[0], v29, v28, v11, v43, v47, v13);
      if ( updated && !v18 )
      {
        v35 = v44;
        if ( !v44 )
          v35 = (struct _POINTL *)((char *)a1 + 112);
        v34 = 0;
        v33 = v35;
        goto LABEL_61;
      }
    }
    else
    {
      if ( v17 - 2 <= 1 && v11 && !v44 )
      {
        v32 = bSpUpdateAlpha(a1, v11, 1);
LABEL_62:
        updated = v32;
        goto LABEL_63;
      }
      if ( (v17 & 0x7FFFFFFF) == 0 && !v11 )
      {
        v33 = v44;
        v34 = v17 & 0x80000000;
LABEL_61:
        v32 = bSpUpdatePosition(a1, v33, v34, 0);
        goto LABEL_62;
      }
    }
LABEL_63:
    if ( v13 )
    {
      v36 = *((_DWORD *)a1 + 28);
      LODWORD(v51[0]) = v36 + v13->left;
      v37 = v36 + v13->right;
      v38 = *((_DWORD *)a1 + 29);
      LODWORD(v51[1]) = v37;
      HIDWORD(v51[0]) = v38 + v13->top;
      HIDWORD(v51[1]) = v38 + v13->bottom;
      ERECTL::operator*=(v51, (char *)a1 + 80);
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v51) )
      {
        v54 = *(struct _RECTL *)v51;
        vSpAddAndCompactDirtyRect(a1, &v54);
        v39 = 0LL;
        v52 = (struct _RECTL)0LL;
        v53 = 0LL;
        if ( v18 )
        {
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v52, v45, (struct _RECTL *)v51);
          v39 = *(_QWORD *)&v52.left;
        }
        if ( !v39 && v18 || (vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), (struct _RECTL *)v51, 0), v18) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
      }
    }
    else
    {
      v40 = 0LL;
      v54 = (struct _RECTL)0LL;
      v55 = 0LL;
      if ( v18 )
      {
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v54, v45, (struct _RECTL *)a1 + 5);
        v40 = *(_QWORD *)&v54.left;
      }
      if ( !v40 && v18 || (vSpRedrawSprite(a1), v18) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v54);
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v54);
      if ( (*(_DWORD *)(v46 + 40) & 0x400) == 0 )
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v46,
          (struct _SURFOBJ *)((*(_QWORD *)(v46 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v46 + 2552) != 0LL)),
          0LL,
          0);
    }
  }
LABEL_80:
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v50);
  return updated;
}
