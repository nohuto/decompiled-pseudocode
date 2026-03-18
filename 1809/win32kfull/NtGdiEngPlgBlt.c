/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C02972D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C008F440 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
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
 *     EngPlgBlt @ 0x1C0270A50 (EngPlgBlt.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v17; // r15
  SURFOBJ *v18; // r13
  __int128 *pca; // r14
  struct tagSIZE *v20; // r10
  __int64 v21; // rsi
  struct _POINTL *v22; // rdx
  int v23; // ecx
  RECTL *prcl; // rsi
  struct _POINTL *pxlo; // rdx
  unsigned int v26; // ebx
  struct _RECTL *v27; // rax
  struct _POINTL *v28; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned int v29; // [rsp+68h] [rbp-1D0h] BYREF
  unsigned int v30; // [rsp+6Ch] [rbp-1CCh] BYREF
  COLORADJUSTMENT *v31; // [rsp+70h] [rbp-1C8h]
  RECTL *v32; // [rsp+78h] [rbp-1C0h] BYREF
  POINTL *pptl; // [rsp+80h] [rbp-1B8h] BYREF
  CLIPOBJ *pco; // [rsp+88h] [rbp-1B0h]
  SURFOBJ *psoTrg; // [rsp+90h] [rbp-1A8h]
  struct _CLIPOBJ *v36; // [rsp+98h] [rbp-1A0h]
  CLIPOBJ *v37; // [rsp+A0h] [rbp-198h]
  struct UMPDOBJ *v38; // [rsp+A8h] [rbp-190h]
  SURFOBJ *v39; // [rsp+B0h] [rbp-188h]
  SURFOBJ *v40; // [rsp+B8h] [rbp-180h]
  struct _CLIPOBJ *v41; // [rsp+C0h] [rbp-178h]
  POINTL pptlBrushOrg; // [rsp+C8h] [rbp-170h] BYREF
  struct _POINTL v43; // [rsp+D0h] [rbp-168h] BYREF
  SURFOBJ *psoMsk[8]; // [rsp+E0h] [rbp-158h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-118h] BYREF
  _QWORD v46[8]; // [rsp+160h] [rbp-D8h] BYREF
  __int128 v47; // [rsp+1A0h] [rbp-98h] BYREF
  __int64 v48; // [rsp+1B0h] [rbp-88h]
  struct _RECTL v49; // [rsp+1B8h] [rbp-80h] BYREF
  struct _RECTL v50; // [rsp+1C8h] [rbp-70h] BYREF
  POINTFIX pptfx[2]; // [rsp+1D8h] [rbp-60h] BYREF
  __int64 v52; // [rsp+1E8h] [rbp-50h]

  v36 = a4;
  v41 = a4;
  v37 = a5;
  pco = a5;
  v31 = a6;
  v28 = a7;
  v32 = a9;
  pptl = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v38 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v46, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk, a3, (struct _SURFOBJ **)ThreadCurrentObj);
  psoTrg = (SURFOBJ *)v46[0];
  v17 = psoSrc[0];
  v39 = psoSrc[0];
  v18 = psoMsk[0];
  v40 = psoMsk[0];
  if ( !v46[0] || !psoSrc[0] || !v32 || !a8 )
    goto LABEL_32;
  CaptureRECTL(&v32, &v49);
  pca = (__int128 *)v31;
  if ( v31 )
  {
    if ( (unsigned __int64)v31 >= MmUserProbeAddress )
      pca = (__int128 *)MmUserProbeAddress;
    v47 = *pca;
    v48 = *((_QWORD *)pca + 2);
    pca = &v47;
    v31 = (COLORADJUSTMENT *)&v47;
  }
  CapturePOINTL(&pptl, &v43);
  CapturePOINTL(&v28, &pptlBrushOrg);
  if ( a8 + 24 < a8 || a8 + 24 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)&pptfx[0].x = *(_OWORD *)a8;
  v52 = *(_QWORD *)(a8 + 16);
  v21 = (__int64)v37;
  pco = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v36, v20 + 4);
  v22 = (struct _POINTL *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v21);
  v28 = v22;
  v23 = 1;
  prcl = v32;
  if ( v32 && (v32->left > v32->right || v32->top > v32->bottom) )
    v23 = 0;
  if ( v23 && (unsigned int)bCheckXlate(v17, (struct _XLATEOBJ *)v22) )
  {
    v26 = 1;
    if ( v18 )
    {
      v26 = bCheckSurfaceRectSize(v17, prcl, 0LL, &v30, &v29);
      if ( v26 )
      {
        v27 = pRect(pptl, &v50, v30, v29);
        v26 = v18->iBitmapFormat == 1;
        if ( v18->iBitmapFormat == 1 )
          v26 = bCheckSurfaceRect(v18, v27, 0LL);
      }
      pxlo = v28;
    }
    if ( v26 )
      v26 = EngPlgBlt(
              psoTrg,
              v17,
              v18,
              pco,
              (XLATEOBJ *)pxlo,
              (COLORADJUSTMENT *)pca,
              &pptlBrushOrg,
              pptfx,
              prcl,
              pptl,
              iMode);
  }
  else
  {
LABEL_32:
    v26 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v46);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v26;
}
