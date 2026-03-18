/*
 * XREFs of NtGdiEngStrokePath @ 0x1C0284370
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngStrokePath @ 0x1C00E3150 (EngStrokePath.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C011F4AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C011F8C0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C011F92C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C011F9A4 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0120690 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C0120838 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C0281DFC (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C0282164 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0282284 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 NtGdiEngStrokePath(struct _SURFOBJ *a1, __int64 a2, struct _CLIPOBJ *a3, __int64 a4, struct _BRUSHOBJ *a5, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rdi
  PATHOBJ *v12; // r13
  struct _BRUSHOBJ *pbo; // r14
  SURFOBJ *v14; // r15
  unsigned int v15; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *DDIOBJ; // r12
  unsigned __int64 v18; // rax
  XFORMOBJ *v19; // r11
  PFLOAT_LONG pstyle; // rcx
  struct _POINTL v21; // [rsp+48h] [rbp-90h] BYREF
  SURFOBJ *pso; // [rsp+50h] [rbp-88h] BYREF
  int v23; // [rsp+58h] [rbp-80h]
  struct _BRUSHOBJ v24; // [rsp+60h] [rbp-78h] BYREF
  struct _LINEATTRS v25; // [rsp+78h] [rbp-60h] BYREF
  POINTL *pptlBrushOrg; // [rsp+108h] [rbp+30h] BYREF
  va_list va; // [rsp+108h] [rbp+30h]
  LINEATTRS *v29; // [rsp+110h] [rbp+38h] BYREF
  va_list va1; // [rsp+110h] [rbp+38h]
  __int64 mix; // [rsp+118h] [rbp+40h]
  va_list va2; // [rsp+120h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  pptlBrushOrg = va_arg(va1, POINTL *);
  va_copy(va2, va1);
  v29 = va_arg(va2, LINEATTRS *);
  mix = va_arg(va2, _QWORD);
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v12 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v10, a2);
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v10, (__int64)a5);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(a5, &v24);
  v14 = pso;
  if ( pso && pbo && v12 && v29 && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v21);
    v15 = bCaptureLINEATTRS((struct _LINEATTRS **)va1, &v25);
    plineattrs = v29;
    if ( v15 )
    {
      if ( (*((_DWORD *)v10 + 103) & 0x100) != 0 && (v29->fl & 1) != 0 && !a3 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
            1746);
        v15 = 0;
      }
      if ( v15 )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v10, a3, &v14->sizlBitmap);
        v18 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v10, a4);
        if ( (plineattrs->fl & 1) != 0 )
          v15 &= -(v18 != 0);
        v15 = v15
           && (unsigned int)bCheckSurfacePath(v14, v12, DDIOBJ)
           && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1)
           && EngStrokePath(v14, v12, DDIOBJ, v19, pbo, pptlBrushOrg, plineattrs, mix);
        pstyle = plineattrs->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  else
  {
    v15 = 0;
  }
  if ( v23 )
    EngUnlockSurface(v14);
  if ( v10 )
    --*((_DWORD *)v10 + 105);
  return v15;
}
