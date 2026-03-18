/*
 * XREFs of NtGdiEngTextOut @ 0x1C011EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000476C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007777C (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     EngTextOut @ 0x1C00AA120 (EngTextOut.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C011EED0 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C011F4AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C011F85C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C011F8C0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C011F9A4 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C011FA80 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C01202A0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C01205CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0120690 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C0120838 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v14; // rdi
  FONTOBJ *v15; // r13
  BRUSHOBJ *pboFore; // rsi
  BRUSHOBJ *pboOpaque; // r12
  SURFOBJ *v18; // r15
  RECTL *prclExtra; // r13
  struct _CLIPOBJ *DDIOBJ; // rdx
  unsigned int v21; // r14d
  POINTL *pptlOrg; // [rsp+58h] [rbp-100h] BYREF
  RECTL *prclOpaque; // [rsp+60h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+68h] [rbp-F0h]
  BRUSHOBJ *v27; // [rsp+70h] [rbp-E8h]
  struct _RECTL *v28; // [rsp+78h] [rbp-E0h] BYREF
  STROBJ *pstro; // [rsp+80h] [rbp-D8h]
  struct _CLIPOBJ *v30; // [rsp+88h] [rbp-D0h]
  struct UMPDOBJ *v31; // [rsp+90h] [rbp-C8h]
  FONTOBJ *pfo; // [rsp+98h] [rbp-C0h]
  _BYTE v33[16]; // [rsp+A0h] [rbp-B8h] BYREF
  SURFOBJ *pso; // [rsp+B0h] [rbp-A8h] BYREF
  int v35; // [rsp+B8h] [rbp-A0h]
  struct _POINTL v36; // [rsp+C0h] [rbp-98h] BYREF
  struct _BRUSHOBJ v37; // [rsp+C8h] [rbp-90h] BYREF
  struct _BRUSHOBJ v38; // [rsp+E0h] [rbp-78h] BYREF
  struct _RECTL v39; // [rsp+F8h] [rbp-60h] BYREF
  struct _RECTL v40; // [rsp+108h] [rbp-50h] BYREF

  v30 = a4;
  pco = a4;
  v28 = a5;
  prclOpaque = a6;
  pptlOrg = a9;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v31 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(v14, a2);
  v15 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v14, a3);
  pfo = v15;
  pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v14, a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(a7, &v37);
  v27 = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v14, a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(a8, &v38);
  v18 = pso;
  if ( !pso || !pstro || !v15 || !pboFore || !pptlOrg )
    goto LABEL_20;
  CaptureRECTL(&v28, &v39);
  CaptureRECTL(&prclOpaque, &v40);
  CapturePOINTL(&pptlOrg, &v36);
  prclExtra = v28;
  if ( (*((_DWORD *)v14 + 103) & 0x100) != 0 )
    prclExtra = 0LL;
  if ( ((DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v30, &v18->sizlBitmap),
         pco = DDIOBJ,
         (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
     || pboFore->iSolidColor == -1)
    && (unsigned int)bCheckSurfaceRect(v18, prclOpaque, DDIOBJ) )
  {
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v33, (struct RFONT *)pfo);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v33, v14, 0, 0, 0LL);
    v21 = EngTextOut(v18, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v33, v14, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v33);
  }
  else
  {
LABEL_20:
    v21 = 0;
  }
  if ( v35 )
    EngUnlockSurface(v18);
  --*((_DWORD *)v14 + 105);
  return v21;
}
