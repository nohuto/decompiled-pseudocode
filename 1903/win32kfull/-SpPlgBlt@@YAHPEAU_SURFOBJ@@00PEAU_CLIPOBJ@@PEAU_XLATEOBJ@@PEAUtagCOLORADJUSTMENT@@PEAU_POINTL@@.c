/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C027CAA0
 * Callers:
 *     <none>
 * Callees:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00416BC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     OffPlgBlt @ 0x1C02C1630 (OffPlgBlt.c)
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
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v48; // r9
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  struct _SURFOBJ *v62; // [rsp+70h] [rbp-90h] BYREF
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  struct _CLIPOBJ *v65; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v66; // [rsp+90h] [rbp-70h] BYREF
  POINTL *pptl; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h]
  struct _RECTL v71; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v72[114]; // [rsp+D0h] [rbp-30h] BYREF

  pptl = a10;
  *(_QWORD *)&v71.left = 0LL;
  *(_QWORD *)&v71.right = 0LL;
  v62 = a1;
  x = pptfx[1].x;
  v16 = 1;
  v19 = __OFSUB__(x, pptfx[3].x);
  v17 = x == pptfx[3].x;
  v18 = x - pptfx[3].x < 0;
  v65 = a4;
  v20 = v18 ^ v19 | v17;
  v19 = __OFSUB__(x, pptfx->x);
  v17 = x == pptfx->x;
  v18 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v70 = (__int64)pca;
  v22 = !(v18 ^ v19 | v17) ^ v20;
  v69 = (__int64)pptlBrushOrg;
  v68 = (__int64)prcl;
  v23 = y > pptfx[3].y;
  v24 = y <= pptfx->y;
  v66 = 0LL;
  v25 = v24 ^ v23;
  hdev = a2->hdev;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 15) != a2 )
  {
    v27 = v22 ^ 3;
    if ( pptfx[v22].x <= pptfx[v22 ^ 3LL].x )
      v27 = v22;
    v28 = v27;
    v71.left = (pptfx[v27].x >> 4) - 1;
    v29 = v25 ^ 3;
    if ( pptfx[v25].y <= pptfx[v25 ^ 3LL].y )
      v29 = v25;
    v71.top = (pptfx[v29].y >> 4) - 1;
    v71.right = ((pptfx[v28 ^ 3].x + 15) >> 4) + 1;
    v71.bottom = ((pptfx[v29 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v72, a1, a4, &v71);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v72, &v62, &v66, &v65) )
        return v16;
      v30 = v62;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v63, v62);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v64, a2);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v63, &v65) )
        break;
LABEL_28:
      if ( v64 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v64 + 48));
        v64 = 0LL;
      }
      if ( v63 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v63 + 48));
        v63 = 0LL;
      }
    }
    p_iType = &v30->iType;
    if ( v30->iType == 1 )
    {
      if ( bAllowShareAccess(v30) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46);
          LODWORD(v30) = (_DWORD)v62;
          v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_27:
          v16 &= OffPlgBlt(
                   (int)v49,
                   (int)&v66,
                   (int)v30,
                   v48,
                   (__int64)a2,
                   (__int64)a3,
                   v65,
                   (__int64)pxlo,
                   v70,
                   v69,
                   (__int64)pptfx,
                   v68,
                   (__int64)pptl,
                   iMode);
          goto LABEL_28;
        }
        v30 = v62;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v30) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v48) + 108)) )
        {
          LODWORD(v30) = (_DWORD)v62;
LABEL_26:
          v49 = EngPlgBlt;
          goto LABEL_27;
        }
        v30 = v62;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 4) != 0 )
    {
      v49 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v30->hdev + 171);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}
