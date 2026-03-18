/*
 * XREFs of NtGdiEngFillPath @ 0x1C0296830
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C008FADC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     EngFillPath @ 0x1C013EBE0 (EngFillPath.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01484C4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C0295228 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0295710 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

_BOOL8 __fastcall NtGdiEngFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  SURFOBJ *v14; // r14
  PATHOBJ *v15; // r15
  struct _CLIPOBJ *DDIOBJ; // rdi
  struct _BRUSHOBJ *v17; // rsi
  BOOL v18; // [rsp+40h] [rbp-B8h]
  struct _POINTL v19; // [rsp+50h] [rbp-A8h] BYREF
  SURFOBJ *pso[8]; // [rsp+60h] [rbp-98h] BYREF
  struct _BRUSHOBJ v21; // [rsp+A0h] [rbp-58h] BYREF

  v18 = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v14 = pso[0];
  v15 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a2);
  if ( v14 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v14->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v17 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a4);
  if ( !v17 )
    v17 = CaptureAndFakeBRUSHOBJ(a4, &v21);
  if ( v14 && v17 && v15 && DDIOBJ && !DDIOBJ->iMode && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v19);
    v18 = (unsigned int)bCheckSurfacePath(v14, v15, DDIOBJ)
       && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || v17->iSolidColor == -1)
       && EngFillPath(v14, v15, DDIOBJ, v17, pptlBrushOrg, mix, flOptions);
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v18;
}
