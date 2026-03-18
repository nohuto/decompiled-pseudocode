/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C012F120
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     EngStretchBlt @ 0x1C00A2F70 (EngStretchBlt.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00B2888 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBlt @ 0x1C012F3DC (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall SpStretchBlt(
        SURFOBJ *psoDest,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        struct _POINTL *pptlMask,
        ULONG iMode)
{
  unsigned int v12; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v14; // r10
  struct _CLIPOBJ *v15; // r11
  struct _SURFOBJ *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdi
  USHORT *p_iType; // r14
  int v20; // r9d
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  struct _SURFOBJ *v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v35; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  struct _RECTL v43; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v44[114]; // [rsp+D0h] [rbp-30h] BYREF

  v12 = 1;
  hdev = a2->hdev;
  v33 = psoDest;
  v35 = a4;
  v42 = (__int64)a3;
  v41 = (__int64)pxlo;
  v40 = (__int64)pca;
  v39 = (__int64)pptlHTOrg;
  v38 = (__int64)prclSrc;
  v37 = (__int64)pptlMask;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    v43 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v43);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v44, v14, v15, &v43);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v44, &v33, &v36, &v35) )
        return v12;
      v16 = v33;
      v17 = 0LL;
      v34 = 0LL;
      if ( v33
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v33) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
      {
        v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
        v34 = v17;
        GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
      }
      v18 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v18 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v18 + 48));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v34, &v35) )
        break;
LABEL_14:
      if ( v18 )
        GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
      if ( v17 )
        GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
    }
    p_iType = &v16->iType;
    if ( v16->iType == 1 )
    {
      if ( bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 280) + 20LL) & 2) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27);
          v17 = v34;
          LODWORD(v16) = (_DWORD)v33;
          v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 88LL);
          goto LABEL_13;
        }
        v17 = v34;
        v16 = v33;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 108)) )
        {
          v17 = v34;
          LODWORD(v16) = (_DWORD)v33;
          goto LABEL_40;
        }
        v17 = v34;
        v16 = v33;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 2) != 0 )
    {
      v21 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v16->hdev + 165);
LABEL_13:
      v12 &= OffStretchBlt(
               (int)v21,
               (int)&v36,
               (int)v16,
               v20,
               (__int64)a2,
               v42,
               v35,
               v41,
               v40,
               v39,
               (__int64)prclDest,
               v38,
               v37,
               iMode);
      goto LABEL_14;
    }
LABEL_40:
    v21 = EngStretchBlt;
    goto LABEL_13;
  }
  return EngStretchBlt(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
}
