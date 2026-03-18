/*
 * XREFs of ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0295530
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C00A4980 (EngAlphaBlend.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0294BF8 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02954C4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297A60 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  __int64 HDEV; // rax
  __int64 v12; // rbx
  int v13; // eax
  struct _DISPSURF *i; // rsi
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v19; // rax
  unsigned int v20; // r8d
  __int64 v22; // [rsp+48h] [rbp-51h] BYREF
  struct SURFACE *v23; // [rsp+50h] [rbp-49h] BYREF
  struct SURFACE *v24; // [rsp+58h] [rbp-41h] BYREF
  __int128 v25; // [rsp+68h] [rbp-31h] BYREF
  __int64 v26; // [rsp+78h] [rbp-21h]
  int v27; // [rsp+80h] [rbp-19h]
  _QWORD v28[2]; // [rsp+88h] [rbp-11h] BYREF
  __int16 v29; // [rsp+98h] [rbp-1h]
  __int64 v30; // [rsp+A0h] [rbp+7h]
  __int64 v31; // [rsp+A8h] [rbp+Fh]
  __int64 v32; // [rsp+E8h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v12 = HDEV;
      if ( HDEV )
      {
        v13 = *(_DWORD *)(HDEV + 40);
        v25 = 0LL;
        v28[1] = 0LL;
        v29 = 256;
        v31 = 0LL;
        v30 = 0LL;
        v28[0] = 0LL;
        v27 = 1;
        if ( (v13 & 1) != 0 )
        {
          *(_QWORD *)&v25 = *(_QWORD *)(v12 + 48);
          v26 = v12;
          GreAcquireSemaphore(v25);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v25, 11LL);
          v13 = *(_DWORD *)(v12 + 40);
        }
        if ( (v13 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v12 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v15 = *((_QWORD *)i + 6);
            v32 = v15;
            if ( v15 )
            {
              if ( (*(_DWORD *)(v15 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v15 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v15 + 1792) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&v32,
                    a1);
                  v17 = *(_QWORD *)(v16 + 1792);
                  DevBitmap = GetDevBitmap(i, a2);
                  v19 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v17 + 632))(
                    v19,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDest,
                    prclSrc,
                    pBlendObj);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v25);
        if ( v28[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v28);
      }
    }
  }
  v20 = EngAlphaBlend(a1, a2, pco, pxlo, prclDest, prclSrc, pBlendObj);
  if ( v23 )
    bMakeOpaque(v23);
  if ( v24 )
    bMakeOpaque(v24);
  return v20;
}
