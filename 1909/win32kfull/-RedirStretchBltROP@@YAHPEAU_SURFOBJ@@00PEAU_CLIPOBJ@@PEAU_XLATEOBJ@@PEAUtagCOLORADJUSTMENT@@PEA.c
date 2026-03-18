/*
 * XREFs of ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0296E00
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     EngStretchBltROP @ 0x1C00E49C0 (EngStretchBltROP.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0294BF8 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02954C4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297A60 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  CLIPOBJ *v15; // rdi
  __int64 HDEV; // rax
  __int64 v18; // rbx
  int v19; // eax
  struct _DISPSURF *v20; // r14
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v25; // rdi
  struct _SURFOBJ *v26; // rax
  unsigned int v27; // r8d
  __int64 v29; // [rsp+70h] [rbp-69h] BYREF
  struct SURFACE *v30; // [rsp+78h] [rbp-61h] BYREF
  struct SURFACE *v31; // [rsp+80h] [rbp-59h] BYREF
  struct SURFACE *v32; // [rsp+88h] [rbp-51h] BYREF
  __int128 v33; // [rsp+90h] [rbp-49h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-39h]
  int v35; // [rsp+A8h] [rbp-31h]
  _QWORD v36[2]; // [rsp+B0h] [rbp-29h] BYREF
  __int16 v37; // [rsp+C0h] [rbp-19h]
  __int64 v38; // [rsp+C8h] [rbp-11h]
  __int64 v39; // [rsp+D0h] [rbp-9h]
  __int64 v40; // [rsp+120h] [rbp+47h] BYREF
  CLIPOBJ *v41; // [rsp+138h] [rbp+5Fh]

  v41 = pco;
  v15 = pco;
  REDIROPEN::REDIROPEN((REDIROPEN *)&v32, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v31, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v18 = HDEV;
      if ( HDEV )
      {
        v19 = *(_DWORD *)(HDEV + 40);
        v33 = 0LL;
        v36[1] = 0LL;
        v37 = 256;
        v39 = 0LL;
        v38 = 0LL;
        v36[0] = 0LL;
        v35 = 1;
        if ( (v19 & 1) != 0 )
        {
          *(_QWORD *)&v33 = *(_QWORD *)(v18 + 48);
          v34 = v18;
          GreAcquireSemaphore(v33);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v33, 11LL);
          v19 = *(_DWORD *)(v18 + 40);
        }
        if ( (v19 & 0x20000) != 0 )
        {
          v20 = **(struct _DISPSURF ***)(v18 + 1800);
          if ( v20 )
          {
            do
            {
              v21 = *((_QWORD *)v20 + 6);
              v40 = v21;
              if ( v21 )
              {
                if ( (*(_DWORD *)(v21 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v21 + 2128) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v21 + 1792) + 616LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v29,
                      (struct PDEVOBJ *)&v40,
                      a1);
                    v23 = *(_QWORD *)(v22 + 1792);
                    DevBitmap = GetDevBitmap(v20, a3);
                    v25 = GetDevBitmap(v20, a2);
                    v26 = GetDevBitmap(v20, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v23 + 616))(
                      v26,
                      v25,
                      DevBitmap,
                      v41,
                      pxlo,
                      pca,
                      pptlHTOrg,
                      prclDest,
                      prclSrc,
                      pptlMask,
                      iMode,
                      pbo,
                      rop4);
                    if ( v29 )
                      *(_WORD *)(v29 + 78) &= ~0x8000u;
                  }
                }
              }
              v20 = *(struct _DISPSURF **)v20;
            }
            while ( v20 );
            v15 = v41;
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v33);
        if ( v36[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v36);
      }
    }
  }
  v27 = EngStretchBltROP(a1, a2, a3, v15, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  if ( v30 )
    bMakeOpaque(v30);
  if ( v31 )
    bMakeOpaque(v31);
  if ( v32 )
    bMakeOpaque(v32);
  return v27;
}
