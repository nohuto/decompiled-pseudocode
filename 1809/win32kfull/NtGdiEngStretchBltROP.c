/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C0147ED0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C008F440 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C008F48C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C008F4AC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C008F57C (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C008FADC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C008FCA0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngStretchBltROP @ 0x1C00A05D0 (EngStretchBltROP.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C0147D08 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0147E8C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01484C4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C015EC68 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0161FF4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016214C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C0295594 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  POINTL *ThreadCurrentObj; // rsi
  unsigned int v17; // ebx
  struct _SURFOBJ *v19; // r14
  SURFOBJ *v20; // r13
  __int128 *pca; // r15
  struct _XLATEOBJ *v22; // r8
  DWORD v23; // r9d
  struct _SURFOBJ *v24; // r10
  DWORD v25; // r14d
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // edi
  struct _RECTL *v29; // rax
  BRUSHOBJ *pbo; // r14
  RECTL *v31; // r9
  RECTL *prclDest; // rdi
  BOOL v33; // eax
  int v34; // [rsp+78h] [rbp-2C0h]
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-2B8h]
  RECTL *prclSrc; // [rsp+88h] [rbp-2B0h] BYREF
  SURFOBJ *psoDest; // [rsp+90h] [rbp-2A8h]
  struct _BRUSHOBJ *v38; // [rsp+98h] [rbp-2A0h]
  RECTL *v39; // [rsp+A0h] [rbp-298h] BYREF
  POINTL *pptlMask; // [rsp+A8h] [rbp-290h] BYREF
  DWORD v41; // [rsp+B0h] [rbp-288h]
  unsigned int v42; // [rsp+B4h] [rbp-284h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp-280h] BYREF
  COLORADJUSTMENT *v44; // [rsp+C0h] [rbp-278h]
  XLATEOBJ *pxlo; // [rsp+C8h] [rbp-270h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+D0h] [rbp-268h]
  struct _CLIPOBJ *v47; // [rsp+D8h] [rbp-260h]
  __int64 v48; // [rsp+E0h] [rbp-258h]
  POINTL *pptlHTOrg[2]; // [rsp+E8h] [rbp-250h] BYREF
  struct _POINTL v50; // [rsp+F8h] [rbp-240h] BYREF
  struct _POINTL v51; // [rsp+100h] [rbp-238h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+110h] [rbp-228h] BYREF
  _QWORD v53[8]; // [rsp+150h] [rbp-1E8h] BYREF
  struct _SURFOBJ *v54[8]; // [rsp+190h] [rbp-1A8h] BYREF
  struct _BRUSHOBJ v55; // [rsp+1D0h] [rbp-168h] BYREF
  __int128 v56; // [rsp+1E8h] [rbp-150h] BYREF
  __int64 v57; // [rsp+1F8h] [rbp-140h]
  struct _RECTL v58; // [rsp+200h] [rbp-138h] BYREF
  struct _RECTL v59; // [rsp+210h] [rbp-128h] BYREF
  struct _RECTL v60; // [rsp+220h] [rbp-118h] BYREF
  _BYTE v61[168]; // [rsp+230h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+2D8h] [rbp-60h]

  v47 = a4;
  psoDest = a3;
  DDIOBJ = a4;
  v48 = a5;
  v44 = a6;
  pptlHTOrg[0] = a7;
  v39 = a8;
  prclSrc = a9;
  pptlMask = a10;
  v38 = a12;
  v41 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = (POINTL *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  pptlHTOrg[1] = ThreadCurrentObj;
  v17 = 0;
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount((UMPDOBJ *)ThreadCurrentObj) )
        return 0LL;
    }
    else
    {
      ++ThreadCurrentObj[52].y;
    }
  }
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v54, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v53, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, psoDest, (struct _SURFOBJ **)ThreadCurrentObj);
  v19 = v54[0];
  psoDest = v54[0];
  psoSrc = (SURFOBJ *)v53[0];
  v20 = psoMask[0];
  pxlo = (XLATEOBJ *)psoMask[0];
  if ( !a7 && iMode == 4 )
    goto LABEL_20;
  if ( v54[0] && v53[0] && v39 && prclSrc )
  {
    CaptureRECTL(&v39, &v58);
    CaptureRECTL(&prclSrc, &v59);
    CapturePOINTL(&pptlMask, &v50);
    CapturePOINTL(pptlHTOrg, &v51);
    pca = (__int128 *)v44;
    if ( v44 )
    {
      if ( (unsigned __int64)v44 >= MmUserProbeAddress )
        pca = (__int128 *)MmUserProbeAddress;
      v56 = *pca;
      v57 = *((_QWORD *)pca + 2);
      pca = &v56;
      v44 = (COLORADJUSTMENT *)&v56;
    }
    if ( !bCheckDestSurfaceOverlap(v19, v39) )
    {
      v17 = 1;
LABEL_20:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v53);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
      UMPDOBJ::vDecrementEngCallRecursionCount((UMPDOBJ *)ThreadCurrentObj);
      return v17;
    }
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)ThreadCurrentObj, v47, &v19->sizlBitmap);
    v22 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v48);
    pxlo = v22;
    if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && !bOrder(prclSrc) )
    {
      v24 = psoSrc;
    }
    else if ( (unsigned int)bCheckXlate(psoSrc, v22) )
    {
      v25 = v23 >> 8;
      v26 = (unsigned __int8)v23;
      v34 = (unsigned __int8)v23;
      if ( (unsigned __int8)v23 == BYTE1(v23) || v20 )
        goto LABEL_28;
      v27 = PROBEDISPATBRUSH(v38);
      v24 = psoSrc;
      v23 = rop4;
      if ( v27 )
      {
        v26 = v34;
LABEL_28:
        v28 = 1;
        goto LABEL_31;
      }
    }
    v28 = 0;
    v25 = v41 >> 8;
    v26 = (unsigned __int8)v41;
LABEL_31:
    if ( v26 != (unsigned __int8)v25 && (!v20 || !pptlMask) )
      v28 = 0;
    if ( v28 )
    {
      if ( v23 == 43724 )
      {
        if ( v20 )
        {
          v28 = bCheckSurfaceRectSize(v24, prclSrc, 0LL, &v43, &v42);
          if ( v28 )
          {
            v29 = pRect(pptlMask, &v60, v43, v42);
            v28 = v20->iBitmapFormat == 1;
            if ( v20->iBitmapFormat == 1 )
              v28 = bCheckSurfaceRect(v20, v29, 0LL);
          }
        }
      }
    }
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)v38);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(v38, &v55);
    if ( v28 )
    {
      v31 = 0LL;
      prclDest = v39;
      if ( iMode == 4 )
        v31 = v39;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v61, psoDest, DDIOBJ, v31);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v61)
        || (v33 = EngStretchBltROP(
                    psoDest,
                    psoSrc,
                    v20,
                    pco,
                    pxlo,
                    (COLORADJUSTMENT *)pca,
                    pptlHTOrg[0],
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode,
                    pbo,
                    rop4),
            v28 = 1,
            !v33) )
      {
        v28 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v61);
    }
    goto LABEL_51;
  }
  v28 = 0;
LABEL_51:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v53);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v54);
  UMPDOBJ::vDecrementEngCallRecursionCount((UMPDOBJ *)ThreadCurrentObj);
  return v28;
}
