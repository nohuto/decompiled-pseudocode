/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02AC350
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00A0FAC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C00A11A0 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00A17F8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00A19BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C014AFA8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C014B184 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     EngStrokeAndFillPath @ 0x1C014C680 (EngStrokeAndFillPath.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA190 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AA548 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA670 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 NtGdiEngStrokeAndFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        struct _BRUSHOBJ *a5,
        LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        ...)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v14; // rdi
  unsigned __int64 v16; // rbx
  SURFOBJ *v17; // r13
  struct _CLIPOBJ *DDIOBJ; // r14
  BRUSHOBJ *pboStroke; // r15
  struct _BRUSHOBJ *pboFill; // rsi
  unsigned int v21; // ebx
  LINEATTRS *plineattrs; // r12
  unsigned __int64 v23; // rax
  PATHOBJ *v24; // r11
  PFLOAT_LONG pstyle; // rcx
  XFORMOBJ *pxo; // [rsp+58h] [rbp-B0h]
  struct _POINTL v27; // [rsp+60h] [rbp-A8h] BYREF
  SURFOBJ *pso; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+70h] [rbp-98h]
  struct _BRUSHOBJ v30; // [rsp+78h] [rbp-90h] BYREF
  struct _BRUSHOBJ v31; // [rsp+90h] [rbp-78h] BYREF
  struct _LINEATTRS v32; // [rsp+A8h] [rbp-60h] BYREF
  struct _PATHOBJ *v33; // [rsp+118h] [rbp+10h]
  POINTL *pptlBrushOrg; // [rsp+148h] [rbp+40h] BYREF
  va_list va; // [rsp+148h] [rbp+40h]
  __int64 mixFill; // [rsp+150h] [rbp+48h]
  __int64 flOptions; // [rsp+158h] [rbp+50h]
  va_list va1; // [rsp+160h] [rbp+58h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  pptlBrushOrg = va_arg(va1, POINTL *);
  mixFill = va_arg(va1, _QWORD);
  flOptions = va_arg(va1, _QWORD);
  v27 = 0LL;
  memset(&v32, 0, sizeof(v32));
  memset(&v30, 0, sizeof(v30));
  memset(&v31, 0, sizeof(v31));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v16 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v14, a2);
  v33 = (struct _PATHOBJ *)v16;
  v17 = pso;
  if ( pso )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, a3, &pso->sizlBitmap);
  else
    DDIOBJ = 0LL;
  pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a5);
  if ( !pboStroke )
    pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v30);
  pboFill = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a7);
  if ( !pboFill )
    pboFill = CaptureAndFakeBRUSHOBJ(a7, &v31);
  a7 = pboFill;
  if ( v17 && pboStroke && pboFill && v16 && a6 && DDIOBJ && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v27);
    v21 = bCaptureLINEATTRS(&a6, &v32);
    plineattrs = a6;
    if ( v21 )
    {
      v23 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v14, a4);
      pxo = (XFORMOBJ *)v23;
      if ( (plineattrs->fl & 1) != 0 )
        v21 &= -(v23 != 0);
      v21 = v21
         && (unsigned int)bCheckSurfacePath(v17, v33, DDIOBJ)
         && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1)
         && EngStrokeAndFillPath(
              v17,
              v24,
              DDIOBJ,
              pxo,
              pboStroke,
              plineattrs,
              pboFill,
              pptlBrushOrg,
              mixFill,
              flOptions);
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v21 = 0;
  }
  if ( v29 )
    EngUnlockSurface(v17);
  if ( v14 )
    --*((_DWORD *)v14 + 105);
  return v21;
}
