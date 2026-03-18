/*
 * XREFs of NtGdiEngTextOut @ 0x1C008E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00875F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C00877C8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0087930 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     EngTextOut @ 0x1C0087B90 (EngTextOut.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C008FADC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C008FCA0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C008FD6C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00C5D50 (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01484C4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C015EC68 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0161FF4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016214C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v14; // r13
  unsigned __int64 v15; // r12
  BRUSHOBJ *pboFore; // r14
  BRUSHOBJ *pboOpaque; // r15
  RECTL *prclExtra; // r12
  struct _CLIPOBJ *DDIOBJ; // rcx
  unsigned int v20; // esi
  FONTOBJ *pfoa; // [rsp+58h] [rbp-210h]
  STROBJ *pstroa; // [rsp+60h] [rbp-208h]
  POINTL *pptlOrg; // [rsp+68h] [rbp-200h] BYREF
  RECTL *prclOpaque; // [rsp+70h] [rbp-1F8h] BYREF
  struct _CLIPOBJ *v27; // [rsp+78h] [rbp-1F0h]
  BRUSHOBJ *v28; // [rsp+80h] [rbp-1E8h]
  struct _RECTL *v29; // [rsp+88h] [rbp-1E0h] BYREF
  struct _BRUSHOBJ *v30; // [rsp+90h] [rbp-1D8h]
  struct _CLIPOBJ *v31; // [rsp+98h] [rbp-1D0h]
  struct UMPDOBJ *v32; // [rsp+A0h] [rbp-1C8h]
  SURFOBJ *v33; // [rsp+A8h] [rbp-1C0h]
  _BYTE v34[16]; // [rsp+B0h] [rbp-1B8h] BYREF
  struct _POINTL v35; // [rsp+C0h] [rbp-1A8h] BYREF
  SURFOBJ *pso[8]; // [rsp+D0h] [rbp-198h] BYREF
  struct _BRUSHOBJ v37; // [rsp+110h] [rbp-158h] BYREF
  struct _BRUSHOBJ v38; // [rsp+128h] [rbp-140h] BYREF
  struct _RECTL v39; // [rsp+140h] [rbp-128h] BYREF
  struct _RECTL v40; // [rsp+150h] [rbp-118h] BYREF
  _BYTE v41[168]; // [rsp+160h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+208h] [rbp-60h]

  v31 = a4;
  v27 = a4;
  v29 = a5;
  prclOpaque = a6;
  v30 = a8;
  pptlOrg = a9;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v32 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v14 = pso[0];
  v33 = pso[0];
  pstroa = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(ThreadCurrentObj, a2);
  v15 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a3);
  pfoa = (FONTOBJ *)v15;
  pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(a7, &v37);
  v28 = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(v30, &v38);
  if ( !v14 || !pstroa || !v15 || !pboFore || !pptlOrg )
    goto LABEL_26;
  CaptureRECTL(&v29, &v39);
  CaptureRECTL(&prclOpaque, &v40);
  CapturePOINTL(&pptlOrg, &v35);
  prclExtra = v29;
  if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 )
    prclExtra = 0LL;
  if ( ((DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v31, &v14->sizlBitmap),
         v27 = DDIOBJ,
         (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
     || pboFore->iSolidColor == -1)
    && (unsigned int)bCheckSurfaceRect(v14, prclOpaque, DDIOBJ) )
  {
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v34, (struct RFONT *)pfoa);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v34, ThreadCurrentObj, 0, 0, 0LL);
    ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v41, v14, v27, 0LL);
    if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v41)
      || (v20 = 1, !EngTextOut(v14, pstroa, pfoa, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix)) )
    {
      v20 = 0;
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v34, ThreadCurrentObj, 0LL, 0LL, 0LL);
    ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v41);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v34);
  }
  else
  {
LABEL_26:
    v20 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v20;
}
