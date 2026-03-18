/*
 * XREFs of NtGdiEngCopyBits @ 0x1C01475B0
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C008F440 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C008F48C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C008F4AC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C008FCA0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C0147D08 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0147E8C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v9; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  SURFOBJ *v13; // r15
  SURFOBJ *v14; // r14
  RECTL *prclDest; // r12
  struct _CLIPOBJ *DDIOBJ; // rdi
  struct _XLATEOBJ *v17; // r13
  struct _RECTL *v18; // rax
  int pptlSrc; // [rsp+28h] [rbp-140h]
  POINTL *v20; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-130h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-12Ch] BYREF
  RECTL *v23; // [rsp+40h] [rbp-128h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-120h]
  __int64 v25; // [rsp+50h] [rbp-118h]
  struct UMPDOBJ *v26; // [rsp+58h] [rbp-110h]
  SURFOBJ *v27; // [rsp+60h] [rbp-108h]
  SURFOBJ *v28; // [rsp+68h] [rbp-100h]
  __int64 v29; // [rsp+70h] [rbp-F8h]
  struct _POINTL v30; // [rsp+78h] [rbp-F0h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+C0h] [rbp-A8h] BYREF
  struct _RECTL v33; // [rsp+100h] [rbp-68h] BYREF
  struct _RECTL v34; // [rsp+110h] [rbp-58h] BYREF

  v25 = a4;
  pco = a3;
  v29 = a4;
  v23 = a5;
  v20 = a6;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v26 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  v13 = psoDest[0];
  v28 = psoDest[0];
  v14 = psoSrc[0];
  v27 = psoSrc[0];
  if ( !psoDest[0] || !psoSrc[0] || psoDest[0]->iType || !v23 || !v20 )
  {
LABEL_18:
    v9 = 0;
    goto LABEL_19;
  }
  CaptureRECTL(&v23, &v33);
  CapturePOINTL(&v20, &v30);
  prclDest = v23;
  if ( bOrder(v23) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v13->sizlBitmap);
    pco = DDIOBJ;
    v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v25);
    if ( (unsigned int)bCheckSurfaceRectSize(v13, prclDest, DDIOBJ, &v22, &v21, pptlSrc)
      && (unsigned int)bCheckXlate(v14, v17) )
    {
      v18 = pRect(v20, &v34, v22, v21);
      v9 = bCheckSurfaceRect(v14, v18, 0LL);
      if ( v9 )
        v9 = EngCopyBits(v13, v14, pco, v17, prclDest, v20);
      goto LABEL_19;
    }
    goto LABEL_18;
  }
LABEL_19:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v9;
}
