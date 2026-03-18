/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C02ABEE0
 * Callers:
 *     <none>
 * Callees:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00A17F8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C00A18E0 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00A1958 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00A19BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C00ED1A0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C014AFA8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C014AFD4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C014B158 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C014B19C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  SURFOBJ *v16; // r13
  __int128 *pca; // r14
  __int64 v18; // r15
  struct _XLATEOBJ *v19; // rdx
  int v20; // ecx
  RECTL *prcl; // r15
  XLATEOBJ *pxlo; // rdx
  unsigned int v23; // edi
  struct _RECTL *v24; // r9
  struct _SURFOBJ *v26; // [rsp+60h] [rbp-128h]
  unsigned int v27; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-11Ch] BYREF
  COLORADJUSTMENT *v29; // [rsp+70h] [rbp-118h]
  POINTL *pptl; // [rsp+78h] [rbp-110h] BYREF
  CLIPOBJ *pco; // [rsp+80h] [rbp-108h]
  SURFOBJ *psoSrc; // [rsp+88h] [rbp-100h] BYREF
  int v33; // [rsp+90h] [rbp-F8h]
  RECTL *v34; // [rsp+98h] [rbp-F0h] BYREF
  POINTL pptlBrushOrg; // [rsp+A0h] [rbp-E8h] BYREF
  SURFOBJ *psoMsk; // [rsp+A8h] [rbp-E0h] BYREF
  int v37; // [rsp+B0h] [rbp-D8h]
  struct _SURFOBJ *v38; // [rsp+B8h] [rbp-D0h]
  struct _POINTL v39; // [rsp+C0h] [rbp-C8h] BYREF
  struct _POINTL *v40; // [rsp+C8h] [rbp-C0h] BYREF
  struct _CLIPOBJ *v41; // [rsp+D0h] [rbp-B8h]
  CLIPOBJ *v42; // [rsp+D8h] [rbp-B0h]
  struct UMPDOBJ *v43; // [rsp+E0h] [rbp-A8h]
  struct _CLIPOBJ *v44; // [rsp+E8h] [rbp-A0h]
  SURFOBJ *psoTrg; // [rsp+F0h] [rbp-98h] BYREF
  int v46; // [rsp+F8h] [rbp-90h]
  __int128 v47; // [rsp+100h] [rbp-88h] BYREF
  __int64 v48; // [rsp+110h] [rbp-78h]
  struct _RECTL v49; // [rsp+118h] [rbp-70h] BYREF
  struct _RECTL v50; // [rsp+128h] [rbp-60h] BYREF
  POINTFIX pptfx[2]; // [rsp+138h] [rbp-50h] BYREF
  __int64 v52; // [rsp+148h] [rbp-40h]

  v41 = a4;
  v38 = a3;
  v44 = a4;
  v42 = a5;
  pco = a5;
  v29 = a6;
  v40 = a7;
  v34 = a9;
  pptl = a10;
  *(_QWORD *)&v49.left = 0LL;
  *(_QWORD *)&v49.right = 0LL;
  v39 = 0LL;
  pptlBrushOrg = 0LL;
  v47 = 0uLL;
  v48 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v43 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoTrg, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMsk, v38, v14);
  v16 = psoTrg;
  if ( !psoTrg || !psoSrc || !a9 || !a8 )
    goto LABEL_28;
  CaptureRECTL(&v34, &v49);
  pca = (__int128 *)v29;
  if ( v29 )
  {
    if ( (unsigned __int64)v29 >= MmUserProbeAddress )
      pca = (__int128 *)MmUserProbeAddress;
    v47 = *pca;
    v48 = *((_QWORD *)pca + 2);
    pca = &v47;
    v29 = (COLORADJUSTMENT *)&v47;
  }
  CapturePOINTL(&pptl, &v39);
  CapturePOINTL(&v40, &pptlBrushOrg);
  if ( a8 + 24 < a8 || a8 + 24 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)&pptfx[0].x = *(_OWORD *)a8;
  v52 = *(_QWORD *)(a8 + 16);
  v18 = (__int64)v42;
  pco = UMPDOBJ::GetDDIOBJ(v14, v41, &v16->sizlBitmap);
  v19 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, v18);
  v26 = (struct _SURFOBJ *)v19;
  v20 = 1;
  prcl = v34;
  if ( v34 && (v34->left > v34->right || v34->top > v34->bottom) )
    v20 = 0;
  if ( v20 && (unsigned int)bCheckXlate(psoSrc, v19) )
  {
    v23 = 1;
    if ( psoMsk )
    {
      *(_QWORD *)&v50.left = 0LL;
      *(_QWORD *)&v50.right = 0LL;
      v23 = bCheckSurfaceRectSize(psoSrc, prcl, 0LL, &v28, &v27);
      if ( v23 )
      {
        v24 = pRect(pptl, &v50, v28, v27);
        v23 = psoMsk->iBitmapFormat == 1;
        if ( psoMsk->iBitmapFormat == 1 )
          v23 = bCheckSurfaceRect(psoMsk, v24, 0LL);
      }
      pxlo = (XLATEOBJ *)v26;
    }
    if ( v23 )
      v23 = EngPlgBlt(v16, psoSrc, psoMsk, pco, pxlo, (COLORADJUSTMENT *)pca, &pptlBrushOrg, pptfx, prcl, pptl, iMode);
  }
  else
  {
LABEL_28:
    v23 = 0;
  }
  if ( v37 )
    EngUnlockSurface(psoMsk);
  if ( v33 )
    EngUnlockSurface(psoSrc);
  if ( v46 )
    EngUnlockSurface(v16);
  if ( v14 )
    --*((_DWORD *)v14 + 105);
  return v23;
}
