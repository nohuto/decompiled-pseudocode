/*
 * XREFs of NtGdiEngAlphaBlend @ 0x1C0296030
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C004FC70 (EngAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C008F440 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C008F48C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C008F4AC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C008FCA0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ??$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z @ 0x1C0295180 (--$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        __int64 a4,
        RECTL *a5,
        RECTL *a6,
        __int64 a7)
{
  unsigned int v9; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  CLIPOBJ *v13; // rax
  BLENDOBJ *pBlendObj; // r14
  SURFOBJ *v15; // r13
  SURFOBJ *v16; // rsi
  RECTL *prclSrc; // r15
  RECTL *prclDest; // r12
  struct _CLIPOBJ *v19; // rdx
  struct _XLATEOBJ *v20; // rdi
  RECTL *v21; // [rsp+40h] [rbp-138h] BYREF
  RECTL *v22; // [rsp+48h] [rbp-130h] BYREF
  CLIPOBJ *pco; // [rsp+50h] [rbp-128h]
  __int64 v24; // [rsp+58h] [rbp-120h]
  __int64 v25; // [rsp+60h] [rbp-118h]
  struct UMPDOBJ *v26; // [rsp+68h] [rbp-110h]
  SURFOBJ *v27; // [rsp+70h] [rbp-108h]
  SURFOBJ *v28; // [rsp+78h] [rbp-100h]
  __int64 v29; // [rsp+80h] [rbp-F8h]
  __int64 v30; // [rsp+88h] [rbp-F0h]
  SURFOBJ *psoSrc[8]; // [rsp+90h] [rbp-E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+D0h] [rbp-A8h] BYREF
  struct _RECTL v33; // [rsp+110h] [rbp-68h] BYREF
  struct _RECTL v34; // [rsp+120h] [rbp-58h] BYREF

  v24 = a4;
  v25 = a3;
  v30 = a3;
  v29 = a4;
  v22 = a5;
  v21 = a6;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v26 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  v13 = (CLIPOBJ *)UMPDOBJ::GetDDIOBJ<_BLENDOBJ>((__int64)ThreadCurrentObj, a7);
  pBlendObj = (BLENDOBJ *)v13;
  pco = v13;
  v15 = psoDest[0];
  v28 = psoDest[0];
  v16 = psoSrc[0];
  v27 = psoSrc[0];
  if ( !psoDest[0] || !psoSrc[0] || !v13 || !v22 || !v21 )
    goto LABEL_18;
  CaptureRECTL(&v21, &v33);
  CaptureRECTL(&v22, &v34);
  prclSrc = v21;
  if ( !bOrder(v21) )
    goto LABEL_19;
  prclDest = v22;
  if ( !bOrder(v22) )
    goto LABEL_19;
  pco = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v19, &v15->sizlBitmap);
  v20 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v24);
  if ( (unsigned int)bCheckSurfaceRect(v16, prclSrc, 0LL) && (unsigned int)bCheckXlate(v16, v20) )
    v9 = EngAlphaBlend(v15, v16, pco, v20, prclDest, prclSrc, pBlendObj);
  else
LABEL_18:
    v9 = 0;
LABEL_19:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v9;
}
