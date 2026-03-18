/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C024F110
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C024F70C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F00 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C007A474 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00A159C (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00AD89C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00B2A20 (XLATEOBJ_iXlate.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C0133CE0 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C024D9A0 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C024E4A8 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0252F34 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0255724 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C0288D80 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
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
  int v9; // r15d
  struct _SPRITESTATE *v12; // rcx
  unsigned int v14; // r14d
  __int64 v15; // r13
  unsigned int v16; // r10d
  int v17; // eax
  __int64 v18; // rcx
  struct _SPRITESTATE *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // edx
  LONG x; // ecx
  int y; // edx
  LONG v25; // r8d
  __int64 v26; // r13
  LONG v27; // r9d
  LONG v28; // ecx
  LONG v29; // eax
  SPRITERANGELOCK *v30; // r14
  __int64 v31; // rcx
  SURFACE *v32; // rbx
  __int64 v33; // rcx
  W32PIDLOCK *v34; // rdi
  LONG v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdi
  struct _BLENDFUNCTION v38; // eax
  ULONG v39; // eax
  int v40; // ebx
  struct PALETTE *v41; // rdx
  struct PALETTE *v42; // rax
  int v43; // ebx
  ULONG v44; // eax
  char v45; // r8
  int v46; // eax
  HSURF v47; // rcx
  bool v48; // zf
  struct _RECTL *v49; // rbx
  struct _SURFOBJ *v50; // rcx
  unsigned int v51; // ebx
  ULONG NearestIndexFromColorref; // [rsp+60h] [rbp-89h]
  int v54; // [rsp+64h] [rbp-85h]
  int v55; // [rsp+68h] [rbp-81h]
  __int64 v56; // [rsp+70h] [rbp-79h] BYREF
  struct PALETTE *v57; // [rsp+78h] [rbp-71h] BYREF
  LONG v58; // [rsp+80h] [rbp-69h]
  LONG v59; // [rsp+84h] [rbp-65h]
  struct _BLENDFUNCTION v60; // [rsp+88h] [rbp-61h] BYREF
  int v61; // [rsp+8Ch] [rbp-5Dh]
  int v62; // [rsp+90h] [rbp-59h]
  int v63; // [rsp+94h] [rbp-55h]
  unsigned int v64; // [rsp+98h] [rbp-51h]
  struct _SPRITESTATE *v65; // [rsp+A0h] [rbp-49h]
  XLATEOBJ *pxlo; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-39h] BYREF
  _QWORD v68[2]; // [rsp+B8h] [rbp-31h] BYREF
  struct PALETTE *v69; // [rsp+C8h] [rbp-21h]
  struct _RECTL *v70; // [rsp+D0h] [rbp-19h]
  struct _RECTL v71; // [rsp+D8h] [rbp-11h] BYREF

  v9 = a2;
  v12 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v70 = a9;
  v54 = 0;
  v56 = *(_QWORD *)v12;
  v65 = v12;
  if ( a2 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    v14 = 1;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v12 + 27);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v12 + 28);
    return v14;
  }
  if ( !a2 )
  {
    v9 = *((_DWORD *)a1 + 1);
    a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !a6 && (v9 & 2) != 0 )
    return 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v68, a4);
  v15 = v68[0];
  v16 = 0;
  if ( v68[0] )
  {
    if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v68) )
    {
      v17 = SrcSurfaceAccessCheck(*(struct SURFACE **)(v15 + 504));
      v16 = 0;
      if ( v17 )
      {
        v18 = *(_QWORD *)(v15 + 48);
        if ( v18 == *(_QWORD *)v65 || v18 == *(_QWORD *)(v56 + 24) )
        {
          if ( !a3 )
          {
            v19 = v65;
            v62 = 0xFFFFFF;
            v61 = 0;
            v69 = ppalDefault;
            v63 = 0;
LABEL_21:
            x = a7->x;
            y = a7->y;
            v25 = a7->x + a8->cx;
            v26 = *(_QWORD *)(v15 + 504);
            v27 = y + a8->cy;
            v71.left = a7->x;
            v71.right = v25;
            v71.top = y;
            v71.bottom = v27;
            if ( !v26 )
              goto LABEL_76;
            if ( x < 0 )
              goto LABEL_76;
            if ( y < 0 )
              goto LABEL_76;
            if ( x >= v25 )
              goto LABEL_76;
            if ( y >= v27 )
              goto LABEL_76;
            v28 = *(_DWORD *)(v26 + 56);
            if ( v25 > v28 )
              goto LABEL_76;
            v29 = *(_DWORD *)(v26 + 60);
            if ( v27 > v29 )
              goto LABEL_76;
            if ( v70 )
            {
              v57 = 0LL;
              v58 = v28;
              v59 = v29;
              ERECTL::operator*=(&v70->left, (int *)&v57);
            }
            v30 = (struct _SPRITESTATE *)((char *)v19 + 120);
            SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v19 + 120));
            v31 = *((_QWORD *)a1 + 16);
            if ( v31 )
            {
              v32 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v31);
              if ( (unsigned int)SURFACE::bRedirectionBitmap(v32) )
              {
                v34 = (W32PIDLOCK *)(v33 + 272);
                W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v33 + 272));
                if ( (*(_DWORD *)a1 & 0x200) != 0 )
                {
                  v35 = *((_DWORD *)v32 + 14);
                  v57 = 0LL;
                  v58 = v35;
                  v59 = *((_DWORD *)v32 + 15);
                  ERECTL::operator*=(&v71.left, (int *)&v57);
                }
                W32PIDLOCK::vUnlockSingleThread(v34);
              }
            }
            v36 = *(_QWORD *)(v26 + 128);
            pxlo = 0LL;
            v37 = *(_QWORD *)(v68[0] + 96LL);
            v67 = v36;
            if ( v36 )
              INC_SHARE_REF_CNT(v36);
            SPRITERANGELOCK::vUnlock(v30);
            if ( v9 != 3 || a6->AlphaFormat )
            {
              v40 = 0;
              v55 = 0;
              v39 = 0;
            }
            else
            {
              v38 = *a6;
              v9 = 2;
              a6 = &v60;
              v60 = v38;
              v60.AlphaFormat = 1;
              v55 = 1;
              v39 = rgbFromColorref(gppalRGB, v37, a5);
              v40 = 1;
            }
            NearestIndexFromColorref = v39;
            if ( v9 == 2 && (a6->AlphaFormat & 1) != 0 )
            {
              v64 = 6;
              v41 = gppalRGB;
              v42 = ppalDefault;
            }
            else
            {
              v64 = 0;
              v41 = *(struct PALETTE **)(v56 + 1800);
              v42 = v69;
            }
            v57 = v41;
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  (__int64 *)&pxlo,
                                  0LL,
                                  v63,
                                  v67,
                                  (__int64)v41,
                                  v37,
                                  (__int64)v42,
                                  v62,
                                  v61,
                                  0,
                                  0) )
            {
LABEL_75:
              XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v67);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
LABEL_76:
              v15 = v68[0];
              v51 = v54;
              goto LABEL_79;
            }
            v54 = 1;
            *((_DWORD *)a1 + 1) = v9;
            *((struct _RECTL *)a1 + 6) = v71;
            if ( v9 == 4 )
            {
              *(_DWORD *)a1 |= 8u;
              v43 = 1;
              goto LABEL_69;
            }
            if ( v9 == 1 )
            {
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v67, v37, a5, 1LL);
              v44 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
              *(_DWORD *)a1 &= ~8u;
              *((_DWORD *)a1 + 51) = v44;
              v43 = *(_DWORD *)(v56 + 44) & 4;
              goto LABEL_61;
            }
            if ( v9 == 2 && (unsigned int)bSpUpdateAlpha(a1, a6, 0) )
            {
              v45 = a6->AlphaFormat & 1;
              if ( !v45 || (unsigned int)bIsSourceBGRA((struct SURFACE *)v26) )
              {
                if ( !v40 )
                {
                  if ( v45 )
                    v43 = *(_DWORD *)(v56 + 44) & 2;
                  else
                    v43 = *(_DWORD *)(v56 + 44) & 1;
LABEL_61:
                  if ( v43 )
                    goto LABEL_69;
                  goto LABEL_62;
                }
              }
              else if ( !v40 )
              {
                goto LABEL_74;
              }
              v43 = 0;
LABEL_62:
              if ( *(_WORD *)(v26 + 100) || (*(_BYTE *)(v26 + 102) & 0x20) != 0 )
              {
                if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v56) )
                {
                  v46 = *(_DWORD *)(v26 + 116);
                  if ( (v46 & 0x20) == 0 )
                  {
                    v47 = *(HSURF *)(v26 + 32);
                    *(_DWORD *)(v26 + 116) = v46 | 0x20;
                    pConvertDfbSurfaceToDibPostNKAPC(v47);
                  }
                }
                else
                {
                  bConvertDfbDcToDib((struct XDCOBJ *)v68);
                }
                v26 = *(_QWORD *)(v68[0] + 504LL);
              }
LABEL_69:
              vSpDirectDriverAccess(v65, 0LL);
              v48 = v43 == 0;
              v49 = v70;
              bSpCreateShape(
                a1,
                &gptlZero,
                (struct _SURFOBJ *)((v26 + 24) & -(__int64)(v26 != 0)),
                pxlo,
                &v71,
                v57,
                v64,
                v48,
                v70);
              vSpDirectDriverAccess(v65, 1LL);
              v50 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
              if ( v50 )
              {
                if ( v55 )
                {
                  if ( (*(_DWORD *)a1 & 0x40) != 0 )
                    *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
                  else
                    vSpUpdatePerPixelAlphaFromColorKey(v50, NearestIndexFromColorref, v49, 0LL);
                }
                goto LABEL_75;
              }
            }
LABEL_74:
            vSpDeleteShape(a1);
            *((_DWORD *)a1 + 1) = 4;
            v54 = 0;
            goto LABEL_75;
          }
          MDCOBJ::MDCOBJ((MDCOBJ *)&v71, a3);
          v16 = 0;
          if ( *(_QWORD *)&v71.left )
          {
            v20 = *(_QWORD *)(*(_QWORD *)&v71.left + 48LL);
            if ( v20 == *(_QWORD *)(v15 + 48) )
            {
              v19 = v65;
              if ( v20 == *(_QWORD *)v65 || v20 == *(_QWORD *)(v56 + 24) )
              {
                v21 = *(_QWORD *)(*(_QWORD *)&v71.left + 80LL);
                v69 = *(struct PALETTE **)(*(_QWORD *)&v71.left + 96LL);
                v22 = *(_DWORD *)(v21 + 40);
                v61 = *(_DWORD *)(v21 + 32);
                LODWORD(v21) = *(_DWORD *)(*(_QWORD *)&v71.left + 128LL);
                v62 = v22;
                v63 = v21;
                XDCOBJ::vUnlockFast((XDCOBJ *)&v71);
                goto LABEL_21;
              }
            }
            XDCOBJ::vUnlockFast((XDCOBJ *)&v71);
            v16 = 0;
          }
        }
      }
    }
  }
  v51 = v16;
LABEL_79:
  if ( v15 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v68);
  return v51;
}
