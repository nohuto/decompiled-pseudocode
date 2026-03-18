/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C01498A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C005771C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0057F68 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0058050 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C00580A8 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00580C8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C005812C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0058198 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     EngStretchBltROP @ 0x1C010A420 (EngStretchBltROP.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0112580 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C014A1F8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C014A224 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C014A3A8 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C014A3D4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C014A3EC (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02AA9A4 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        unsigned int a13)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  CLIPOBJ *ThreadCurrentObj; // rax
  CLIPOBJ *v16; // rdi
  SURFOBJ *v17; // r13
  __int128 *v18; // r15
  struct _XLATEOBJ *v19; // r9
  unsigned int v20; // r14d
  int v21; // ecx
  int v22; // esi
  DWORD rop4; // r14d
  BRUSHOBJ *pbo; // rax
  unsigned int v25; // esi
  SURFOBJ *v27; // r14
  struct _RECTL *v28; // rax
  int pca; // [rsp+28h] [rbp-1B0h]
  RECTL *prclSrc; // [rsp+80h] [rbp-158h] BYREF
  SURFOBJ *psoMask; // [rsp+88h] [rbp-150h] BYREF
  int v32; // [rsp+90h] [rbp-148h]
  SURFOBJ *psoSrc; // [rsp+98h] [rbp-140h] BYREF
  int v34; // [rsp+A0h] [rbp-138h]
  struct _BRUSHOBJ *v35; // [rsp+A8h] [rbp-130h]
  POINTL *pptlMask; // [rsp+B0h] [rbp-128h] BYREF
  RECTL *prclDest; // [rsp+B8h] [rbp-120h] BYREF
  unsigned int v38; // [rsp+C0h] [rbp-118h]
  unsigned int v39; // [rsp+C4h] [rbp-114h] BYREF
  unsigned int v40; // [rsp+C8h] [rbp-110h] BYREF
  COLORADJUSTMENT *v41; // [rsp+D0h] [rbp-108h]
  CLIPOBJ *pco; // [rsp+D8h] [rbp-100h]
  XLATEOBJ *pxlo; // [rsp+E0h] [rbp-F8h]
  SURFOBJ *psoDest; // [rsp+E8h] [rbp-F0h] BYREF
  int v45; // [rsp+F0h] [rbp-E8h]
  struct _CLIPOBJ *v46; // [rsp+F8h] [rbp-E0h]
  __int64 v47; // [rsp+100h] [rbp-D8h]
  POINTL *pptlHTOrg; // [rsp+108h] [rbp-D0h] BYREF
  struct _SURFOBJ *v49; // [rsp+110h] [rbp-C8h]
  struct _SURFOBJ *v50; // [rsp+118h] [rbp-C0h]
  struct _POINTL v51; // [rsp+120h] [rbp-B8h] BYREF
  struct _POINTL v52; // [rsp+128h] [rbp-B0h] BYREF
  struct _BRUSHOBJ v53; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+148h] [rbp-90h] BYREF
  __int64 v55; // [rsp+158h] [rbp-80h]
  struct _RECTL v56; // [rsp+160h] [rbp-78h] BYREF
  struct _RECTL v57; // [rsp+170h] [rbp-68h] BYREF
  struct _RECTL v58; // [rsp+180h] [rbp-58h] BYREF

  v46 = a4;
  v50 = a3;
  v49 = a2;
  pxlo = (XLATEOBJ *)a4;
  v47 = a5;
  v41 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v35 = a12;
  v38 = a13;
  *(_QWORD *)&v56.left = 0LL;
  *(_QWORD *)&v56.right = 0LL;
  *(_QWORD *)&v57.left = 0LL;
  *(_QWORD *)&v57.right = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v54 = 0uLL;
  v55 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = (CLIPOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = ThreadCurrentObj;
  pco = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++ThreadCurrentObj[17].rclBounds.right;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, (struct UMPDOBJ *)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, v49, (struct UMPDOBJ *)v16);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, v50, (struct UMPDOBJ *)v16);
  if ( !a7 && iMode == 4 )
  {
    if ( v32 )
      EngUnlockSurface(psoMask);
    if ( v34 )
      EngUnlockSurface(psoSrc);
    if ( v45 )
      EngUnlockSurface(psoDest);
    --v16[17].rclBounds.right;
    return 0LL;
  }
  v17 = psoDest;
  if ( !psoDest || !psoSrc || !prclDest || !prclSrc )
  {
LABEL_33:
    v25 = 0;
LABEL_24:
    if ( v32 )
      EngUnlockSurface(psoMask);
    if ( v34 )
      EngUnlockSurface(psoSrc);
    if ( v45 )
      EngUnlockSurface(v17);
    if ( v16 )
      --v16[17].rclBounds.right;
    return v25;
  }
  CaptureRECTL(&prclDest, &v56);
  CaptureRECTL(&prclSrc, &v57);
  CapturePOINTL(&pptlMask, &v51);
  CapturePOINTL(&pptlHTOrg, &v52);
  v18 = (__int128 *)v41;
  if ( v41 )
  {
    if ( (unsigned __int64)v41 >= MmUserProbeAddress )
      v18 = (__int128 *)MmUserProbeAddress;
    v54 = *v18;
    v55 = *((_QWORD *)v18 + 2);
    v18 = &v54;
    v41 = (COLORADJUSTMENT *)&v54;
  }
  if ( bCheckDestSurfaceOverlap(v17, prclDest) )
  {
    memset(&v53, 0, sizeof(v53));
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v16, v46, &v17->sizlBitmap);
    v19 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v16, v47);
    pxlo = v19;
    if ( (((gajRop3[(unsigned __int8)a13] | gajRop3[BYTE1(a13)]) & 0xD4) == 0 || bOrder(prclSrc))
      && (unsigned int)bCheckXlate(psoSrc, v19) )
    {
      v20 = a13 >> 8;
      v21 = (unsigned __int8)a13;
      if ( (unsigned __int8)a13 == BYTE1(a13) || psoMask )
        goto LABEL_16;
      if ( (unsigned int)PROBEDISPATBRUSH(v35) )
      {
        v21 = (unsigned __int8)a13;
LABEL_16:
        v22 = 1;
LABEL_17:
        if ( v21 != (unsigned __int8)v20 && (!psoMask || !pptlMask) )
          v22 = 0;
        rop4 = a13;
        if ( v22 && a13 == 43724 )
        {
          v27 = psoMask;
          if ( psoMask )
          {
            *(_QWORD *)&v58.left = 0LL;
            *(_QWORD *)&v58.right = 0LL;
            v22 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v40, &v39, pca);
            if ( v22 )
            {
              v28 = pRect(pptlMask, &v58, v40, v39);
              v22 = v27->iBitmapFormat == 1;
              if ( v27->iBitmapFormat == 1 )
                v22 = bCheckSurfaceRect(v27, v28, 0LL);
            }
          }
          rop4 = a13;
        }
        pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v16, (__int64)v35);
        if ( !pbo )
          pbo = CaptureAndFakeBRUSHOBJ(v35, &v53);
        if ( v22 )
        {
          v25 = 1;
          if ( EngStretchBltROP(
                 v17,
                 psoSrc,
                 psoMask,
                 pco,
                 pxlo,
                 (COLORADJUSTMENT *)v18,
                 pptlHTOrg,
                 prclDest,
                 prclSrc,
                 pptlMask,
                 iMode,
                 pbo,
                 rop4) )
          {
            goto LABEL_24;
          }
        }
        goto LABEL_33;
      }
    }
    v22 = 0;
    v20 = v38 >> 8;
    v21 = (unsigned __int8)v38;
    goto LABEL_17;
  }
  if ( v32 )
    EngUnlockSurface(psoMask);
  if ( v34 )
    EngUnlockSurface(psoSrc);
  if ( v45 )
    EngUnlockSurface(v17);
  if ( v16 )
    --v16[17].rclBounds.right;
  return 1LL;
}
