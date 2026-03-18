/*
 * XREFs of NtGdiEngCopyBits @ 0x1C0149620
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C00356D0 (EngCopyBits.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0057F68 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0058050 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C00580A8 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00580C8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C005812C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0112580 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C014A1F8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C014A224 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C014A3A8 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C014A3EC (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        CLIPOBJ *a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v10; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v13; // rdi
  SURFOBJ *v14; // r14
  RECTL *prclDest; // r12
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _XLATEOBJ *v17; // r13
  SURFOBJ *v18; // r15
  struct _RECTL *v19; // rax
  int pptlSrc; // [rsp+28h] [rbp-C0h]
  POINTL *v22; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-ACh] BYREF
  RECTL *v25; // [rsp+40h] [rbp-A8h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-A0h]
  SURFOBJ *psoSrc; // [rsp+50h] [rbp-98h] BYREF
  int v28; // [rsp+58h] [rbp-90h]
  struct _POINTL v29; // [rsp+60h] [rbp-88h] BYREF
  struct UMPDOBJ *v30; // [rsp+68h] [rbp-80h]
  struct _CLIPOBJ *v31; // [rsp+70h] [rbp-78h]
  SURFOBJ *psoDest; // [rsp+78h] [rbp-70h] BYREF
  int v33; // [rsp+80h] [rbp-68h]
  struct _RECTL v34; // [rsp+88h] [rbp-60h] BYREF
  struct _RECTL v35; // [rsp+98h] [rbp-50h] BYREF

  v31 = a3;
  pco = a4;
  v25 = a5;
  v22 = a6;
  *(_QWORD *)&v34.left = 0LL;
  *(_QWORD *)&v34.right = 0LL;
  v29 = 0LL;
  v10 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v30 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v13);
  v14 = psoDest;
  if ( !psoDest || !psoSrc || psoDest->iType || !v25 || !v22 )
  {
LABEL_20:
    v10 = 0;
    goto LABEL_12;
  }
  CaptureRECTL(&v25, &v34);
  CapturePOINTL(&v22, &v29);
  prclDest = v25;
  if ( bOrder(v25) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &v14->sizlBitmap);
    pco = DDIOBJ;
    v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v13, (__int64)a4);
    if ( (unsigned int)bCheckSurfaceRectSize(v14, prclDest, DDIOBJ, &v24, &v23, pptlSrc) )
    {
      v18 = psoSrc;
      if ( (unsigned int)bCheckXlate(psoSrc, v17) )
      {
        *(_QWORD *)&v35.left = 0LL;
        *(_QWORD *)&v35.right = 0LL;
        v19 = pRect(v22, &v35, v24, v23);
        v10 = bCheckSurfaceRect(v18, v19, 0LL);
        if ( v10 )
          v10 = EngCopyBits(v14, v18, pco, v17, prclDest, v22);
        goto LABEL_12;
      }
    }
    goto LABEL_20;
  }
LABEL_12:
  if ( v28 )
    EngUnlockSurface(psoSrc);
  if ( v33 )
    EngUnlockSurface(v14);
  if ( v13 )
    --*((_DWORD *)v13 + 105);
  return v10;
}
