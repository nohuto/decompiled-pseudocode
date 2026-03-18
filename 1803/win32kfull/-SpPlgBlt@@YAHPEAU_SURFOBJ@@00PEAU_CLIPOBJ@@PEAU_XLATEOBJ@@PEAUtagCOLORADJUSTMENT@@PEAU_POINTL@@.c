/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C024BF10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00B2888 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
 *     OffPlgBlt @ 0x1C0296E10 (OffPlgBlt.c)
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
  unsigned int v14; // r13d
  FIX x; // ecx
  bool v16; // zf
  bool v17; // sf
  bool v18; // of
  int v19; // r10d
  FIX y; // ecx
  int v21; // r10d
  int v22; // r11d
  HDEV hdev; // rax
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  struct _SURFOBJ *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rdi
  USHORT *p_iType; // r12
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 ThreadWin32Thread; // rax
  int v37; // r9d
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  struct _SURFOBJ *v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v46; // [rsp+80h] [rbp-80h] BYREF
  POINTL *pptl; // [rsp+88h] [rbp-78h]
  struct _POINTL v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  __int64 v52; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  struct _RECTL v54; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v55[114]; // [rsp+D0h] [rbp-30h] BYREF

  v14 = 1;
  pptl = a10;
  v44 = a1;
  x = pptfx[1].x;
  v18 = __OFSUB__(x, pptfx[3].x);
  v16 = x == pptfx[3].x;
  v17 = x - pptfx[3].x < 0;
  v46 = a4;
  v19 = v17 ^ v18 | v16;
  v53 = (__int64)a3;
  v18 = __OFSUB__(x, pptfx->x);
  v16 = x == pptfx->x;
  v17 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v52 = (__int64)pxlo;
  v21 = !(v17 ^ v18 | v16) ^ v19;
  v51 = (__int64)pca;
  v50 = (__int64)pptlBrushOrg;
  v18 = __OFSUB__(y, pptfx[3].y);
  v16 = y == pptfx[3].y;
  v17 = y - pptfx[3].y < 0;
  v49 = (__int64)prcl;
  v22 = (y <= pptfx->y) ^ !(v17 ^ v18 | v16);
  hdev = a2->hdev;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    v24 = v21 ^ 3;
    if ( pptfx[v21].x <= pptfx[v21 ^ 3LL].x )
      v24 = v21;
    v25 = v24;
    v54.left = (pptfx[v24].x >> 4) - 1;
    v26 = v22 ^ 3;
    if ( pptfx[v22].y <= pptfx[v22 ^ 3LL].y )
      v26 = v22;
    v54.top = (pptfx[v26].y >> 4) - 1;
    v54.right = ((pptfx[v25 ^ 3].x + 15) >> 4) + 1;
    v54.bottom = ((pptfx[v26 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v55, a1, a4, &v54);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v55, &v44, &v48, &v46) )
        return v14;
      v27 = v44;
      v28 = 0LL;
      v45 = 0LL;
      if ( v44
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v44) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x200) == 0 )
      {
        v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v27);
        v45 = v28;
        GreLockDisplayDevice(*(_QWORD *)(v28 + 48));
      }
      v29 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v29 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v29 + 48));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v45, &v46) )
        break;
LABEL_37:
      if ( v29 )
        GreUnlockDisplayDevice(*(_QWORD *)(v29 + 48));
      if ( v28 )
        GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
    }
    p_iType = &v27->iType;
    if ( v27->iType == 1 )
    {
      if ( bAllowShareAccess(v27) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35);
          v28 = v45;
          LODWORD(v27) = (_DWORD)v44;
          v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_36:
          v14 &= OffPlgBlt(
                   (int)v38,
                   (int)&v48,
                   (int)v27,
                   v37,
                   (__int64)a2,
                   v53,
                   v46,
                   v52,
                   v51,
                   v50,
                   (__int64)pptfx,
                   v49,
                   (__int64)pptl,
                   iMode);
          goto LABEL_37;
        }
        v28 = v45;
        v27 = v44;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v27) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42) + 108)) )
        {
          v28 = v45;
          LODWORD(v27) = (_DWORD)v44;
LABEL_35:
          v38 = EngPlgBlt;
          goto LABEL_36;
        }
        v28 = v45;
        v27 = v44;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 4) != 0 )
    {
      v38 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v27->hdev + 170);
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}
