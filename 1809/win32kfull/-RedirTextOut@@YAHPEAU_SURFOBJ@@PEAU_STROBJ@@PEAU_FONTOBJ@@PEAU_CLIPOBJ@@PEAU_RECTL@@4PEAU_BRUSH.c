/*
 * XREFs of ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02814A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngTextOut @ 0x1C0087B90 (EngTextOut.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C027D1B8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027F7B0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02818A8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *a9,
        MIX a10)
{
  MIX mix; // r12d
  POINTL *pptlOrg; // r13
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
  mix = a10;
  pptlOrg = a9;
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
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1792) + 248LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v19 + 1792) + 248LL))(
                    a1,
                    pstro,
                    pfo,
                    pco,
                    prclExtra,
                    prclOpaque,
                    pboFore,
                    pboOpaque,
                    pptlOrg,
                    mix);
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
  v20 = EngTextOut(a1, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
  if ( v23 )
    bMakeOpaque(v23);
  return v20;
}
