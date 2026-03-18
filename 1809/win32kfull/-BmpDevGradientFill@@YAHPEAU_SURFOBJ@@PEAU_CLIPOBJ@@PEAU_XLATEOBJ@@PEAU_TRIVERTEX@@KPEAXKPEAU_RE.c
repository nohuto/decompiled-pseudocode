/*
 * XREFs of ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C027DB20
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C00909F0 (EngGradientFill.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027D154 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C027D1B8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027EF48 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevGradientFill(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  unsigned int v14; // esi
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // r9
  __int64 v21; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h] BYREF
  struct SURFACE *v23; // [rsp+70h] [rbp-38h] BYREF

  v14 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v23, a1);
  if ( a1 )
  {
    v14 = EngGradientFill(a1, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1800); i; i = (_QWORD *)*i )
        {
          v17 = i[6];
          v21 = v17;
          if ( v17 )
          {
            if ( (*(_DWORD *)(v17 + 1824) & 0x8000000) != 0 )
            {
              v18 = *(_DWORD *)(v17 + 2128);
              if ( (v18 & 0x1000) != 0 && (v18 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1792) + 608LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&v21,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v19 + 1792) + 608LL))(
                    a1,
                    pco,
                    pxlo,
                    pVertex,
                    nVertex,
                    pMesh,
                    nMesh,
                    prclExtents,
                    pptlDitherOrg,
                    ulMode);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v23 )
    bBmpMakeOpaque(v23);
  return v14;
}
