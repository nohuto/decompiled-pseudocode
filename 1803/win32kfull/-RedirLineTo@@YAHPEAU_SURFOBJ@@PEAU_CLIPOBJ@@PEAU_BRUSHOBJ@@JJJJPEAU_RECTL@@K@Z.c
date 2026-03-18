/*
 * XREFs of ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngLineTo @ 0x1C011BFD0 (EngLineTo.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0269238 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C026B87C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C026D894 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirLineTo(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        unsigned int x1,
        LONG y1,
        LONG x2,
        LONG a7,
        RECTL *a8,
        MIX a9)
{
  MIX mix; // r15d
  RECTL *prclBounds; // r12
  LONG y2; // r13d
  __int64 v16; // rbx
  _QWORD *i; // rbx
  __int64 v18; // r9
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v22; // [rsp+50h] [rbp-88h] BYREF
  struct SURFACE *v23; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v24[80]; // [rsp+60h] [rbp-78h] BYREF
  __int64 HDEV; // [rsp+E0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  mix = a9;
  prclBounds = a8;
  y2 = a7;
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
          for ( i = **(_QWORD ***)(v16 + 1792); i; i = (_QWORD *)*i )
          {
            v18 = i[6];
            HDEV = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1816) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2120) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1784) + 312LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, _QWORD, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v19 + 1784) + 312LL))(
                    a1,
                    pco,
                    pbo,
                    x1,
                    y1,
                    x2,
                    y2,
                    prclBounds,
                    mix);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
      }
    }
  }
  v20 = EngLineTo(a1, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  if ( v23 )
    bMakeOpaque(v23);
  return v20;
}
