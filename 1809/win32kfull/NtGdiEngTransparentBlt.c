/*
 * XREFs of NtGdiEngTransparentBlt @ 0x1C0297DC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C008F440 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C008F48C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C008F4AC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C008FCA0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngTransparentBlt @ 0x1C0093A50 (EngTransparentBlt.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        RECTL *a5,
        RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v11; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  SURFOBJ *v15; // r14
  SURFOBJ *v16; // rsi
  RECTL *prclDst; // r12
  RECTL *prclSrc; // r15
  CLIPOBJ *DDIOBJ; // r13
  struct _XLATEOBJ *v20; // rdi
  RECTL *v21; // [rsp+40h] [rbp-128h] BYREF
  RECTL *v22; // [rsp+48h] [rbp-120h] BYREF
  __int64 v23; // [rsp+50h] [rbp-118h]
  struct UMPDOBJ *v24; // [rsp+58h] [rbp-110h]
  SURFOBJ *v25; // [rsp+60h] [rbp-108h]
  SURFOBJ *v26; // [rsp+68h] [rbp-100h]
  __int64 v27; // [rsp+70h] [rbp-F8h]
  struct _CLIPOBJ *v28; // [rsp+78h] [rbp-F0h]
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoDst[8]; // [rsp+C0h] [rbp-A8h] BYREF
  struct _RECTL v31; // [rsp+100h] [rbp-68h] BYREF
  struct _RECTL v32; // [rsp+110h] [rbp-58h] BYREF

  v23 = a4;
  v28 = a3;
  v27 = a4;
  v21 = a5;
  v22 = a6;
  v11 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v24 = ThreadCurrentObj;
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDst, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  v15 = psoDst[0];
  v26 = psoDst[0];
  v16 = psoSrc[0];
  v25 = psoSrc[0];
  if ( !psoDst[0] || !psoSrc[0] || !v21 || !v22 )
    goto LABEL_17;
  CaptureRECTL(&v22, &v31);
  CaptureRECTL(&v21, &v32);
  prclDst = v21;
  if ( !bOrder(v21) )
    goto LABEL_18;
  prclSrc = v22;
  if ( !bOrder(v22) )
    goto LABEL_18;
  DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v15->sizlBitmap);
  v20 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v23);
  if ( (unsigned int)bCheckSurfaceRect(v16, prclSrc, 0LL) && (unsigned int)bCheckXlate(v16, v20) )
    v11 = EngTransparentBlt(v15, v16, DDIOBJ, v20, prclDst, prclSrc, iTransColor, ulReserved);
  else
LABEL_17:
    v11 = 0;
LABEL_18:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDst);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v11;
}
