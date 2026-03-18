/*
 * XREFs of ?BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C026A8D0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C00E3150 (EngStrokePath.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02691E0 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0269238 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C026AF68 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  unsigned int v12; // esi
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r9
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v21; // [rsp+60h] [rbp-38h] BYREF

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v21, a1);
  if ( a1 )
  {
    v12 = EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1792); i; i = (_QWORD *)*i )
        {
          v15 = i[6];
          v19 = v15;
          if ( v15 )
          {
            if ( (*(_DWORD *)(v15 + 1816) & 0x8000000) != 0 )
            {
              v16 = *(_DWORD *)(v15 + 2120);
              if ( (v16 & 0x1000) != 0 && (v16 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v15 + 1784) + 176LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v20,
                    (struct PDEVOBJ *)&v19,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v17 + 1784) + 176LL))(
                    a1,
                    ppo,
                    pco,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v20 )
                    *(_WORD *)(v20 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v21 )
    bBmpMakeOpaque(v21);
  return v12;
}
