/*
 * XREFs of NtGdiEngStrokePath @ 0x1C02ACB30
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C005771C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C0057910 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0057F68 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C005812C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C014A1F8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C014A3D4 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     EngStrokePath @ 0x1C014BF20 (EngStrokePath.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA640 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AA9F8 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02AAB20 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 NtGdiEngStrokePath(struct _SURFOBJ *a1, __int64 a2, struct _CLIPOBJ *a3, __int64 a4, struct _BRUSHOBJ *a5, ...)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v13; // rdi
  PATHOBJ *v15; // r12
  struct _BRUSHOBJ *pbo; // r14
  SURFOBJ *v17; // r15
  unsigned int v18; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *DDIOBJ; // r13
  unsigned __int64 v21; // rax
  XFORMOBJ *v22; // r11
  PFLOAT_LONG pstyle; // rcx
  struct _POINTL v24; // [rsp+40h] [rbp-98h] BYREF
  struct UMPDOBJ *v25; // [rsp+48h] [rbp-90h]
  SURFOBJ *pso; // [rsp+50h] [rbp-88h] BYREF
  int v27; // [rsp+58h] [rbp-80h]
  struct _BRUSHOBJ v28; // [rsp+60h] [rbp-78h] BYREF
  struct _LINEATTRS v29; // [rsp+78h] [rbp-60h] BYREF
  POINTL *pptlBrushOrg; // [rsp+108h] [rbp+30h] BYREF
  va_list va; // [rsp+108h] [rbp+30h]
  LINEATTRS *v33; // [rsp+110h] [rbp+38h] BYREF
  va_list va1; // [rsp+110h] [rbp+38h]
  __int64 mix; // [rsp+118h] [rbp+40h]
  va_list va2; // [rsp+120h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  pptlBrushOrg = va_arg(va1, POINTL *);
  va_copy(va2, va1);
  v33 = va_arg(va2, LINEATTRS *);
  mix = va_arg(va2, _QWORD);
  v24 = 0LL;
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v25 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v15 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v13, a2);
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a5);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(a5, &v28);
  v17 = pso;
  if ( pso && pbo && v15 && v33 && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v24);
    v18 = bCaptureLINEATTRS((struct _LINEATTRS **)va1, &v29);
    plineattrs = v33;
    if ( v18 )
    {
      if ( (*((_DWORD *)v13 + 103) & 0x100) != 0 && (v33->fl & 1) != 0 && !a3 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
            1746);
        v18 = 0;
      }
      if ( v18 )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &v17->sizlBitmap);
        v21 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v13, a4);
        if ( (plineattrs->fl & 1) != 0 )
          v18 &= -(v21 != 0);
        v18 = v18
           && (unsigned int)bCheckSurfacePath(v17, v15, DDIOBJ)
           && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1)
           && EngStrokePath(v17, v15, DDIOBJ, v22, pbo, pptlBrushOrg, plineattrs, mix);
        pstyle = plineattrs->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  else
  {
    v18 = 0;
  }
  if ( v27 )
    EngUnlockSurface(v17);
  if ( v13 )
    --*((_DWORD *)v13 + 105);
  return v18;
}
