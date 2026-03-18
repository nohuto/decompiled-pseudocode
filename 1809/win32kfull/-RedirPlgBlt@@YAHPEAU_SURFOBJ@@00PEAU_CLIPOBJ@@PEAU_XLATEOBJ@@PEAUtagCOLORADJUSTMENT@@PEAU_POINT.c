/*
 * XREFs of ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C02808C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     EngPlgBlt @ 0x1C0270A50 (EngPlgBlt.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C027D1B8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027EE98 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027F7B0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02818A8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG iMode)
{
  CLIPOBJ *v13; // rdi
  __int64 v15; // rbx
  struct _DISPSURF *v16; // r14
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v21; // rdi
  struct _SURFOBJ *v22; // rax
  unsigned int v23; // r8d
  __int64 v25; // [rsp+60h] [rbp-89h] BYREF
  struct SURFACE *v26; // [rsp+68h] [rbp-81h] BYREF
  struct SURFACE *v27; // [rsp+70h] [rbp-79h] BYREF
  struct SURFACE *v28; // [rsp+78h] [rbp-71h] BYREF
  _BYTE v29[32]; // [rsp+80h] [rbp-69h] BYREF
  _BYTE v30[128]; // [rsp+A0h] [rbp-49h] BYREF
  __int64 HDEV; // [rsp+130h] [rbp+47h] BYREF
  CLIPOBJ *v32; // [rsp+148h] [rbp+5Fh]

  v32 = pco;
  v13 = pco;
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v15 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v29, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v15 + 40) & 0x20000) != 0 )
        {
          v16 = **(struct _DISPSURF ***)(v15 + 1800);
          if ( v16 )
          {
            do
            {
              v17 = *((_QWORD *)v16 + 6);
              HDEV = v17;
              if ( v17 )
              {
                if ( (*(_DWORD *)(v17 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2128) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v17 + 1792) + 624LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v25,
                      (struct PDEVOBJ *)&HDEV,
                      a1);
                    v19 = *(_QWORD *)(v18 + 1792);
                    DevBitmap = GetDevBitmap(v16, a3);
                    v21 = GetDevBitmap(v16, a2);
                    v22 = GetDevBitmap(v16, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v19 + 624))(
                      v22,
                      v21,
                      DevBitmap,
                      v32,
                      pxlo,
                      pca,
                      pptlBrushOrg,
                      pptfx,
                      prcl,
                      pptl,
                      iMode);
                    if ( v25 )
                      *(_WORD *)(v25 + 78) &= ~0x8000u;
                  }
                }
              }
              v16 = *(struct _DISPSURF **)v16;
            }
            while ( v16 );
            v13 = v32;
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v29);
        DCOBJ::~DCOBJ((DCOBJ *)v30);
      }
    }
  }
  v23 = EngPlgBlt(a1, a2, a3, v13, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
  if ( v26 )
    bMakeOpaque(v26);
  if ( v27 )
    bMakeOpaque(v27);
  if ( v28 )
    bMakeOpaque(v28);
  return v23;
}
