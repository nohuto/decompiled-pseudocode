/*
 * XREFs of ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0295790
 * Callers:
 *     ?RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0295A50 (-RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     EngBitBlt @ 0x1C009E5C0 (EngBitBlt.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0294BF8 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02954C4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297A60 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  __int64 HDEV; // rax
  __int64 v16; // rbx
  int v17; // eax
  struct _DISPSURF *i; // rsi
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v23; // rax
  unsigned int v24; // r8d
  __int64 v26; // [rsp+68h] [rbp-69h] BYREF
  struct SURFACE *v27; // [rsp+70h] [rbp-61h] BYREF
  struct SURFACE *v28; // [rsp+78h] [rbp-59h] BYREF
  struct SURFACE *v29; // [rsp+80h] [rbp-51h] BYREF
  __int128 v30; // [rsp+88h] [rbp-49h] BYREF
  __int64 v31; // [rsp+98h] [rbp-39h]
  int v32; // [rsp+A0h] [rbp-31h]
  _QWORD v33[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int16 v34; // [rsp+B8h] [rbp-19h]
  __int64 v35; // [rsp+C0h] [rbp-11h]
  __int64 v36; // [rsp+C8h] [rbp-9h]
  __int64 v37; // [rsp+108h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v16 = HDEV;
      if ( HDEV )
      {
        v17 = *(_DWORD *)(HDEV + 40);
        v30 = 0LL;
        v33[1] = 0LL;
        v34 = 256;
        v36 = 0LL;
        v35 = 0LL;
        v33[0] = 0LL;
        v32 = 1;
        if ( (v17 & 1) != 0 )
        {
          *(_QWORD *)&v30 = *(_QWORD *)(v16 + 48);
          v31 = v16;
          GreAcquireSemaphore(v30);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v30, 11LL);
          v17 = *(_DWORD *)(v16 + 40);
        }
        if ( (v17 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v16 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v19 = *((_QWORD *)i + 6);
            v37 = v19;
            if ( v19 )
            {
              if ( (*(_DWORD *)(v19 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1792) + 208LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v26,
                    (struct PDEVOBJ *)&v37,
                    a1);
                  v21 = *(_QWORD *)(v20 + 1792);
                  DevBitmap = GetDevBitmap(i, a2);
                  v23 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v21 + 208))(
                    v23,
                    DevBitmap,
                    a3,
                    pco,
                    pxlo,
                    prclTrg,
                    pptlSrc,
                    pptlMask,
                    pbo,
                    pptlBrush,
                    rop4);
                  if ( v26 )
                    *(_WORD *)(v26 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v30);
        if ( v33[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v33);
      }
    }
  }
  v24 = EngBitBlt(a1, a2, a3, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  if ( v27 )
    bMakeOpaque(v27);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  return v24;
}
