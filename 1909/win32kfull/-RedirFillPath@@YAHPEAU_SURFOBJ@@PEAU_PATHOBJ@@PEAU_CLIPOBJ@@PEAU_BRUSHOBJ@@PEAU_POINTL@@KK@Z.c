/*
 * XREFs of ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0295F10
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     EngFillPath @ 0x1C00CE1A0 (EngFillPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02954C4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297A60 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX a6,
        FLONG a7)
{
  FLONG flOptions; // r12d
  MIX mix; // r13d
  __int64 HDEV; // rax
  __int64 v14; // rbx
  int v15; // eax
  _QWORD *i; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  unsigned int v19; // r8d
  __int64 v21; // [rsp+48h] [rbp-41h] BYREF
  struct SURFACE *v22; // [rsp+50h] [rbp-39h] BYREF
  __int128 v23; // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+68h] [rbp-21h]
  int v25; // [rsp+70h] [rbp-19h]
  __int64 v26; // [rsp+78h] [rbp-11h] BYREF
  int v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+84h] [rbp-5h]
  __int16 v29; // [rsp+88h] [rbp-1h]
  __int64 v30; // [rsp+90h] [rbp+7h]
  __int64 v31; // [rsp+98h] [rbp+Fh]
  __int64 v32; // [rsp+D8h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a1);
  flOptions = a7;
  mix = a6;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v14 = HDEV;
      if ( HDEV )
      {
        v27 = 0;
        v28 = 0;
        v31 = 0LL;
        v30 = 0LL;
        v26 = 0LL;
        v15 = *(_DWORD *)(HDEV + 40);
        v29 = 256;
        v23 = 0LL;
        v25 = 1;
        if ( (v15 & 1) != 0 )
        {
          *(_QWORD *)&v23 = *(_QWORD *)(v14 + 48);
          v24 = v14;
          GreAcquireSemaphore(v23);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v23, 11LL);
          v15 = *(_DWORD *)(v14 + 40);
        }
        if ( (v15 & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v14 + 1800); i; i = (_QWORD *)*i )
          {
            v17 = i[6];
            v32 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1792) + 184LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v21,
                    (struct PDEVOBJ *)&v32,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v18 + 1792) + 184LL))(
                    a1,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v21 )
                    *(_WORD *)(v21 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v23);
        if ( v26 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v26);
      }
    }
  }
  v19 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
  if ( v22 )
    bMakeOpaque(v22);
  return v19;
}
