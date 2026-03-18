/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0162E04
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00866D4 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0081894 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0087E34 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0087E70 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0087F9C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00A4950 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A8AB0 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     XLATEOBJ_iXlate @ 0x1C00C7500 (XLATEOBJ_iXlate.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0125BF4 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C015C718 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C016323C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C016346C (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0281414 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02B2DF0 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
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
  int v35; // ebx
  bool v36; // zf
  struct _RECTL *v37; // rbx
  __int64 v38; // r8
  struct _SURFOBJ *v39; // rcx
  unsigned int v40; // ebx
  unsigned int v42; // r14d
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // edx
  LONG v46; // eax
  struct _BLENDFUNCTION v47; // eax
  ULONG v48; // eax
  int v49; // eax
  HSURF v50; // rcx
  ULONG NearestIndexFromColorref; // [rsp+60h] [rbp-89h]
  struct PALETTE *v52; // [rsp+68h] [rbp-81h] BYREF
  LONG v53; // [rsp+70h] [rbp-79h]
  LONG v54; // [rsp+74h] [rbp-75h]
  struct _BLENDFUNCTION v55; // [rsp+78h] [rbp-71h] BYREF
  int v56; // [rsp+7Ch] [rbp-6Dh]
  int v57; // [rsp+80h] [rbp-69h]
  __int64 v58; // [rsp+88h] [rbp-61h] BYREF
  int v59; // [rsp+90h] [rbp-59h]
  int v60; // [rsp+94h] [rbp-55h]
  int v61; // [rsp+98h] [rbp-51h]
  unsigned int v62; // [rsp+9Ch] [rbp-4Dh]
  _QWORD v63[2]; // [rsp+A0h] [rbp-49h] BYREF
  XLATEOBJ *pxlo; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-31h] BYREF
  struct PALETTE *v66; // [rsp+C0h] [rbp-29h]
  struct _SPRITESTATE *v67; // [rsp+C8h] [rbp-21h]
  struct _RECTL *v68; // [rsp+D0h] [rbp-19h]
  struct _RECTL v69; // [rsp+D8h] [rbp-11h] BYREF

  v12 = a2;
  v13 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v68 = a9;
  v56 = 0;
  v69.bottom = 0;
  v58 = *(_QWORD *)v13;
  v55 = 0;
  v67 = v13;
  if ( a2 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    v42 = 1;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v13 + 27);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v13 + 28);
    return v42;
  }
  if ( !a2 )
  {
    v12 = *((_DWORD *)a1 + 1);
    a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !a6 && (v12 & 2) != 0 )
    return 0;
  DCOBJ::DCOBJ((DCOBJ *)v63, a4);
  if ( !v63[0] )
    goto LABEL_59;
  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v63) )
    goto LABEL_59;
  if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v14 + 496)) )
    goto LABEL_59;
  v15 = *(_QWORD *)(v63[0] + 48LL);
  if ( v15 != *(_QWORD *)v13 && v15 != *(_QWORD *)(v58 + 24) )
    goto LABEL_59;
  if ( !a3 )
  {
    v60 = 0xFFFFFF;
    v66 = ppalDefault;
    v59 = 0;
    v61 = 0;
LABEL_13:
    x = a7->x;
    y = a7->y;
    v18 = a7->x + a8->cx;
    v19 = y + a8->cy;
    v69.left = a7->x;
    v20 = *(_QWORD *)(v63[0] + 496LL);
    v69.right = v18;
    v69.top = y;
    v69.bottom = v19;
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
    if ( v68 )
    {
      v52 = 0LL;
      v53 = v21;
      v54 = v22;
      ERECTL::operator*=(&v68->left, (int *)&v52);
    }
    v23 = v67;
    SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v67 + 120));
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
          v46 = *((_DWORD *)v25 + 14);
          v52 = 0LL;
          v53 = v46;
          v54 = *((_DWORD *)v25 + 15);
          ERECTL::operator*=(&v69.left, (int *)&v52);
        }
        W32PIDLOCK::vUnlockSingleThread(v27);
      }
    }
    v28 = *(_QWORD *)(v20 + 128);
    pxlo = 0LL;
    v29 = *(_QWORD *)(v63[0] + 88LL);
    v65 = v28;
    if ( v28 )
      INC_SHARE_REF_CNT(v28);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v23 + 120));
    if ( v12 != 3 || a6->AlphaFormat )
    {
      v57 = 0;
      v30 = 0;
      v31 = 0;
    }
    else
    {
      v47 = *a6;
      a6 = &v55;
      v55 = v47;
      v55.AlphaFormat = 1;
      v12 = 2;
      v57 = 1;
      v31 = rgbFromColorref(gppalRGB, v29);
      v30 = 1;
    }
    NearestIndexFromColorref = v31;
    if ( v12 == 2 && (a6->AlphaFormat & 1) != 0 )
    {
      v62 = 6;
      v32 = gppalRGB;
      v33 = ppalDefault;
    }
    else
    {
      v62 = 0;
      v32 = *(struct PALETTE **)(v58 + 1808);
      v33 = v66;
    }
    v52 = v32;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&pxlo,
                          0LL,
                          v61,
                          v65,
                          (__int64)v32,
                          v29,
                          (__int64)v33,
                          v60,
                          v59,
                          0,
                          0) )
    {
LABEL_48:
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v65);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
LABEL_49:
      v40 = v56;
      goto LABEL_50;
    }
    v56 = 1;
    *((_DWORD *)a1 + 1) = v12;
    *((struct _RECTL *)a1 + 6) = v69;
    if ( v12 == 4 )
    {
      *(_DWORD *)a1 |= 8u;
      v35 = 1;
      goto LABEL_46;
    }
    if ( v12 == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v65, v29, a5, 1LL);
      v48 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
      *(_DWORD *)a1 &= ~8u;
      *((_DWORD *)a1 + 51) = v48;
      v35 = *(_DWORD *)(v58 + 44) & 4;
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
        v56 = 0;
        goto LABEL_48;
      }
      if ( v30 )
      {
LABEL_72:
        v35 = 0;
LABEL_44:
        if ( *(_WORD *)(v20 + 100) || (*(_BYTE *)(v20 + 102) & 0x20) != 0 )
        {
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v58) )
          {
            v49 = *(_DWORD *)(v20 + 116);
            if ( (v49 & 0x20) == 0 )
            {
              v50 = *(HSURF *)(v20 + 32);
              *(_DWORD *)(v20 + 116) = v49 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC(v50);
            }
          }
          else
          {
            bConvertDfbDcToDib((struct XDCOBJ *)v63);
          }
          v20 = *(_QWORD *)(v63[0] + 496LL);
        }
LABEL_46:
        vSpDirectDriverAccess(v67, 0LL, v34);
        v36 = v35 == 0;
        v37 = v68;
        bSpCreateShape(
          a1,
          &gptlZero,
          (struct _SURFOBJ *)((v20 + 24) & -(__int64)(v20 != 0)),
          pxlo,
          &v69,
          v52,
          v62,
          v36,
          v68);
        vSpDirectDriverAccess(v67, 1LL, v38);
        v39 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( v39 )
        {
          if ( v57 )
          {
            if ( (*(_DWORD *)a1 & 0x40) != 0 )
              *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
            else
              vSpUpdatePerPixelAlphaFromColorKey(v39, NearestIndexFromColorref, v37, 0LL);
          }
          goto LABEL_48;
        }
        goto LABEL_82;
      }
      if ( (_BYTE)v34 )
        v35 = *(_DWORD *)(v58 + 44) & 2;
      else
        v35 = *(_DWORD *)(v58 + 44) & 1;
    }
    if ( v35 )
      goto LABEL_46;
    goto LABEL_44;
  }
  DCOBJ::DCOBJ((DCOBJ *)&v52, a3);
  if ( v52 )
  {
    v43 = *((_QWORD *)v52 + 6);
    if ( v43 == *(_QWORD *)(v63[0] + 48LL) && (v43 == *(_QWORD *)v13 || v43 == *(_QWORD *)(v58 + 24)) )
    {
      v66 = (struct PALETTE *)*((_QWORD *)v52 + 11);
      v44 = *((_QWORD *)v52 + 122);
      v45 = *(_DWORD *)(v44 + 184);
      v59 = *(_DWORD *)(v44 + 176);
      LODWORD(v44) = *((_DWORD *)v52 + 30);
      v60 = v45;
      v61 = v44;
      XDCOBJ::vUnlockFast((XDCOBJ *)&v52);
      goto LABEL_13;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v52);
  }
LABEL_59:
  v40 = 0;
LABEL_50:
  if ( v63[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v63);
  return v40;
}
