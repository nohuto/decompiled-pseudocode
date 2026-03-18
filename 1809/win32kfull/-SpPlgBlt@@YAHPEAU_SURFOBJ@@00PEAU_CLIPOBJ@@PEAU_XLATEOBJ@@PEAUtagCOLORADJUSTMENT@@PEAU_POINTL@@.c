/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0263420
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00F50E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     EngPlgBlt @ 0x1C0270A50 (EngPlgBlt.c)
 *     OffPlgBlt @ 0x1C02AAAEC (OffPlgBlt.c)
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
  unsigned int v15; // r14d
  FIX x; // ecx
  bool v17; // zf
  bool v18; // sf
  bool v19; // of
  int v20; // r10d
  FIX y; // ecx
  int v22; // r10d
  int v23; // r11d
  HDEV hdev; // rax
  int v25; // eax
  __int64 v26; // r9
  int v27; // eax
  struct _SURFOBJ *v28; // rbx
  USHORT *p_iType; // r15
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 ThreadWin32Thread; // rax
  int v36; // r9d
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  struct _SURFOBJ *v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  struct _CLIPOBJ *v46; // [rsp+88h] [rbp-78h] BYREF
  POINTL *pptl; // [rsp+90h] [rbp-70h]
  struct _POINTL v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  struct _RECTL v52; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v53[114]; // [rsp+D0h] [rbp-30h] BYREF

  pptl = a10;
  v15 = 1;
  v43 = a1;
  x = pptfx[1].x;
  v19 = __OFSUB__(x, pptfx[3].x);
  v17 = x == pptfx[3].x;
  v18 = x - pptfx[3].x < 0;
  v46 = a4;
  v20 = v18 ^ v19 | v17;
  v51 = (__int64)pca;
  v19 = __OFSUB__(x, pptfx->x);
  v17 = x == pptfx->x;
  v18 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v50 = (__int64)pptlBrushOrg;
  v22 = !(v18 ^ v19 | v17) ^ v20;
  v49 = (__int64)prcl;
  v23 = (y <= pptfx->y) ^ (y > pptfx[3].y);
  hdev = a2->hdev;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 15) != a2 )
  {
    v25 = v22 ^ 3;
    if ( pptfx[v22].x <= pptfx[v22 ^ 3LL].x )
      v25 = v22;
    v26 = v25;
    v52.left = (pptfx[v25].x >> 4) - 1;
    v27 = v23 ^ 3;
    if ( pptfx[v23].y <= pptfx[v23 ^ 3LL].y )
      v27 = v23;
    v52.top = (pptfx[v27].y >> 4) - 1;
    v52.right = ((pptfx[v26 ^ 3].x + 15) >> 4) + 1;
    v52.bottom = ((pptfx[v27 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v53, a1, a4, &v52);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v53, &v43, &v48, &v46) )
        return v15;
      v28 = v43;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v44, v43);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v45, a2);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v44, &v46) )
        break;
LABEL_28:
      if ( v45 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v45 + 48));
        v45 = 0LL;
      }
      if ( v44 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v44 + 48));
        v44 = 0LL;
      }
    }
    p_iType = &v28->iType;
    if ( v28->iType == 1 )
    {
      if ( bAllowShareAccess(v28) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34);
          LODWORD(v28) = (_DWORD)v43;
          v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_27:
          v15 &= OffPlgBlt(
                   (int)v37,
                   (int)&v48,
                   (int)v28,
                   v36,
                   (__int64)a2,
                   (__int64)a3,
                   v46,
                   (__int64)pxlo,
                   v51,
                   v50,
                   (__int64)pptfx,
                   v49,
                   (__int64)pptl,
                   iMode);
          goto LABEL_28;
        }
        v28 = v43;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v28) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 108)) )
        {
          LODWORD(v28) = (_DWORD)v43;
LABEL_26:
          v37 = EngPlgBlt;
          goto LABEL_27;
        }
        v28 = v43;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 4) != 0 )
    {
      v37 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v28->hdev + 171);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}
