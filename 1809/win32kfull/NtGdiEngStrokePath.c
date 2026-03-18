/*
 * XREFs of NtGdiEngStrokePath @ 0x1C0297A80
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
 *     EngStrokePath @ 0x1C013BB90 (EngStrokePath.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01484C4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C015EC68 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0161FF4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016214C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C0295228 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02955E8 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0295710 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngStrokePath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        struct _BRUSHOBJ *a5,
        POINTL *a6,
        LINEATTRS *a7,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v14; // r15
  struct _PATHOBJ *v15; // r12
  BRUSHOBJ *pbo; // r14
  unsigned int v17; // ebx
  LINEATTRS *plineattrs; // rsi
  unsigned __int64 v19; // rax
  XFORMOBJ *v20; // r13
  PFLOAT_LONG pstyle; // rcx
  struct _CLIPOBJ *DDIOBJ; // [rsp+40h] [rbp-1D8h]
  LINEATTRS *v23; // [rsp+48h] [rbp-1D0h] BYREF
  POINTL *pptlBrushOrg; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-1C0h]
  struct UMPDOBJ *v26; // [rsp+60h] [rbp-1B8h]
  struct _PATHOBJ *v27; // [rsp+68h] [rbp-1B0h]
  SURFOBJ *v28; // [rsp+70h] [rbp-1A8h]
  struct _CLIPOBJ *v29; // [rsp+78h] [rbp-1A0h]
  __int64 v30; // [rsp+80h] [rbp-198h]
  struct _POINTL v31; // [rsp+88h] [rbp-190h] BYREF
  SURFOBJ *pso[8]; // [rsp+90h] [rbp-188h] BYREF
  struct _BRUSHOBJ v33; // [rsp+D0h] [rbp-148h] BYREF
  struct _LINEATTRS v34; // [rsp+E8h] [rbp-130h] BYREF
  _BYTE v35[168]; // [rsp+110h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1B8h] [rbp-60h]

  v25 = a4;
  v29 = a3;
  v30 = a4;
  pptlBrushOrg = a6;
  v23 = a7;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v14 = pso[0];
  v28 = pso[0];
  v15 = (struct _PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a2);
  v27 = v15;
  pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a5);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(a5, &v33);
  if ( v14 && pbo && v15 && v23 && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v31);
    v17 = bCaptureLINEATTRS(&v23, &v34);
    plineattrs = v23;
    if ( v17 )
    {
      if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 && (v23->fl & 1) != 0 && !a3 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
            1834);
        v17 = 0;
      }
      if ( v17 )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v14->sizlBitmap);
        v19 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, v25);
        v20 = (XFORMOBJ *)v19;
        if ( (plineattrs->fl & 1) != 0 )
          v17 &= -(v19 != 0);
        if ( v17
          && (unsigned int)bCheckSurfacePath(v14, v15, DDIOBJ)
          && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1) )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v35, v14, DDIOBJ, 0LL);
          v17 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v35)
             && EngStrokePath(v14, v15, pco, v20, pbo, pptlBrushOrg, plineattrs, mix);
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v35);
        }
        else
        {
          v17 = 0;
        }
        pstyle = plineattrs->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  else
  {
    v17 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v17;
}
