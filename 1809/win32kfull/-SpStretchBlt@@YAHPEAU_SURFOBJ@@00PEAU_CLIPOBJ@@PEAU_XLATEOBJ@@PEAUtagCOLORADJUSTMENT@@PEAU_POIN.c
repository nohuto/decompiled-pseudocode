/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C01500D0
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C0051160 (EngStretchBlt.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00F50E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBlt @ 0x1C0150310 (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  HDEV hdev; // rax
  unsigned int v14; // r14d
  struct _SURFOBJ *v15; // r10
  struct _CLIPOBJ *v16; // r11
  struct _SURFOBJ *v17; // rbx
  USHORT *p_iType; // rdi
  int v19; // r9d
  BOOL (__stdcall *v20)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  struct _SURFOBJ *v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  struct _CLIPOBJ *v35; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  struct _RECTL v42; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v43[114]; // [rsp+D0h] [rbp-30h] BYREF

  hdev = a2->hdev;
  v14 = 1;
  v32 = psoDest;
  v35 = pco;
  v41 = (__int64)pxlo;
  v40 = (__int64)pca;
  v39 = (__int64)pptlHTOrg;
  v38 = (__int64)prclSrc;
  v37 = (__int64)pptlMask;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
    return EngStretchBlt(psoDest, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  v42 = *prclDest;
  ERECTL::vOrder((ERECTL *)&v42);
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v43, v15, v16, &v42);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v43, &v32, &v36, &v35) )
  {
    while ( 1 )
    {
      v17 = v32;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v33, v32);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v34, a2);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v33, &v35) )
        break;
LABEL_8:
      if ( v34 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v34 + 48));
        v34 = 0LL;
      }
      if ( v33 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v33 + 48));
        v33 = 0LL;
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v43, &v32, &v36, &v35) )
        return v14;
    }
    p_iType = &v17->iType;
    if ( v17->iType == 1 )
    {
      if ( bAllowShareAccess(v17) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 280) + 20LL) & 2) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26);
          LODWORD(v17) = (_DWORD)v32;
          v20 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 88LL);
          goto LABEL_7;
        }
        v17 = v32;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v17) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 108)) )
        {
          LODWORD(v17) = (_DWORD)v32;
          goto LABEL_31;
        }
        v17 = v32;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) & 2) != 0 )
    {
      v20 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v17->hdev + 166);
LABEL_7:
      v14 &= OffStretchBlt(
               (int)v20,
               (int)&v36,
               (int)v17,
               v19,
               (__int64)a2,
               (__int64)a3,
               v35,
               v41,
               v40,
               v39,
               (__int64)prclDest,
               v38,
               v37,
               iMode);
      goto LABEL_8;
    }
LABEL_31:
    v20 = EngStretchBlt;
    goto LABEL_7;
  }
  return v14;
}
