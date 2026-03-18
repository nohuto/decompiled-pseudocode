/*
 * XREFs of NtGdiEngPaint @ 0x1C02ABD30
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00A0FAC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00A17F8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00A19BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C00ED1A0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngPaint @ 0x1C0148550 (EngPaint.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C014AFA8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C014B184 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 */

__int64 __fastcall NtGdiEngPaint(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _BRUSHOBJ *a3, POINTL *a4, MIX a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  SURFOBJ *v12; // r14
  struct _CLIPOBJ *DDIOBJ; // rdi
  BRUSHOBJ *v14; // r15
  MIX mix; // r12d
  unsigned int v16; // esi
  struct _POINTL v17; // [rsp+30h] [rbp-68h] BYREF
  struct UMPDOBJ *v18; // [rsp+38h] [rbp-60h]
  SURFOBJ *pso; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+48h] [rbp-50h]
  struct _BRUSHOBJ v21; // [rsp+50h] [rbp-48h] BYREF
  POINTL *pptlBrushOrg; // [rsp+B8h] [rbp+20h] BYREF

  pptlBrushOrg = a4;
  v17 = 0LL;
  memset(&v21, 0, sizeof(v21));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  v18 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v12 = pso;
  if ( pso )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v10, a2, &pso->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v14 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v10, (__int64)a3);
  if ( !v14 )
    v14 = CaptureAndFakeBRUSHOBJ(a3, &v21);
  if ( v12 && DDIOBJ && !DDIOBJ->iMode && (mix = a5, (a5 & 0xFF00) != 0) )
  {
    CapturePOINTL(&pptlBrushOrg, &v17);
    v16 = bCheckSurfaceRect(v12, 0LL, DDIOBJ);
    if ( v16 )
      v16 = EngPaint(v12, DDIOBJ, v14, pptlBrushOrg, mix);
  }
  else
  {
    v16 = 0;
  }
  if ( v20 )
    EngUnlockSurface(v12);
  if ( v10 )
    --*((_DWORD *)v10 + 105);
  return v16;
}
