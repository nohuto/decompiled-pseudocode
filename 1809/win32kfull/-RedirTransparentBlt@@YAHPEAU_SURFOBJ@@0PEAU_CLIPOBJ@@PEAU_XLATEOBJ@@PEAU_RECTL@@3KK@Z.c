/*
 * XREFs of ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02816A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngTransparentBlt @ 0x1C0093A50 (EngTransparentBlt.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C027D1B8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027EE98 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027F7B0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02818A8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
  __int64 v12; // rbx
  struct _DISPSURF *i; // rsi
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v18; // rax
  unsigned int v19; // r8d
  __int64 v21; // [rsp+58h] [rbp-79h] BYREF
  struct SURFACE *v22; // [rsp+60h] [rbp-71h] BYREF
  struct SURFACE *v23; // [rsp+68h] [rbp-69h] BYREF
  _BYTE v24[32]; // [rsp+78h] [rbp-59h] BYREF
  _BYTE v25[80]; // [rsp+98h] [rbp-39h] BYREF
  __int64 HDEV; // [rsp+118h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v12 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v12 + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v12 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v14 = *((_QWORD *)i + 6);
            HDEV = v14;
            if ( v14 )
            {
              if ( (*(_DWORD *)(v14 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v14 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v14 + 1792) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v21,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  v16 = *(_QWORD *)(v15 + 1792);
                  DevBitmap = GetDevBitmap(i, a2);
                  v18 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(v16 + 656))(
                    v18,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDst,
                    prclSrc,
                    iTransColor,
                    ulReserved);
                  if ( v21 )
                    *(_WORD *)(v21 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
        DCOBJ::~DCOBJ((DCOBJ *)v25);
      }
    }
  }
  v19 = EngTransparentBlt(a1, a2, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  if ( v22 )
    bMakeOpaque(v22);
  if ( v23 )
    bMakeOpaque(v23);
  return v19;
}
