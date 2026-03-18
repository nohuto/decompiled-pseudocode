/*
 * XREFs of ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026A6D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     EngStrokeAndFillPath @ 0x1C02597B0 (EngStrokeAndFillPath.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02691E0 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0269238 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C026AF68 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
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
    v14 = EngStrokeAndFillPath(a1, ppo, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1792); i; i = (_QWORD *)*i )
        {
          v17 = i[6];
          v21 = v17;
          if ( v17 )
          {
            if ( (*(_DWORD *)(v17 + 1816) & 0x8000000) != 0 )
            {
              v18 = *(_DWORD *)(v17 + 2120);
              if ( (v18 & 0x1000) != 0 && (v18 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1784) + 192LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&v21,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v19 + 1784) + 192LL))(
                    a1,
                    ppo,
                    pco,
                    pxo,
                    pboStroke,
                    plineattrs,
                    pboFill,
                    pptlBrushOrg,
                    mixFill,
                    flOptions);
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
