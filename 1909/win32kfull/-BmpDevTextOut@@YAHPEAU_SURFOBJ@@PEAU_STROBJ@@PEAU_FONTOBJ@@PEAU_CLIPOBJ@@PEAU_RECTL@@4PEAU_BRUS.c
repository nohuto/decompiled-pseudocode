/*
 * XREFs of ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02947C0
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C009EDE0 (EngTextOut.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0292EB4 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0294CA8 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
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
    v14 = EngTextOut(a1, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
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
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1792) + 248LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&v21,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v19 + 1792) + 248LL))(
                    a1,
                    pstro,
                    pfo,
                    pco,
                    prclExtra,
                    prclOpaque,
                    pboFore,
                    pboOpaque,
                    pptlOrg,
                    mix);
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
