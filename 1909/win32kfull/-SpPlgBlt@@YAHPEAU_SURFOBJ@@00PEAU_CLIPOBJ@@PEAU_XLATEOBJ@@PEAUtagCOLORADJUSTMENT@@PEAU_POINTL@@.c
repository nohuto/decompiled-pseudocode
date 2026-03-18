/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C027C3E0
 * Callers:
 *     <none>
 * Callees:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0084B2C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C008574C (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     OffPlgBlt @ 0x1C02C1180 (OffPlgBlt.c)
 */

__int64 __fastcall SpPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        struct _POINTL *a10,
        ULONG iMode)
{
  FIX x; // ecx
  unsigned int v16; // r14d
  bool v17; // zf
  bool v18; // sf
  bool v19; // of
  int v20; // r10d
  FIX y; // ecx
  int v22; // r10d
  BOOL v23; // r11d
  BOOL v24; // eax
  int v25; // r11d
  HDEV hdev; // rax
  int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  struct _SURFOBJ *v30; // rbx
  USHORT *p_iType; // r15
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 ThreadWin32Thread; // rax
  int v43; // r9d
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r8
  struct _SURFOBJ *v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  struct _CLIPOBJ *v57; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v58; // [rsp+90h] [rbp-70h] BYREF
  POINTL *pptl; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-50h]
  struct _RECTL v63; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v64[114]; // [rsp+D0h] [rbp-30h] BYREF

  pptl = a10;
  *(_QWORD *)&v63.left = 0LL;
  *(_QWORD *)&v63.right = 0LL;
  v54 = a1;
  x = pptfx[1].x;
  v16 = 1;
  v19 = __OFSUB__(x, pptfx[3].x);
  v17 = x == pptfx[3].x;
  v18 = x - pptfx[3].x < 0;
  v57 = a4;
  v20 = v18 ^ v19 | v17;
  v19 = __OFSUB__(x, pptfx->x);
  v17 = x == pptfx->x;
  v18 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v62 = (__int64)pca;
  v22 = !(v18 ^ v19 | v17) ^ v20;
  v61 = (__int64)pptlBrushOrg;
  v60 = (__int64)prcl;
  v23 = y > pptfx[3].y;
  v24 = y <= pptfx->y;
  v58 = 0LL;
  v25 = v24 ^ v23;
  hdev = a2->hdev;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 15) != a2 )
  {
    v27 = v22 ^ 3;
    if ( pptfx[v22].x <= pptfx[v22 ^ 3LL].x )
      v27 = v22;
    v28 = v27;
    v63.left = (pptfx[v27].x >> 4) - 1;
    v29 = v25 ^ 3;
    if ( pptfx[v25].y <= pptfx[v25 ^ 3LL].y )
      v29 = v25;
    v63.top = (pptfx[v29].y >> 4) - 1;
    v63.right = ((pptfx[v28 ^ 3].x + 15) >> 4) + 1;
    v63.bottom = ((pptfx[v29 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v64, a1, a4, &v63);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v64, &v54, &v58, &v57) )
        return v16;
      v30 = v54;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v55, v54);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v56, a2);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v55, &v57) )
        break;
LABEL_28:
      if ( v56 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v56 + 48));
        v56 = 0LL;
      }
      if ( v55 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v55 + 48));
        v55 = 0LL;
      }
    }
    p_iType = &v30->iType;
    if ( v30->iType == 1 )
    {
      if ( bAllowShareAccess(v30) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41);
          LODWORD(v30) = (_DWORD)v54;
          v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_27:
          v16 &= OffPlgBlt(
                   (int)v44,
                   (int)&v58,
                   (int)v30,
                   v43,
                   (__int64)a2,
                   (__int64)a3,
                   v57,
                   (__int64)pxlo,
                   v62,
                   v61,
                   (__int64)pptfx,
                   v60,
                   (__int64)pptl,
                   iMode);
          goto LABEL_28;
        }
        v30 = v54;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v30) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52) + 108)) )
        {
          LODWORD(v30) = (_DWORD)v54;
LABEL_26:
          v44 = EngPlgBlt;
          goto LABEL_27;
        }
        v30 = v54;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 4) != 0 )
    {
      v44 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v30->hdev + 171);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}
