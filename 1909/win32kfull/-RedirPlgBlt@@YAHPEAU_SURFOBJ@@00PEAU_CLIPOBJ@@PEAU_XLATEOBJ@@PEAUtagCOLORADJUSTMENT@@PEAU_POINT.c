/*
 * XREFs of ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0296840
 * Callers:
 *     <none>
 * Callees:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0294BF8 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02954C4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297A60 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
  __int64 HDEV; // rax
  __int64 v16; // rbx
  int v17; // eax
  struct _DISPSURF *v18; // r14
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v23; // rdi
  struct _SURFOBJ *v24; // rax
  unsigned int v25; // r8d
  __int64 v27; // [rsp+60h] [rbp-69h] BYREF
  struct SURFACE *v28; // [rsp+68h] [rbp-61h] BYREF
  struct SURFACE *v29; // [rsp+70h] [rbp-59h] BYREF
  struct SURFACE *v30; // [rsp+78h] [rbp-51h] BYREF
  __int128 v31; // [rsp+80h] [rbp-49h] BYREF
  __int64 v32; // [rsp+90h] [rbp-39h]
  int v33; // [rsp+98h] [rbp-31h]
  _QWORD v34[2]; // [rsp+A0h] [rbp-29h] BYREF
  __int16 v35; // [rsp+B0h] [rbp-19h]
  __int64 v36; // [rsp+B8h] [rbp-11h]
  __int64 v37; // [rsp+C0h] [rbp-9h]
  __int64 v38; // [rsp+110h] [rbp+47h] BYREF
  CLIPOBJ *v39; // [rsp+128h] [rbp+5Fh]

  v39 = pco;
  v13 = pco;
  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v16 = HDEV;
      if ( HDEV )
      {
        v17 = *(_DWORD *)(HDEV + 40);
        v31 = 0LL;
        v34[1] = 0LL;
        v35 = 256;
        v37 = 0LL;
        v36 = 0LL;
        v34[0] = 0LL;
        v33 = 1;
        if ( (v17 & 1) != 0 )
        {
          *(_QWORD *)&v31 = *(_QWORD *)(v16 + 48);
          v32 = v16;
          GreAcquireSemaphore(v31);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v31, 11LL);
          v17 = *(_DWORD *)(v16 + 40);
        }
        if ( (v17 & 0x20000) != 0 )
        {
          v18 = **(struct _DISPSURF ***)(v16 + 1800);
          if ( v18 )
          {
            do
            {
              v19 = *((_QWORD *)v18 + 6);
              v38 = v19;
              if ( v19 )
              {
                if ( (*(_DWORD *)(v19 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2128) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v19 + 1792) + 624LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v27,
                      (struct PDEVOBJ *)&v38,
                      a1);
                    v21 = *(_QWORD *)(v20 + 1792);
                    DevBitmap = GetDevBitmap(v18, a3);
                    v23 = GetDevBitmap(v18, a2);
                    v24 = GetDevBitmap(v18, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v21 + 624))(
                      v24,
                      v23,
                      DevBitmap,
                      v39,
                      pxlo,
                      pca,
                      pptlBrushOrg,
                      pptfx,
                      prcl,
                      pptl,
                      iMode);
                    if ( v27 )
                      *(_WORD *)(v27 + 78) &= ~0x8000u;
                  }
                }
              }
              v18 = *(struct _DISPSURF **)v18;
            }
            while ( v18 );
            v13 = v39;
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v31);
        if ( v34[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v34);
      }
    }
  }
  v25 = EngPlgBlt(a1, a2, a3, v13, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  if ( v30 )
    bMakeOpaque(v30);
  return v25;
}
