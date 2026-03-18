/*
 * XREFs of ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0297800
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     EngTransparentBlt @ 0x1C00D2CA0 (EngTransparentBlt.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0294BF8 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02954C4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297A60 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  __int64 HDEV; // rax
  __int64 v13; // rbx
  int v14; // eax
  struct _DISPSURF *i; // rsi
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v20; // rax
  unsigned int v21; // r8d
  __int64 v23; // [rsp+58h] [rbp-59h] BYREF
  struct SURFACE *v24; // [rsp+60h] [rbp-51h] BYREF
  struct SURFACE *v25; // [rsp+68h] [rbp-49h] BYREF
  __int128 v26; // [rsp+78h] [rbp-39h] BYREF
  __int64 v27; // [rsp+88h] [rbp-29h]
  int v28; // [rsp+90h] [rbp-21h]
  _QWORD v29[2]; // [rsp+98h] [rbp-19h] BYREF
  __int16 v30; // [rsp+A8h] [rbp-9h]
  __int64 v31; // [rsp+B0h] [rbp-1h]
  __int64 v32; // [rsp+B8h] [rbp+7h]
  __int64 v33; // [rsp+F8h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v13 = HDEV;
      if ( HDEV )
      {
        v14 = *(_DWORD *)(HDEV + 40);
        v26 = 0LL;
        v29[1] = 0LL;
        v30 = 256;
        v32 = 0LL;
        v31 = 0LL;
        v29[0] = 0LL;
        v28 = 1;
        if ( (v14 & 1) != 0 )
        {
          *(_QWORD *)&v26 = *(_QWORD *)(v13 + 48);
          v27 = v13;
          GreAcquireSemaphore(v26);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v26, 11LL);
          v14 = *(_DWORD *)(v13 + 40);
        }
        if ( (v14 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v13 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v16 = *((_QWORD *)i + 6);
            v33 = v16;
            if ( v16 )
            {
              if ( (*(_DWORD *)(v16 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v16 + 1792) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v33,
                    a1);
                  v18 = *(_QWORD *)(v17 + 1792);
                  DevBitmap = GetDevBitmap(i, a2);
                  v20 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(v18 + 656))(
                    v20,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDst,
                    prclSrc,
                    iTransColor,
                    ulReserved);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26);
        if ( v29[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v29);
      }
    }
  }
  v21 = EngTransparentBlt(a1, a2, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  if ( v24 )
    bMakeOpaque(v24);
  if ( v25 )
    bMakeOpaque(v25);
  return v21;
}
