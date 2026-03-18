/*
 * XREFs of ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0297370
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     EngStrokePath @ 0x1C014CCD0 (EngStrokePath.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02954C4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297A60 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *a7,
        MIX a8)
{
  MIX mix; // r12d
  LINEATTRS *plineattrs; // r13
  __int64 HDEV; // rax
  __int64 v15; // rbx
  int v16; // eax
  _QWORD *i; // rbx
  __int64 v18; // r9
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v22; // [rsp+58h] [rbp-49h] BYREF
  struct SURFACE *v23; // [rsp+60h] [rbp-41h] BYREF
  __int128 v24; // [rsp+68h] [rbp-39h] BYREF
  __int64 v25; // [rsp+78h] [rbp-29h]
  int v26; // [rsp+80h] [rbp-21h]
  __int64 v27; // [rsp+88h] [rbp-19h] BYREF
  int v28; // [rsp+90h] [rbp-11h]
  int v29; // [rsp+94h] [rbp-Dh]
  __int16 v30; // [rsp+98h] [rbp-9h]
  __int64 v31; // [rsp+A0h] [rbp-1h]
  __int64 v32; // [rsp+A8h] [rbp+7h]
  __int64 v33; // [rsp+E8h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  mix = a8;
  plineattrs = a7;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v15 = HDEV;
      if ( HDEV )
      {
        v28 = 0;
        v29 = 0;
        v32 = 0LL;
        v31 = 0LL;
        v27 = 0LL;
        v16 = *(_DWORD *)(HDEV + 40);
        v30 = 256;
        v24 = 0LL;
        v26 = 1;
        if ( (v16 & 1) != 0 )
        {
          *(_QWORD *)&v24 = *(_QWORD *)(v15 + 48);
          v25 = v15;
          GreAcquireSemaphore(v24);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v24, 11LL);
          v16 = *(_DWORD *)(v15 + 40);
        }
        if ( (v16 & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v15 + 1800); i; i = (_QWORD *)*i )
          {
            v18 = i[6];
            v33 = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1792) + 176LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&v33,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v19 + 1792) + 176LL))(
                    a1,
                    ppo,
                    pco,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v24);
        if ( v27 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v27);
      }
    }
  }
  v20 = EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  if ( v23 )
    bMakeOpaque(v23);
  return v20;
}
