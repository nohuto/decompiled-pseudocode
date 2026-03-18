/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02976F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C008E934 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C008FADC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01484C4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C015EC68 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0161FF4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016214C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     EngStrokeAndFillPath @ 0x1C026CAE0 (EngStrokeAndFillPath.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C0295228 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02955E8 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0295710 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngStrokeAndFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        POINTL *a8,
        MIX mixFill,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v16; // r13
  PATHOBJ *v17; // rbx
  struct _CLIPOBJ *DDIOBJ; // r14
  BRUSHOBJ *pboStroke; // r15
  BRUSHOBJ *pboFill; // rsi
  unsigned int v21; // ebx
  LINEATTRS *plineattrs; // r12
  XFORMOBJ *v23; // rax
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v25; // [rsp+58h] [rbp-200h] BYREF
  POINTL *pptlBrushOrg; // [rsp+60h] [rbp-1F8h] BYREF
  XFORMOBJ *pxo; // [rsp+68h] [rbp-1F0h]
  struct _CLIPOBJ *v28; // [rsp+70h] [rbp-1E8h]
  BRUSHOBJ *v29; // [rsp+78h] [rbp-1E0h]
  BRUSHOBJ *v30; // [rsp+80h] [rbp-1D8h]
  XFORMOBJ *v31; // [rsp+88h] [rbp-1D0h]
  PATHOBJ *ppo; // [rsp+90h] [rbp-1C8h]
  struct UMPDOBJ *v33; // [rsp+98h] [rbp-1C0h]
  SURFOBJ *v34; // [rsp+A0h] [rbp-1B8h]
  struct _POINTL v35; // [rsp+A8h] [rbp-1B0h] BYREF
  SURFOBJ *pso[8]; // [rsp+B0h] [rbp-1A8h] BYREF
  struct _BRUSHOBJ v37; // [rsp+F0h] [rbp-168h] BYREF
  struct _BRUSHOBJ v38; // [rsp+108h] [rbp-150h] BYREF
  struct _LINEATTRS v39; // [rsp+120h] [rbp-138h] BYREF
  _BYTE v40[168]; // [rsp+150h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1F8h] [rbp-60h]

  v31 = a4;
  pxo = a4;
  v25 = a6;
  pptlBrushOrg = a8;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v33 = ThreadCurrentObj;
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
  v16 = pso[0];
  v34 = pso[0];
  v17 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a2);
  ppo = v17;
  if ( v16 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v16->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v28 = DDIOBJ;
  pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a5);
  if ( !pboStroke )
    pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v37);
  v29 = pboStroke;
  pboFill = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a7);
  if ( !pboFill )
    pboFill = CaptureAndFakeBRUSHOBJ(a7, &v38);
  v30 = pboFill;
  if ( v16 && pboStroke && pboFill && v17 && v25 && DDIOBJ && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v35);
    v21 = bCaptureLINEATTRS(&v25, &v39);
    plineattrs = v25;
    if ( v21 )
    {
      v23 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, (__int64)v31);
      pxo = v23;
      if ( (plineattrs->fl & 1) != 0 )
        v21 &= -(v23 != 0LL);
      if ( v21
        && (unsigned int)bCheckSurfacePath(v16, ppo, DDIOBJ)
        && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1) )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v40, v16, DDIOBJ, 0LL);
        v21 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v40)
           && EngStrokeAndFillPath(v16, ppo, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v40);
      }
      else
      {
        v21 = 0;
      }
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v21 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v21;
}
