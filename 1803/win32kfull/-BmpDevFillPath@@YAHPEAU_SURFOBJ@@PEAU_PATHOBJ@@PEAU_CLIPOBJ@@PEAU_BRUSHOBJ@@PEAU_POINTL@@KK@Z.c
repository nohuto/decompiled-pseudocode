/*
 * XREFs of ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02699E0
 * Callers:
 *     <none>
 * Callees:
 *     EngFillPath @ 0x1C00EF100 (EngFillPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02691E0 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0269238 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C026AF68 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  unsigned int v11; // esi
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r9
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v20; // [rsp+50h] [rbp-38h] BYREF

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v20, a1);
  if ( a1 )
  {
    v11 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1792); i; i = (_QWORD *)*i )
        {
          v14 = i[6];
          v18 = v14;
          if ( v14 )
          {
            if ( (*(_DWORD *)(v14 + 1816) & 0x8000000) != 0 )
            {
              v15 = *(_DWORD *)(v14 + 2120);
              if ( (v15 & 0x1000) != 0 && (v15 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v14 + 1784) + 184LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v19,
                    (struct PDEVOBJ *)&v18,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v16 + 1784) + 184LL))(
                    a1,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v19 )
                    *(_WORD *)(v19 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v20 )
    bBmpMakeOpaque(v20);
  return v11;
}
