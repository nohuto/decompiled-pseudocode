/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0161E34
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00426D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C003D694 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0043E6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043F98 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C005B1EC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C005ED8C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C007F3A8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00D5A10 (XLATEOBJ_iXlate.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C015B768 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C016226C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C016249C (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0281AD4 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02B32A0 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        int a2,
        HDC a3,
        HDC a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  int v12; // r15d
  struct _SPRITESTATE *v13; // r13
  __int64 v14; // r8
  __int64 v15; // rcx
  LONG x; // ecx
  int y; // edx
  LONG v18; // r8d
  LONG v19; // r9d
  __int64 v20; // r13
  LONG v21; // ecx
  LONG v22; // eax
  struct _SPRITESTATE *v23; // r14
  __int64 v24; // rcx
  SURFACE *v25; // rbx
  __int64 v26; // rcx
  W32PIDLOCK *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdi
  int v30; // ebx
  ULONG v31; // eax
  struct PALETTE *v32; // rdx
  struct PALETTE *v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ebx
  bool v37; // zf
  struct _RECTL *v38; // rbx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _SURFOBJ *v41; // rcx
  unsigned int v42; // ebx
  unsigned int v44; // r14d
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // edx
  LONG v48; // eax
  struct _BLENDFUNCTION v49; // eax
  ULONG v50; // eax
  int v51; // eax
  HSURF v52; // rcx
  ULONG NearestIndexFromColorref; // [rsp+60h] [rbp-89h]
  struct PALETTE *v54; // [rsp+68h] [rbp-81h] BYREF
  LONG v55; // [rsp+70h] [rbp-79h]
  LONG v56; // [rsp+74h] [rbp-75h]
  struct _BLENDFUNCTION v57; // [rsp+78h] [rbp-71h] BYREF
  int v58; // [rsp+7Ch] [rbp-6Dh]
  int v59; // [rsp+80h] [rbp-69h]
  __int64 v60; // [rsp+88h] [rbp-61h] BYREF
  int v61; // [rsp+90h] [rbp-59h]
  int v62; // [rsp+94h] [rbp-55h]
  int v63; // [rsp+98h] [rbp-51h]
  unsigned int v64; // [rsp+9Ch] [rbp-4Dh]
  _QWORD v65[2]; // [rsp+A0h] [rbp-49h] BYREF
  XLATEOBJ *pxlo; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-31h] BYREF
  struct PALETTE *v68; // [rsp+C0h] [rbp-29h]
  struct _SPRITESTATE *v69; // [rsp+C8h] [rbp-21h]
  struct _RECTL *v70; // [rsp+D0h] [rbp-19h]
  struct _RECTL v71; // [rsp+D8h] [rbp-11h] BYREF

  v12 = a2;
  v13 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v70 = a9;
  v58 = 0;
  v71.bottom = 0;
  v60 = *(_QWORD *)v13;
  v57 = 0;
  v69 = v13;
  if ( a2 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    v44 = 1;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v13 + 27);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v13 + 28);
    return v44;
  }
  if ( !a2 )
  {
    v12 = *((_DWORD *)a1 + 1);
    a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !a6 && (v12 & 2) != 0 )
    return 0;
  DCOBJ::DCOBJ((DCOBJ *)v65, a4);
  if ( !v65[0] )
    goto LABEL_59;
  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v65) )
    goto LABEL_59;
  if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v14 + 496)) )
    goto LABEL_59;
  v15 = *(_QWORD *)(v65[0] + 48LL);
  if ( v15 != *(_QWORD *)v13 && v15 != *(_QWORD *)(v60 + 24) )
    goto LABEL_59;
  if ( !a3 )
  {
    v62 = 0xFFFFFF;
    v68 = ppalDefault;
    v61 = 0;
    v63 = 0;
LABEL_13:
    x = a7->x;
    y = a7->y;
    v18 = a7->x + a8->cx;
    v19 = y + a8->cy;
    v71.left = a7->x;
    v20 = *(_QWORD *)(v65[0] + 496LL);
    v71.right = v18;
    v71.top = y;
    v71.bottom = v19;
    if ( !v20 )
      goto LABEL_49;
    if ( x < 0 )
      goto LABEL_49;
    if ( y < 0 )
      goto LABEL_49;
    if ( x >= v18 )
      goto LABEL_49;
    if ( y >= v19 )
      goto LABEL_49;
    v21 = *(_DWORD *)(v20 + 56);
    if ( v18 > v21 )
      goto LABEL_49;
    v22 = *(_DWORD *)(v20 + 60);
    if ( v19 > v22 )
      goto LABEL_49;
    if ( v70 )
    {
      v54 = 0LL;
      v55 = v21;
      v56 = v22;
      ERECTL::operator*=(&v70->left, (int *)&v54);
    }
    v23 = v69;
    SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v69 + 120));
    v24 = *((_QWORD *)a1 + 16);
    if ( v24 )
    {
      v25 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v24);
      if ( (unsigned int)SURFACE::bRedirectionBitmap(v25) )
      {
        v27 = (W32PIDLOCK *)(v26 + 272);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v26 + 272));
        if ( (*(_DWORD *)a1 & 0x200) != 0 )
        {
          v48 = *((_DWORD *)v25 + 14);
          v54 = 0LL;
          v55 = v48;
          v56 = *((_DWORD *)v25 + 15);
          ERECTL::operator*=(&v71.left, (int *)&v54);
        }
        W32PIDLOCK::vUnlockSingleThread(v27);
      }
    }
    v28 = *(_QWORD *)(v20 + 128);
    pxlo = 0LL;
    v29 = *(_QWORD *)(v65[0] + 88LL);
    v67 = v28;
    if ( v28 )
      INC_SHARE_REF_CNT(v28);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v23 + 120));
    if ( v12 != 3 || a6->AlphaFormat )
    {
      v59 = 0;
      v30 = 0;
      v31 = 0;
    }
    else
    {
      v49 = *a6;
      a6 = &v57;
      v57 = v49;
      v57.AlphaFormat = 1;
      v12 = 2;
      v59 = 1;
      v31 = rgbFromColorref(gppalRGB, v29);
      v30 = 1;
    }
    NearestIndexFromColorref = v31;
    if ( v12 == 2 && (a6->AlphaFormat & 1) != 0 )
    {
      v64 = 6;
      v32 = gppalRGB;
      v33 = ppalDefault;
    }
    else
    {
      v64 = 0;
      v32 = *(struct PALETTE **)(v60 + 1808);
      v33 = v68;
    }
    v54 = v32;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&pxlo,
                          0LL,
                          v63,
                          v67,
                          (__int64)v32,
                          v29,
                          (__int64)v33,
                          v62,
                          v61,
                          0,
                          0) )
    {
LABEL_48:
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v67);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
LABEL_49:
      v42 = v58;
      goto LABEL_50;
    }
    v58 = 1;
    *((_DWORD *)a1 + 1) = v12;
    *((struct _RECTL *)a1 + 6) = v71;
    if ( v12 == 4 )
    {
      *(_DWORD *)a1 |= 8u;
      v36 = 1;
      goto LABEL_46;
    }
    if ( v12 == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v67, v29, a5, 1LL);
      v50 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
      *(_DWORD *)a1 &= ~8u;
      *((_DWORD *)a1 + 51) = v50;
      v36 = *(_DWORD *)(v60 + 44) & 4;
    }
    else
    {
      if ( v12 != 2 || !(unsigned int)bSpUpdateAlpha(a1, a6, 0) )
        goto LABEL_82;
      LOBYTE(v34) = a6->AlphaFormat & 1;
      if ( (_BYTE)v34 && !(unsigned int)bIsSourceBGRA((struct SURFACE *)v20) )
      {
        if ( v30 )
          goto LABEL_72;
LABEL_82:
        vSpDeleteShape(a1);
        *((_DWORD *)a1 + 1) = 4;
        v58 = 0;
        goto LABEL_48;
      }
      if ( v30 )
      {
LABEL_72:
        v36 = 0;
LABEL_44:
        if ( *(_WORD *)(v20 + 100) || (*(_BYTE *)(v20 + 102) & 0x20) != 0 )
        {
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v60) )
          {
            v51 = *(_DWORD *)(v20 + 116);
            if ( (v51 & 0x20) == 0 )
            {
              v52 = *(HSURF *)(v20 + 32);
              *(_DWORD *)(v20 + 116) = v51 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC(v52);
            }
          }
          else
          {
            bConvertDfbDcToDib((struct XDCOBJ *)v65);
          }
          v20 = *(_QWORD *)(v65[0] + 496LL);
        }
LABEL_46:
        vSpDirectDriverAccess(v69, 0LL, v34, v35);
        v37 = v36 == 0;
        v38 = v70;
        bSpCreateShape(
          a1,
          &gptlZero,
          (struct _SURFOBJ *)((v20 + 24) & -(__int64)(v20 != 0)),
          pxlo,
          &v71,
          v54,
          v64,
          v37,
          v70);
        vSpDirectDriverAccess(v69, 1LL, v39, v40);
        v41 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( v41 )
        {
          if ( v59 )
          {
            if ( (*(_DWORD *)a1 & 0x40) != 0 )
              *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
            else
              vSpUpdatePerPixelAlphaFromColorKey(v41, NearestIndexFromColorref, v38, 0LL);
          }
          goto LABEL_48;
        }
        goto LABEL_82;
      }
      if ( (_BYTE)v34 )
        v36 = *(_DWORD *)(v60 + 44) & 2;
      else
        v36 = *(_DWORD *)(v60 + 44) & 1;
    }
    if ( v36 )
      goto LABEL_46;
    goto LABEL_44;
  }
  DCOBJ::DCOBJ((DCOBJ *)&v54, a3);
  if ( v54 )
  {
    v45 = *((_QWORD *)v54 + 6);
    if ( v45 == *(_QWORD *)(v65[0] + 48LL) && (v45 == *(_QWORD *)v13 || v45 == *(_QWORD *)(v60 + 24)) )
    {
      v68 = (struct PALETTE *)*((_QWORD *)v54 + 11);
      v46 = *((_QWORD *)v54 + 122);
      v47 = *(_DWORD *)(v46 + 184);
      v61 = *(_DWORD *)(v46 + 176);
      LODWORD(v46) = *((_DWORD *)v54 + 30);
      v62 = v47;
      v63 = v46;
      XDCOBJ::vUnlockFast((XDCOBJ *)&v54);
      goto LABEL_13;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v54);
  }
LABEL_59:
  v42 = 0;
LABEL_50:
  if ( v65[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v65);
  return v42;
}
