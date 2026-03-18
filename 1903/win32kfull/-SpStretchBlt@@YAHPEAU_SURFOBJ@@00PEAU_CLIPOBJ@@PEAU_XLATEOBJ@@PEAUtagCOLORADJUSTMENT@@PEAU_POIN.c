/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0155620
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00416BC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C005D7E0 (EngStretchBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBlt @ 0x1C0155864 (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SpStretchBlt(
        SURFOBJ *psoDest,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode)
{
  unsigned int v13; // r14d
  HDEV hdev; // rax
  struct _SURFOBJ *v15; // r10
  struct _CLIPOBJ *v16; // r11
  struct _SURFOBJ *v17; // rbx
  USHORT *p_iType; // rdi
  __int64 v19; // r9
  BOOL (__stdcall *v20)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  struct _SURFOBJ *v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  struct _CLIPOBJ *v52; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  struct _RECTL v59; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v60[114]; // [rsp+D0h] [rbp-30h] BYREF

  v49 = psoDest;
  v13 = 1;
  hdev = a2->hdev;
  v52 = pco;
  v58 = (__int64)pxlo;
  v57 = (__int64)pca;
  v56 = (__int64)pptlHTOrg;
  v55 = (__int64)prclSrc;
  v54 = (__int64)pptlMask;
  v53 = 0LL;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
    return EngStretchBlt(psoDest, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  v59 = *prclDest;
  ERECTL::vOrder((ERECTL *)&v59);
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v60, v15, v16, &v59);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v60, &v49, &v53, &v52) )
  {
    while ( 1 )
    {
      v17 = v49;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v50, v49);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v51, a2);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v50, &v52) )
        break;
LABEL_8:
      if ( v51 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v51 + 48));
        v51 = 0LL;
      }
      if ( v50 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v50 + 48));
        v50 = 0LL;
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v60, &v49, &v53, &v52) )
        return v13;
    }
    p_iType = &v17->iType;
    if ( v17->iType == 1 )
    {
      if ( bAllowShareAccess(v17) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 280) + 20LL) & 2) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36);
          LODWORD(v17) = (_DWORD)v49;
          v20 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 88LL);
          goto LABEL_7;
        }
        v17 = v49;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v17) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v19) + 108)) )
        {
          LODWORD(v17) = (_DWORD)v49;
          goto LABEL_31;
        }
        v17 = v49;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) & 2) != 0 )
    {
      v20 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v17->hdev + 166);
LABEL_7:
      v13 &= OffStretchBlt(
               (int)v20,
               (int)&v53,
               (int)v17,
               v19,
               (__int64)a2,
               (__int64)a3,
               v52,
               v58,
               v57,
               v56,
               (__int64)prclDest,
               v55,
               v54,
               iMode);
      goto LABEL_8;
    }
LABEL_31:
    v20 = EngStretchBlt;
    goto LABEL_7;
  }
  return v13;
}
