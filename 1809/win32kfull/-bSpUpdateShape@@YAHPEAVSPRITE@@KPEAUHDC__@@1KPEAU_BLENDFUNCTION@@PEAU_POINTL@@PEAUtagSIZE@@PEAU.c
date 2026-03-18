/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C015A1E4
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00100D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C000B3D4 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00445A0 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004D274 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C004FC38 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C0094450 (XLATEOBJ_iXlate.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C0155690 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C01594CC (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C015A8D0 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0268920 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C029C9C4 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
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
  struct _SPRITESTATE *v13; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct SURFACE *v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rcx
  unsigned int v23; // ebx
  struct _SPRITESTATE *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // r13
  int v29; // ecx
  LONG v30; // r8d
  LONG v31; // edx
  LONG v32; // r9d
  LONG v33; // ecx
  LONG v34; // eax
  __int64 v35; // rcx
  SURFACE *v36; // rbx
  __int64 v37; // rcx
  W32PIDLOCK *v38; // rdi
  LONG v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdi
  struct _BLENDFUNCTION v42; // eax
  ULONG v43; // eax
  int v44; // ebx
  struct PALETTE *v45; // rcx
  struct PALETTE *v46; // rax
  int v47; // ebx
  ULONG v48; // eax
  char v49; // r8
  int v50; // eax
  HSURF v51; // rcx
  bool v52; // zf
  struct _RECTL *v53; // rbx
  struct _SURFOBJ *v54; // rcx
  ULONG NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  int v57; // [rsp+64h] [rbp-9Ch]
  int v58; // [rsp+68h] [rbp-98h]
  __int64 v59; // [rsp+70h] [rbp-90h] BYREF
  struct PALETTE *v60; // [rsp+78h] [rbp-88h] BYREF
  LONG v61; // [rsp+80h] [rbp-80h]
  LONG v62; // [rsp+84h] [rbp-7Ch]
  struct _BLENDFUNCTION v63; // [rsp+88h] [rbp-78h] BYREF
  int v64; // [rsp+8Ch] [rbp-74h]
  int v65; // [rsp+90h] [rbp-70h]
  unsigned int v66; // [rsp+94h] [rbp-6Ch]
  unsigned int v67; // [rsp+98h] [rbp-68h]
  struct _SPRITESTATE *v68; // [rsp+A0h] [rbp-60h]
  XLATEOBJ *pxlo; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  struct PALETTE *v71; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v72; // [rsp+C0h] [rbp-40h]
  _QWORD v73[2]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v74[32]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v75[2]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v76[32]; // [rsp+108h] [rbp+8h] BYREF
  struct _RECTL v77; // [rsp+128h] [rbp+28h] BYREF

  v13 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v72 = a9;
  v60 = (struct PALETTE *)a7;
  v57 = 0;
  v59 = *(_QWORD *)v13;
  v68 = v13;
  if ( a2 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    v15 = 1;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v13 + 27);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v13 + 28);
    return v15;
  }
  if ( !a2 )
  {
    a2 = *((_DWORD *)a1 + 1);
    a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !a6 && (a2 & 2) != 0 )
    return 0;
  v73[0] = 0LL;
  v73[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v74);
  XDCOBJ::vLock((XDCOBJ *)v73, a4);
  v16 = v73[0];
  if ( !v73[0]
    || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v73)
    || (v20 = *(struct SURFACE **)(v16 + 496), *((_DWORD *)v20 + 164))
    && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v20 + 164)
    || !(unsigned int)_SurfaceAccessCheck(v20, v17, v18, v19)
    || (v21 = v73[0], v22 = *(_QWORD *)(v73[0] + 48LL), v22 != *(_QWORD *)v68) && v22 != *(_QWORD *)(v59 + 24) )
  {
    v23 = 0;
    goto LABEL_81;
  }
  v23 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v75, a3);
    if ( !v75[0]
      || (v25 = *(_QWORD *)(v75[0] + 48LL), v25 != *(_QWORD *)(v73[0] + 48LL))
      || (v24 = v68, v25 != *(_QWORD *)v68) && v25 != *(_QWORD *)(v59 + 24) )
    {
      MDCOBJ::~MDCOBJ((MDCOBJ *)v75);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v76);
      goto LABEL_81;
    }
    v71 = *(struct PALETTE **)(v75[0] + 88LL);
    v26 = *(_QWORD *)(v75[0] + 976LL);
    v27 = *(_DWORD *)(v26 + 184);
    v64 = *(_DWORD *)(v26 + 176);
    LODWORD(v26) = *(_DWORD *)(v75[0] + 120LL);
    v65 = v27;
    v66 = v26;
    MDCOBJ::~MDCOBJ((MDCOBJ *)v75);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v76);
    v21 = v73[0];
  }
  else
  {
    v24 = v68;
    v65 = 0xFFFFFF;
    v71 = ppalDefault;
    v64 = 0;
    v66 = 0;
  }
  v28 = *(_QWORD *)(v21 + 496);
  v29 = *(_DWORD *)v60;
  v30 = *(_DWORD *)v60 + a8->cx;
  v31 = *((_DWORD *)v60 + 1);
  v32 = v31 + a8->cy;
  v77.left = *(_DWORD *)v60;
  v77.right = v30;
  v77.top = v31;
  v77.bottom = v32;
  if ( v28 )
  {
    if ( v29 >= 0 && v31 >= 0 && v29 < v30 && v31 < v32 )
    {
      v33 = *(_DWORD *)(v28 + 56);
      if ( v30 <= v33 )
      {
        v34 = *(_DWORD *)(v28 + 60);
        if ( v32 <= v34 )
        {
          if ( v72 )
          {
            v60 = 0LL;
            v61 = v33;
            v62 = v34;
            ERECTL::operator*=(&v72->left, (int *)&v60);
          }
          GreAcquireSemaphoreSharedInternal(*((_QWORD *)v24 + 15));
          EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_QWORD *)v24 + 15));
          v35 = *((_QWORD *)a1 + 16);
          if ( v35 )
          {
            v36 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v35);
            if ( (unsigned int)SURFACE::bRedirectionBitmap(v36) )
            {
              v38 = (W32PIDLOCK *)(v37 + 272);
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v37 + 272));
              if ( (*(_DWORD *)a1 & 0x200) != 0 )
              {
                v39 = *((_DWORD *)v36 + 14);
                v60 = 0LL;
                v61 = v39;
                v62 = *((_DWORD *)v36 + 15);
                ERECTL::operator*=(&v77.left, (int *)&v60);
              }
              W32PIDLOCK::vUnlockSingleThread(v38);
            }
          }
          v40 = *(_QWORD *)(v28 + 128);
          pxlo = 0LL;
          v41 = *(_QWORD *)(v73[0] + 88LL);
          v70 = v40;
          if ( v40 )
            INC_SHARE_REF_CNT(v40);
          EtwTraceGreLockReleaseSemaphore(L"hsem", *((_QWORD *)v24 + 15));
          GreReleaseSemaphoreInternal(*((_QWORD *)v24 + 15));
          if ( a2 != 3 || a6->AlphaFormat )
          {
            v44 = 0;
            v58 = 0;
            v43 = 0;
          }
          else
          {
            v42 = *a6;
            a2 = 2;
            a6 = &v63;
            v63 = v42;
            v63.AlphaFormat = 1;
            v58 = 1;
            v43 = rgbFromColorref(gppalRGB, v41, a5);
            v44 = 1;
          }
          NearestIndexFromColorref = v43;
          if ( a2 == 2 && (a6->AlphaFormat & 1) != 0 )
          {
            v67 = 6;
            v45 = gppalRGB;
            v46 = ppalDefault;
          }
          else
          {
            v67 = 0;
            v45 = *(struct PALETTE **)(v59 + 1808);
            v46 = v71;
          }
          v60 = v45;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (__int64 *)&pxlo,
                                0LL,
                                v66,
                                v70,
                                (__int64)v45,
                                v41,
                                (__int64)v46,
                                v65,
                                v64,
                                0,
                                0) )
            goto LABEL_77;
          v57 = 1;
          *((_DWORD *)a1 + 1) = a2;
          *((struct _RECTL *)a1 + 6) = v77;
          if ( a2 == 4 )
          {
            *(_DWORD *)a1 |= 8u;
            v47 = 1;
            goto LABEL_71;
          }
          if ( a2 == 1 )
          {
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v70, v41, a5, 1LL);
            v48 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
            *(_DWORD *)a1 &= ~8u;
            *((_DWORD *)a1 + 51) = v48;
            v47 = *(_DWORD *)(v59 + 44) & 4;
            goto LABEL_63;
          }
          if ( a2 != 2 || !(unsigned int)bSpUpdateAlpha(a1, a6, 0) )
            goto LABEL_76;
          v49 = a6->AlphaFormat & 1;
          if ( !v49 || (unsigned int)bIsSourceBGRA((struct SURFACE *)v28) )
          {
            if ( !v44 )
            {
              if ( v49 )
                v47 = *(_DWORD *)(v59 + 44) & 2;
              else
                v47 = *(_DWORD *)(v59 + 44) & 1;
LABEL_63:
              if ( v47 )
                goto LABEL_71;
              goto LABEL_64;
            }
          }
          else if ( !v44 )
          {
            goto LABEL_76;
          }
          v47 = 0;
LABEL_64:
          if ( *(_WORD *)(v28 + 100) || (*(_BYTE *)(v28 + 102) & 0x20) != 0 )
          {
            if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v59) )
            {
              v50 = *(_DWORD *)(v28 + 116);
              if ( (v50 & 0x20) == 0 )
              {
                v51 = *(HSURF *)(v28 + 32);
                *(_DWORD *)(v28 + 116) = v50 | 0x20;
                pConvertDfbSurfaceToDibPostNKAPC(v51);
              }
            }
            else
            {
              bConvertDfbDcToDib((struct XDCOBJ *)v73);
            }
            v28 = *(_QWORD *)(v73[0] + 496LL);
          }
LABEL_71:
          vSpDirectDriverAccess(v68, 0LL);
          v52 = v47 == 0;
          v53 = v72;
          bSpCreateShape(
            a1,
            &gptlZero,
            (struct _SURFOBJ *)((v28 + 24) & -(__int64)(v28 != 0)),
            pxlo,
            &v77,
            v60,
            v67,
            v52,
            v72);
          vSpDirectDriverAccess(v68, 1LL);
          v54 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v54 )
          {
            if ( v58 )
            {
              if ( (*(_DWORD *)a1 & 0x40) != 0 )
                *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
              else
                vSpUpdatePerPixelAlphaFromColorKey(v54, NearestIndexFromColorref, v53, 0LL);
            }
            goto LABEL_77;
          }
LABEL_76:
          vSpDeleteShape(a1);
          *((_DWORD *)a1 + 1) = 4;
          v57 = 0;
LABEL_77:
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v70);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
        }
      }
    }
  }
  v23 = v57;
LABEL_81:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v73);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v74);
  return v23;
}
