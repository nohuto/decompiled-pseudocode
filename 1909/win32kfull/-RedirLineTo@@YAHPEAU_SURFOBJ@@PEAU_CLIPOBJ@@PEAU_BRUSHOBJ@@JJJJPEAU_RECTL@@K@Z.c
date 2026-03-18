/*
 * XREFs of ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0296380
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     EngLineTo @ 0x1C00DEFD0 (EngLineTo.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02954C4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297A60 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirLineTo(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        unsigned int x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX a9)
{
  MIX mix; // r12d
  RECTL *prclBounds; // r13
  __int64 HDEV; // rax
  __int64 v16; // rbx
  int v17; // eax
  _QWORD *i; // rbx
  __int64 v19; // r9
  __int64 v20; // r9
  unsigned int v21; // r8d
  __int64 v23; // [rsp+58h] [rbp-51h] BYREF
  struct SURFACE *v24; // [rsp+60h] [rbp-49h] BYREF
  __int128 v25; // [rsp+68h] [rbp-41h] BYREF
  __int64 v26; // [rsp+78h] [rbp-31h]
  int v27; // [rsp+80h] [rbp-29h]
  __int64 v28; // [rsp+88h] [rbp-21h] BYREF
  int v29; // [rsp+90h] [rbp-19h]
  int v30; // [rsp+94h] [rbp-15h]
  __int16 v31; // [rsp+98h] [rbp-11h]
  __int64 v32; // [rsp+A0h] [rbp-9h]
  __int64 v33; // [rsp+A8h] [rbp-1h]
  __int64 v34; // [rsp+E8h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a1);
  mix = a9;
  prclBounds = a8;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v16 = HDEV;
      if ( HDEV )
      {
        v29 = 0;
        v30 = 0;
        v33 = 0LL;
        v32 = 0LL;
        v28 = 0LL;
        v17 = *(_DWORD *)(HDEV + 40);
        v31 = 256;
        v25 = 0LL;
        v27 = 1;
        if ( (v17 & 1) != 0 )
        {
          *(_QWORD *)&v25 = *(_QWORD *)(v16 + 48);
          v26 = v16;
          GreAcquireSemaphore(v25);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v25, 11LL);
          v17 = *(_DWORD *)(v16 + 40);
        }
        if ( (v17 & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v16 + 1800); i; i = (_QWORD *)*i )
          {
            v19 = i[6];
            v34 = v19;
            if ( v19 )
            {
              if ( (*(_DWORD *)(v19 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1792) + 312LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v34,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, _QWORD, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v20 + 1792) + 312LL))(
                    a1,
                    pco,
                    pbo,
                    x1,
                    y1,
                    x2,
                    y2,
                    prclBounds,
                    mix);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v25);
        if ( v28 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v28);
      }
    }
  }
  v21 = EngLineTo(a1, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  if ( v24 )
    bMakeOpaque(v24);
  return v21;
}
