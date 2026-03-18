/*
 * XREFs of NtGdiEngFillPath @ 0x1C02AB4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00A0FAC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00A17F8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00A19BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     EngFillPath @ 0x1C00CE1A0 (EngFillPath.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C014AFA8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C014B184 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA190 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA670 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v13; // rdi
  PATHOBJ *v15; // r15
  SURFOBJ *v16; // r14
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _BRUSHOBJ *v18; // r11
  BRUSHOBJ *v19; // r11
  BOOL v20; // [rsp+40h] [rbp-68h]
  struct _POINTL v21; // [rsp+48h] [rbp-60h] BYREF
  struct UMPDOBJ *v22; // [rsp+50h] [rbp-58h]
  SURFOBJ *pso; // [rsp+58h] [rbp-50h] BYREF
  int v24; // [rsp+60h] [rbp-48h]
  struct _BRUSHOBJ v25; // [rsp+68h] [rbp-40h] BYREF

  v20 = 0;
  v21 = 0LL;
  memset(&v25, 0, sizeof(v25));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v22 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v15 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v13, a2);
  v16 = pso;
  if ( pso )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &pso->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v18 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a4);
  if ( !v18 )
    v18 = CaptureAndFakeBRUSHOBJ(a4, &v25);
  if ( v16 && v18 && v15 && DDIOBJ && !DDIOBJ->iMode && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v21);
    v20 = (unsigned int)bCheckSurfacePath(v16, v15, DDIOBJ)
       && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || v19->iSolidColor == -1)
       && EngFillPath(v16, v15, DDIOBJ, v19, pptlBrushOrg, mix, flOptions);
  }
  if ( v24 )
    EngUnlockSurface(v16);
  if ( v13 )
    --*((_DWORD *)v13 + 105);
  return v20;
}
