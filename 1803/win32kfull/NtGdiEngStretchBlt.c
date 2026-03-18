/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C011EF00
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C00A2F70 (EngStretchBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C011F4AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C011F51C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C011F568 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C011F8C0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C011FA1C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C012015C (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C01205CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C01206BC (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0120850 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        ULONG64 a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _KTHREAD *CurrentThread; // r14
  struct _W32THREAD *v15; // rdi
  struct _W32THREAD **ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v18; // rdi
  POINTL *pptlHTOrg; // r12
  SURFOBJ *v21; // r14
  struct _RECTL *v22; // rdx
  struct _RECTL *v23; // r8
  struct _POINTL *pptlMask; // r15
  __int128 *v25; // r13
  XLATEOBJ *pxlo; // rdx
  struct _RECTL *prclSrc; // r10
  unsigned int v28; // esi
  struct _RECTL *v29; // r9
  int pca; // [rsp+28h] [rbp-150h]
  __int64 v31; // [rsp+68h] [rbp-110h]
  SURFOBJ *psoSrc; // [rsp+70h] [rbp-108h] BYREF
  int v33; // [rsp+78h] [rbp-100h]
  RECTL *prclDest; // [rsp+80h] [rbp-F8h]
  SURFOBJ *pso; // [rsp+88h] [rbp-F0h] BYREF
  int v36; // [rsp+90h] [rbp-E8h]
  unsigned int v37; // [rsp+98h] [rbp-E0h] BYREF
  unsigned int v38; // [rsp+9Ch] [rbp-DCh] BYREF
  COLORADJUSTMENT *v39; // [rsp+A0h] [rbp-D8h]
  POINTL *v40; // [rsp+A8h] [rbp-D0h]
  POINTL *v41; // [rsp+B0h] [rbp-C8h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-C0h]
  SURFOBJ *psoDest; // [rsp+C0h] [rbp-B8h] BYREF
  int v44; // [rsp+C8h] [rbp-B0h]
  struct _CLIPOBJ *v45; // [rsp+D0h] [rbp-A8h]
  struct _POINTL v46; // [rsp+D8h] [rbp-A0h] BYREF
  _QWORD v47[2]; // [rsp+E0h] [rbp-98h] BYREF
  struct _RECTL v48; // [rsp+F0h] [rbp-88h] BYREF
  struct _RECTL v49; // [rsp+100h] [rbp-78h] BYREF
  __int128 v50; // [rsp+110h] [rbp-68h] BYREF
  __int64 v51; // [rsp+120h] [rbp-58h]
  struct _RECTL v52; // [rsp+128h] [rbp-50h] BYREF

  v45 = a4;
  pco = a4;
  v39 = a6;
  v40 = a7;
  prclDest = a8;
  v41 = a10;
  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (struct _W32THREAD **)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
  }
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(v15);
  v18 = ThreadCurrentObj;
  v47[1] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v18);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a3, v18);
  pptlHTOrg = v40;
  if ( !v40 && iMode == 4 )
  {
    if ( v36 != (_DWORD)v40 )
      EngUnlockSurface(pso);
    if ( v33 )
      EngUnlockSurface(psoSrc);
    if ( v44 )
      EngUnlockSurface(psoDest);
    --*((_DWORD *)v18 + 105);
    return 0LL;
  }
  v21 = psoDest;
  if ( psoDest && psoSrc && (v22 = prclDest) != 0LL && (v23 = (struct _RECTL *)a9) != 0LL )
  {
    if ( (unsigned __int64)prclDest >= MmUserProbeAddress )
      v22 = (struct _RECTL *)MmUserProbeAddress;
    v48 = *v22;
    prclDest = &v48;
    pptlMask = v41;
    if ( v41 )
    {
      if ( (unsigned __int64)v41 >= MmUserProbeAddress )
        pptlMask = (struct _POINTL *)MmUserProbeAddress;
      v46 = *pptlMask;
      pptlMask = &v46;
      v41 = &v46;
    }
    if ( a9 >= MmUserProbeAddress )
      v23 = (struct _RECTL *)MmUserProbeAddress;
    v49 = *v23;
    v25 = (__int128 *)v39;
    if ( v39 )
    {
      if ( (unsigned __int64)v39 >= MmUserProbeAddress )
        v25 = (__int128 *)MmUserProbeAddress;
      v50 = *v25;
      v51 = *((_QWORD *)v25 + 2);
      v25 = &v50;
      v39 = (COLORADJUSTMENT *)&v50;
    }
    if ( v40 )
    {
      if ( (unsigned __int64)v40 >= MmUserProbeAddress )
        pptlHTOrg = (POINTL *)MmUserProbeAddress;
      v47[0] = *pptlHTOrg;
      pptlHTOrg = (POINTL *)v47;
      v40 = (POINTL *)v47;
    }
    if ( !(unsigned int)bCheckDestSurfaceOverlap(psoDest, &v48) )
    {
      if ( v36 )
        EngUnlockSurface(pso);
      if ( v33 )
        EngUnlockSurface(psoSrc);
      if ( v44 )
        EngUnlockSurface(v21);
      if ( v18 )
        --*((_DWORD *)v18 + 105);
      return 1LL;
    }
    pco = UMPDOBJ::GetDDIOBJ(v18, v45, &v21->sizlBitmap);
    v31 = UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v18, a5);
    if ( (unsigned int)bOrder(&v49) && (unsigned int)bCheckXlate(psoSrc, pxlo) )
    {
      v28 = 1;
      if ( pso )
      {
        v28 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v38, &v37, pca);
        if ( v28 )
        {
          v29 = pRect(pptlMask, &v52, v38, v37);
          v28 = pso->iBitmapFormat == 1;
          if ( pso->iBitmapFormat == 1 )
            v28 = bCheckSurfaceRect(pso, v29, 0LL);
        }
        pxlo = (XLATEOBJ *)v31;
        prclSrc = &v49;
      }
    }
    else
    {
      v28 = 0;
    }
    if ( v28 )
      v28 = EngStretchBlt(
              v21,
              psoSrc,
              pso,
              pco,
              pxlo,
              (COLORADJUSTMENT *)v25,
              pptlHTOrg,
              prclDest,
              prclSrc,
              pptlMask,
              iMode);
  }
  else
  {
    v28 = 0;
  }
  if ( v36 )
    EngUnlockSurface(pso);
  if ( v33 )
    EngUnlockSurface(psoSrc);
  if ( v44 )
    EngUnlockSurface(v21);
  if ( v18 )
    --*((_DWORD *)v18 + 105);
  return v28;
}
