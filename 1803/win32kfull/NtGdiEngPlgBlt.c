/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C0283C60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C011EED0 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C011F4AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C011F51C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C011F8C0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C011FA1C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C01205CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0120690 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C01206BC (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0120850 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        CLIPOBJ *a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        unsigned __int64 a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v14; // rsi
  __int128 *v16; // r14
  __int64 v17; // r15
  struct _XLATEOBJ *v18; // rdx
  int v19; // ecx
  RECTL *prcl; // r15
  XLATEOBJ *pxlo; // rdx
  unsigned int v22; // edi
  SURFOBJ *v23; // r13
  struct _RECTL *v24; // rax
  SURFOBJ *v25; // r14
  COLORADJUSTMENT *pca; // [rsp+28h] [rbp-160h]
  SURFOBJ *psoTrga; // [rsp+60h] [rbp-128h]
  struct _SURFOBJ *v30; // [rsp+68h] [rbp-120h]
  unsigned int v31; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v32; // [rsp+74h] [rbp-114h] BYREF
  COLORADJUSTMENT *v33; // [rsp+78h] [rbp-110h]
  POINTL *pptl; // [rsp+80h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+88h] [rbp-100h]
  SURFOBJ *psoSrc; // [rsp+90h] [rbp-F8h] BYREF
  int v37; // [rsp+98h] [rbp-F0h]
  RECTL *v38; // [rsp+A0h] [rbp-E8h] BYREF
  SURFOBJ *psoMsk; // [rsp+A8h] [rbp-E0h] BYREF
  int v40; // [rsp+B0h] [rbp-D8h]
  struct _SURFOBJ *v41; // [rsp+B8h] [rbp-D0h]
  struct _POINTL *v42; // [rsp+C0h] [rbp-C8h] BYREF
  CLIPOBJ *v43; // [rsp+C8h] [rbp-C0h]
  struct UMPDOBJ *v44; // [rsp+D0h] [rbp-B8h]
  struct _CLIPOBJ *v45; // [rsp+D8h] [rbp-B0h]
  POINTL pptlBrushOrg; // [rsp+E0h] [rbp-A8h] BYREF
  SURFOBJ *v47; // [rsp+E8h] [rbp-A0h] BYREF
  int v48; // [rsp+F0h] [rbp-98h]
  struct _POINTL v49; // [rsp+F8h] [rbp-90h] BYREF
  __int128 v50; // [rsp+100h] [rbp-88h] BYREF
  __int64 v51; // [rsp+110h] [rbp-78h]
  struct _RECTL v52; // [rsp+118h] [rbp-70h] BYREF
  struct _RECTL v53; // [rsp+128h] [rbp-60h] BYREF
  POINTFIX pptfx[2]; // [rsp+138h] [rbp-50h] BYREF
  __int64 v55; // [rsp+148h] [rbp-40h]

  v41 = a3;
  v45 = a4;
  v43 = a5;
  pco = a5;
  v33 = a6;
  v42 = a7;
  v38 = a9;
  pptl = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v44 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&v47, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMsk, v41, v14);
  psoTrga = v47;
  if ( !v47 || !psoSrc || !a9 || !a8 )
    goto LABEL_28;
  CaptureRECTL(&v38, &v52);
  v16 = (__int128 *)v33;
  if ( v33 )
  {
    if ( (unsigned __int64)v33 >= MmUserProbeAddress )
      v16 = (__int128 *)MmUserProbeAddress;
    v50 = *v16;
    v51 = *((_QWORD *)v16 + 2);
    v16 = &v50;
    v33 = (COLORADJUSTMENT *)&v50;
  }
  CapturePOINTL(&pptl, &v49);
  CapturePOINTL(&v42, &pptlBrushOrg);
  if ( a8 + 24 < a8 || a8 + 24 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)&pptfx[0].x = *(_OWORD *)a8;
  v55 = *(_QWORD *)(a8 + 16);
  v17 = (__int64)v43;
  pco = UMPDOBJ::GetDDIOBJ(v14, a4, &psoTrga->sizlBitmap);
  v18 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, v17);
  v30 = (struct _SURFOBJ *)v18;
  v19 = 1;
  prcl = v38;
  if ( v38 && (v38->left > v38->right || v38->top > v38->bottom) )
    v19 = 0;
  if ( !v19 || !(unsigned int)bCheckXlate(psoSrc, v18) )
  {
LABEL_28:
    v22 = 0;
LABEL_29:
    v25 = psoTrga;
    goto LABEL_30;
  }
  v22 = 1;
  v23 = psoMsk;
  if ( psoMsk )
  {
    v22 = bCheckSurfaceRectSize(psoSrc, prcl, 0LL, &v32, &v31);
    if ( v22 )
    {
      v24 = pRect(pptl, &v53, v32, v31);
      v22 = v23->iBitmapFormat == 1;
      if ( v23->iBitmapFormat == 1 )
        v22 = bCheckSurfaceRect(v23, v24, 0LL);
    }
    pxlo = (XLATEOBJ *)v30;
  }
  if ( !v22 )
    goto LABEL_29;
  pca = (COLORADJUSTMENT *)v16;
  v25 = psoTrga;
  v22 = EngPlgBlt(psoTrga, psoSrc, psoMsk, pco, pxlo, pca, &pptlBrushOrg, pptfx, prcl, pptl, iMode);
LABEL_30:
  if ( v40 )
    EngUnlockSurface(psoMsk);
  if ( v37 )
    EngUnlockSurface(psoSrc);
  if ( v48 )
    EngUnlockSurface(v25);
  if ( v14 )
    --*((_DWORD *)v14 + 105);
  return v22;
}
