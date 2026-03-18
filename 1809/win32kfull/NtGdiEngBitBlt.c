/*
 * XREFs of NtGdiEngBitBlt @ 0x1C0147840
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C008F440 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C008F4AC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C008FADC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C008FCA0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C0147D08 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0147E8C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01484C4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  SURFOBJ *v16; // r15
  SURFOBJ *v17; // r14
  struct _RECTL *pbo; // rdi
  struct _XLATEOBJ *v19; // r12
  char v20; // al
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  POINTL *pptlSrc; // r12
  struct _RECTL *v24; // r11
  POINTL *pptlMask; // rsi
  int v26; // ecx
  unsigned int v27; // esi
  int prclTrg; // [rsp+28h] [rbp-210h]
  unsigned int v30; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-1D4h] BYREF
  SURFOBJ *psoTrg; // [rsp+68h] [rbp-1D0h]
  struct _RECTL *v33; // [rsp+70h] [rbp-1C8h]
  POINTL *v34; // [rsp+78h] [rbp-1C0h] BYREF
  RECTL *v35; // [rsp+80h] [rbp-1B8h] BYREF
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-1B0h]
  ROP4 v37; // [rsp+90h] [rbp-1A8h]
  POINTL *v38; // [rsp+98h] [rbp-1A0h] BYREF
  POINTL *pptlBrush; // [rsp+A0h] [rbp-198h] BYREF
  CLIPOBJ *pco; // [rsp+A8h] [rbp-190h]
  struct _CLIPOBJ *v41; // [rsp+B0h] [rbp-188h]
  struct UMPDOBJ *v42; // [rsp+B8h] [rbp-180h]
  SURFOBJ *v43; // [rsp+C0h] [rbp-178h]
  SURFOBJ *v44; // [rsp+C8h] [rbp-170h]
  struct _POINTL v45; // [rsp+D0h] [rbp-168h] BYREF
  struct _POINTL v46; // [rsp+D8h] [rbp-160h] BYREF
  struct _POINTL v47; // [rsp+E0h] [rbp-158h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+F0h] [rbp-148h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+130h] [rbp-108h] BYREF
  _QWORD v50[8]; // [rsp+170h] [rbp-C8h] BYREF
  struct _BRUSHOBJ v51; // [rsp+1B0h] [rbp-88h] BYREF
  struct _RECTL v52; // [rsp+1C8h] [rbp-70h] BYREF
  struct _RECTL v53; // [rsp+1D8h] [rbp-60h] BYREF
  struct _RECTL v54; // [rsp+1E8h] [rbp-50h] BYREF

  v41 = a4;
  pco = a4;
  pxlo = a5;
  v35 = a6;
  v34 = a7;
  v38 = a8;
  pptlBrush = a10;
  v37 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v42 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v50, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, (struct _SURFOBJ **)ThreadCurrentObj);
  psoTrg = (SURFOBJ *)v50[0];
  v16 = psoSrc[0];
  v43 = psoSrc[0];
  v17 = psoMask[0];
  v44 = psoMask[0];
  pbo = (struct _RECTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a9);
  if ( !pbo )
    pbo = (struct _RECTL *)CaptureAndFakeBRUSHOBJ(a9, &v51);
  v33 = pbo;
  v19 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, (__int64)pxlo);
  pxlo = v19;
  if ( (rop4 & 0xFFFF0000) != 0
    || !v35
    || (v20 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v20 & 0xE8) != 0)
    && (!pbo || pbo->left == -1 && !pptlBrush)
    || (v20 & 0xD4) != 0 && (!v34 || !v16)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !v17 && (!pbo || pbo->left != -1) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v50);
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0LL;
  }
  if ( !psoTrg )
    goto LABEL_37;
  CaptureRECTL(&v35, &v52);
  CapturePOINTL(&v34, &v45);
  CapturePOINTL(&v38, &v46);
  CapturePOINTL(&pptlBrush, &v47);
  pco = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v41, &psoTrg->sizlBitmap);
  if ( !(unsigned int)bCheckSurfaceRectSize(psoTrg, v35, pco, &v31, &v30, prclTrg)
    || !(unsigned int)bCheckXlate(v16, v19) )
  {
    goto LABEL_37;
  }
  v21 = v30;
  v22 = v31;
  pptlSrc = v34;
  v24 = v16 ? pRect(v34, &v53, v31, v30) : 0LL;
  pptlMask = v38;
  v33 = v17 ? pRect(v38, &v54, v22, v21) : 0LL;
  if ( !(unsigned int)bCheckSurfaceRect(v16, v24, 0LL) )
    goto LABEL_37;
  v26 = 1;
  if ( v17 )
  {
    v26 = v17->iBitmapFormat == 1;
    if ( v17->iBitmapFormat == 1 )
      v26 = bCheckSurfaceRect(v17, v33, 0LL);
  }
  if ( v26 )
    v27 = EngBitBlt(psoTrg, v16, v17, pco, pxlo, v35, pptlSrc, pptlMask, (BRUSHOBJ *)pbo, pptlBrush, rop4);
  else
LABEL_37:
    v27 = 0;
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v50);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v27;
}
