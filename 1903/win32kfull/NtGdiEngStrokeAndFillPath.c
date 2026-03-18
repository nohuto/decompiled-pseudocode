/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02AC800
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
 *     EngStrokeAndFillPath @ 0x1C014B8D0 (EngStrokeAndFillPath.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA640 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AA9F8 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02AAB20 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
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
  __int64 v12; // r9
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v15; // rdi
  unsigned __int64 v17; // rbx
  SURFOBJ *v18; // r13
  struct _CLIPOBJ *DDIOBJ; // r14
  BRUSHOBJ *pboStroke; // r15
  struct _BRUSHOBJ *pboFill; // rsi
  unsigned int v22; // ebx
  LINEATTRS *plineattrs; // r12
  unsigned __int64 v24; // rax
  PATHOBJ *v25; // r11
  PFLOAT_LONG pstyle; // rcx
  XFORMOBJ *pxo; // [rsp+58h] [rbp-B0h]
  struct _POINTL v28; // [rsp+60h] [rbp-A8h] BYREF
  SURFOBJ *pso; // [rsp+68h] [rbp-A0h] BYREF
  int v30; // [rsp+70h] [rbp-98h]
  struct _BRUSHOBJ v31; // [rsp+78h] [rbp-90h] BYREF
  struct _BRUSHOBJ v32; // [rsp+90h] [rbp-78h] BYREF
  struct _LINEATTRS v33; // [rsp+A8h] [rbp-60h] BYREF
  struct _PATHOBJ *v34; // [rsp+118h] [rbp+10h]
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
  v28 = 0LL;
  memset(&v33, 0, sizeof(v33));
  memset(&v31, 0, sizeof(v31));
  memset(&v32, 0, sizeof(v32));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v17 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v15, a2);
  v34 = (struct _PATHOBJ *)v17;
  v18 = pso;
  if ( pso )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v15, a3, &pso->sizlBitmap);
  else
    DDIOBJ = 0LL;
  pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a5);
  if ( !pboStroke )
    pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v31);
  pboFill = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a7);
  if ( !pboFill )
    pboFill = CaptureAndFakeBRUSHOBJ(a7, &v32);
  a7 = pboFill;
  if ( v18 && pboStroke && pboFill && v17 && a6 && DDIOBJ && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v28);
    v22 = bCaptureLINEATTRS(&a6, &v33);
    plineattrs = a6;
    if ( v22 )
    {
      v24 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v15, a4);
      pxo = (XFORMOBJ *)v24;
      if ( (plineattrs->fl & 1) != 0 )
        v22 &= -(v24 != 0);
      v22 = v22
         && (unsigned int)bCheckSurfacePath(v18, v34, DDIOBJ)
         && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1)
         && EngStrokeAndFillPath(
              v18,
              v25,
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
    v22 = 0;
  }
  if ( v30 )
    EngUnlockSurface(v18);
  if ( v15 )
    --*((_DWORD *)v15 + 105);
  return v22;
}
