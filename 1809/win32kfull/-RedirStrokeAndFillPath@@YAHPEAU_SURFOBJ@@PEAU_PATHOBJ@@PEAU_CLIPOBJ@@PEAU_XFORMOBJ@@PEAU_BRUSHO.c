/*
 * XREFs of ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02810A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     EngStrokeAndFillPath @ 0x1C026CAE0 (EngStrokeAndFillPath.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C027D1B8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027F7B0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02818A8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX a9,
        FLONG a10)
{
  FLONG flOptions; // r12d
  MIX mixFill; // r13d
  __int64 v16; // rbx
  _QWORD *i; // rbx
  __int64 v18; // r9
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v22; // [rsp+68h] [rbp-79h] BYREF
  struct SURFACE *v23; // [rsp+70h] [rbp-71h] BYREF
  _BYTE v24[32]; // [rsp+78h] [rbp-69h] BYREF
  _BYTE v25[80]; // [rsp+98h] [rbp-49h] BYREF
  __int64 HDEV; // [rsp+118h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  flOptions = a10;
  mixFill = a9;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v16 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v16 + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v16 + 1800); i; i = (_QWORD *)*i )
          {
            v18 = i[6];
            HDEV = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1792) + 192LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v19 + 1792) + 192LL))(
                    a1,
                    ppo,
                    pco,
                    pxo,
                    pboStroke,
                    plineattrs,
                    pboFill,
                    pptlBrushOrg,
                    mixFill,
                    flOptions);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
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
  v20 = EngStrokeAndFillPath(a1, ppo, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
  if ( v23 )
    bMakeOpaque(v23);
  return v20;
}
