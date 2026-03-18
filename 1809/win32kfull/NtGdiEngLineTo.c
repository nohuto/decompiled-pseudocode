/*
 * XREFs of NtGdiEngLineTo @ 0x1C0296EB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C008FADC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C008FCA0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngLineTo @ 0x1C00FD110 (EngLineTo.c)
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

__int64 __fastcall NtGdiEngLineTo(
        struct _SURFOBJ *a1,
        RECTL *a2,
        struct _BRUSHOBJ *a3,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  RECTL *ThreadCurrentObj; // rdi
  SURFOBJ *v16; // r14
  BRUSHOBJ *v17; // rsi
  struct _CLIPOBJ *DDIOBJ; // r15
  unsigned int v19; // ebx
  RECTL *prclBounds[4]; // [rsp+60h] [rbp-1A8h] BYREF
  SURFOBJ *pso[8]; // [rsp+80h] [rbp-188h] BYREF
  struct _BRUSHOBJ v22; // [rsp+C0h] [rbp-148h] BYREF
  struct _RECTL v23; // [rsp+D8h] [rbp-130h] BYREF
  struct _RECTL v24; // [rsp+E8h] [rbp-120h] BYREF
  _BYTE v25[168]; // [rsp+100h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1A8h] [rbp-60h]

  prclBounds[3] = a2;
  prclBounds[0] = a8;
  v23.left = x1;
  v23.top = y1;
  v23.right = x2;
  v23.bottom = y2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = (RECTL *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  prclBounds[1] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount((UMPDOBJ *)ThreadCurrentObj) )
        return 0LL;
    }
    else
    {
      ++ThreadCurrentObj[26].top;
    }
  }
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v16 = pso[0];
  prclBounds[2] = (RECTL *)pso[0];
  v17 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a3);
  if ( !v17 )
    v17 = CaptureAndFakeBRUSHOBJ(a3, &v22);
  if ( v16 && v17 )
  {
    CaptureRECTL(prclBounds, &v24);
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)ThreadCurrentObj, (struct _CLIPOBJ *)a2, &v16->sizlBitmap);
    v19 = bCheckSurfaceRect(v16, &v23, DDIOBJ);
    if ( v19 )
    {
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v25, v16, DDIOBJ, 0LL);
      v19 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v25)
         && EngLineTo(v16, pco, v17, x1, y1, x2, y2, prclBounds[0], mix);
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v25);
    }
  }
  else
  {
    v19 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::vDecrementEngCallRecursionCount((UMPDOBJ *)ThreadCurrentObj);
  return v19;
}
