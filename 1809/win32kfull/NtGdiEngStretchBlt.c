/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C008ED60
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C0051160 (EngStretchBlt.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C008F440 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C008F48C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C008F4AC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C008F57C (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C008FCA0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C0147D08 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0147E8C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C015EC68 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0161FF4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016214C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
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
        ULONG iMode)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v14; // ebx
  struct _W32THREAD *v15; // rsi
  struct _W32THREAD **ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  SURFOBJ *v19; // r13
  SURFOBJ *v20; // r12
  __int128 *v21; // r14
  struct _XLATEOBJ *v22; // rdx
  struct _RECTL *v23; // r10
  unsigned int v24; // edi
  struct _RECTL *v25; // rdx
  RECTL *v26; // r9
  RECTL *prclDest; // rdi
  BOOL v28; // eax
  int pca; // [rsp+28h] [rbp-2D0h]
  SURFOBJ *psoMaska; // [rsp+60h] [rbp-298h]
  RECTL *v32; // [rsp+68h] [rbp-290h] BYREF
  RECTL *prclSrc; // [rsp+70h] [rbp-288h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-280h] BYREF
  unsigned int v35; // [rsp+7Ch] [rbp-27Ch] BYREF
  COLORADJUSTMENT *v36; // [rsp+80h] [rbp-278h]
  POINTL *pptlMask; // [rsp+88h] [rbp-270h] BYREF
  POINTL *pptlHTOrg; // [rsp+90h] [rbp-268h] BYREF
  XLATEOBJ *pxlo; // [rsp+98h] [rbp-260h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+A0h] [rbp-258h]
  struct _CLIPOBJ *v41; // [rsp+A8h] [rbp-250h]
  __int64 v42; // [rsp+B0h] [rbp-248h]
  struct UMPDOBJ *v43; // [rsp+B8h] [rbp-240h]
  SURFOBJ *v44; // [rsp+C0h] [rbp-238h]
  struct _POINTL v45; // [rsp+C8h] [rbp-230h] BYREF
  struct _POINTL v46; // [rsp+D0h] [rbp-228h] BYREF
  _QWORD v47[8]; // [rsp+E0h] [rbp-218h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-1D8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+160h] [rbp-198h] BYREF
  __int128 v50; // [rsp+1A0h] [rbp-158h] BYREF
  __int64 v51; // [rsp+1B0h] [rbp-148h]
  struct _RECTL v52; // [rsp+1B8h] [rbp-140h] BYREF
  struct _RECTL v53; // [rsp+1C8h] [rbp-130h] BYREF
  struct _RECTL v54; // [rsp+1D8h] [rbp-120h] BYREF
  _BYTE v55[168]; // [rsp+1F0h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+298h] [rbp-60h]

  v41 = a4;
  DDIOBJ = a4;
  v42 = a5;
  v36 = a6;
  pptlHTOrg = a7;
  v32 = a8;
  prclSrc = a9;
  pptlMask = a10;
  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (struct _W32THREAD **)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
  }
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(v15);
  v43 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 0LL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v47, a3, ThreadCurrentObj);
  v19 = psoDest[0];
  v44 = psoDest[0];
  v20 = psoSrc[0];
  pxlo = (XLATEOBJ *)psoSrc[0];
  psoMaska = (SURFOBJ *)v47[0];
  if ( !pptlHTOrg && iMode == 4 )
    goto LABEL_23;
  if ( psoDest[0] && psoSrc[0] && v32 && prclSrc )
  {
    CaptureRECTL(&v32, &v52);
    CapturePOINTL(&pptlMask, &v45);
    CaptureRECTL(&prclSrc, &v53);
    v21 = (__int128 *)v36;
    if ( v36 )
    {
      if ( (unsigned __int64)v36 >= MmUserProbeAddress )
        v21 = (__int128 *)MmUserProbeAddress;
      v50 = *v21;
      v51 = *((_QWORD *)v21 + 2);
      v21 = &v50;
      v36 = (COLORADJUSTMENT *)&v50;
    }
    CapturePOINTL(&pptlHTOrg, &v46);
    if ( !(unsigned int)bCheckDestSurfaceOverlap(v19, v32) )
    {
      v14 = 1;
LABEL_23:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v47);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
      return v14;
    }
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v41, &v19->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(ThreadCurrentObj, v42);
    if ( (unsigned int)bOrder(prclSrc) && (unsigned int)bCheckXlate(v20, v22) )
    {
      v24 = 1;
      if ( psoMaska )
      {
        v24 = bCheckSurfaceRectSize(v20, v23, 0LL, &v35, &v34, pca);
        if ( v24 )
        {
          v25 = pRect(pptlMask, &v54, v35, v34);
          v24 = psoMaska->iBitmapFormat == 1;
          if ( psoMaska->iBitmapFormat == 1 )
            v24 = bCheckSurfaceRect(psoMaska, v25, 0LL);
        }
      }
    }
    else
    {
      v24 = 0;
    }
    if ( v24 )
    {
      v26 = 0LL;
      prclDest = v32;
      if ( iMode == 4 )
        v26 = v32;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v55, v19, DDIOBJ, v26);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v55)
        || (v28 = EngStretchBlt(
                    v19,
                    v20,
                    psoMaska,
                    pco,
                    pxlo,
                    (COLORADJUSTMENT *)v21,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode),
            v24 = 1,
            !v28) )
      {
        v24 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v55);
    }
  }
  else
  {
    v24 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v47);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v24;
}
