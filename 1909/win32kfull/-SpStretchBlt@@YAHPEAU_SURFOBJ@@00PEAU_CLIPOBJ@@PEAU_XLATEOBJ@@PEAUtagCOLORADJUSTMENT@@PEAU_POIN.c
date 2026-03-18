/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C01563E0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0084B2C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C008574C (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A22F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C00A6F40 (EngStretchBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBlt @ 0x1C0156624 (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  int v19; // r9d
  BOOL (__stdcall *v20)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  struct _SURFOBJ *v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  struct _CLIPOBJ *v44; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v45; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  struct _RECTL v51; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v52[114]; // [rsp+D0h] [rbp-30h] BYREF

  v41 = psoDest;
  v13 = 1;
  hdev = a2->hdev;
  v44 = pco;
  v50 = (__int64)pxlo;
  v49 = (__int64)pca;
  v48 = (__int64)pptlHTOrg;
  v47 = (__int64)prclSrc;
  v46 = (__int64)pptlMask;
  v45 = 0LL;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
    return EngStretchBlt(psoDest, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  v51 = *prclDest;
  ERECTL::vOrder((ERECTL *)&v51);
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v52, v15, v16, &v51);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v52, &v41, &v45, &v44) )
  {
    while ( 1 )
    {
      v17 = v41;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v42, v41);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v43, a2);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v42, &v44) )
        break;
LABEL_8:
      if ( v43 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v43 + 48));
        v43 = 0LL;
      }
      if ( v42 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v42 + 48));
        v42 = 0LL;
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v52, &v41, &v45, &v44) )
        return v13;
    }
    p_iType = &v17->iType;
    if ( v17->iType == 1 )
    {
      if ( bAllowShareAccess(v17) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29) + 280) + 20LL) & 2) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31);
          LODWORD(v17) = (_DWORD)v41;
          v20 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 88LL);
          goto LABEL_7;
        }
        v17 = v41;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v17) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40) + 108)) )
        {
          LODWORD(v17) = (_DWORD)v41;
          goto LABEL_31;
        }
        v17 = v41;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) & 2) != 0 )
    {
      v20 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v17->hdev + 166);
LABEL_7:
      v13 &= OffStretchBlt(
               (int)v20,
               (int)&v45,
               (int)v17,
               v19,
               (__int64)a2,
               (__int64)a3,
               v44,
               v50,
               v49,
               v48,
               (__int64)prclDest,
               v47,
               v46,
               iMode);
      goto LABEL_8;
    }
LABEL_31:
    v20 = EngStretchBlt;
    goto LABEL_7;
  }
  return v13;
}
