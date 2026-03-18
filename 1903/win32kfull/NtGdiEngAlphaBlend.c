/*
 * XREFs of NtGdiEngAlphaBlend @ 0x1C02AB240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0057F68 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0058050 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C00580A8 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00580C8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C005812C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     EngAlphaBlend @ 0x1C005B220 (EngAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0112580 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C014A3A8 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z @ 0x1C02AA598 (--$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiEngAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        RECTL *a5,
        RECTL *a6,
        __int64 a7)
{
  unsigned int v9; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v12; // rdi
  struct _XLATEOBJ *v14; // rax
  BLENDOBJ *pBlendObj; // r15
  SURFOBJ *v16; // r14
  RECTL *prclSrc; // r12
  RECTL *prclDest; // r13
  struct _CLIPOBJ *v19; // rdx
  SURFOBJ *v20; // rsi
  XLATEOBJ *v21; // r9
  RECTL *v22; // [rsp+40h] [rbp-C8h] BYREF
  RECTL *v23; // [rsp+48h] [rbp-C0h] BYREF
  CLIPOBJ *pco; // [rsp+50h] [rbp-B8h]
  struct _XLATEOBJ *v25; // [rsp+58h] [rbp-B0h]
  CLIPOBJ *v26; // [rsp+60h] [rbp-A8h]
  SURFOBJ *psoSrc; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+70h] [rbp-98h]
  __int64 v29; // [rsp+78h] [rbp-90h]
  struct UMPDOBJ *v30; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h]
  SURFOBJ *psoDest; // [rsp+90h] [rbp-78h] BYREF
  int v33; // [rsp+98h] [rbp-70h]
  struct _RECTL v34; // [rsp+A0h] [rbp-68h] BYREF
  struct _RECTL v35; // [rsp+B0h] [rbp-58h] BYREF

  v26 = a4;
  v29 = a3;
  v31 = a3;
  pco = a4;
  v23 = a5;
  v22 = a6;
  v9 = 1;
  *(_QWORD *)&v35.left = 0LL;
  *(_QWORD *)&v35.right = 0LL;
  *(_QWORD *)&v34.left = 0LL;
  *(_QWORD *)&v34.right = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  v30 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v12);
  v14 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_BLENDOBJ>((__int64)v12, a7);
  pBlendObj = (BLENDOBJ *)v14;
  v25 = v14;
  v16 = psoDest;
  if ( !psoDest || !psoSrc || !v14 || !v23 || !v22 )
    goto LABEL_14;
  CaptureRECTL(&v22, &v34);
  CaptureRECTL(&v23, &v35);
  prclSrc = v22;
  if ( !bOrder(v22) )
    goto LABEL_15;
  prclDest = v23;
  if ( !bOrder(v23) )
    goto LABEL_15;
  pco = UMPDOBJ::GetDDIOBJ(v12, v19, &v16->sizlBitmap);
  v25 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v12, (__int64)v26);
  v20 = psoSrc;
  if ( (unsigned int)bCheckSurfaceRect(psoSrc, prclSrc, 0LL) && (unsigned int)bCheckXlate(v20, v25) )
    v9 = EngAlphaBlend(v16, v20, pco, v21, prclDest, prclSrc, pBlendObj);
  else
LABEL_14:
    v9 = 0;
LABEL_15:
  if ( v28 )
    EngUnlockSurface(psoSrc);
  if ( v33 )
    EngUnlockSurface(v16);
  if ( v12 )
    --*((_DWORD *)v12 + 105);
  return v9;
}
