/*
 * XREFs of EngLineTo @ 0x1C011BFD0
 * Callers:
 *     W32kCddLineTo @ 0x1C011A270 (W32kCddLineTo.c)
 *     OffLineTo @ 0x1C011C520 (OffLineTo.c)
 *     ?BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0269D70 (-BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026C4F0 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02738A0 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     NtGdiEngLineTo @ 0x1C02838D0 (NtGdiEngLineTo.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00E344C (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C012833C (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C012BB58 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C012BC28 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     EngCreatePath @ 0x1C0257A10 (EngCreatePath.c)
 *     EngDeletePath @ 0x1C0257A90 (EngDeletePath.c)
 */

BOOL __stdcall EngLineTo(
        SURFOBJ *pso,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // r14
  PATHOBJ *v16; // rax
  PATHOBJ *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  PATHOBJ *Path; // rax
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  POINTFIX ptfx; // [rsp+58h] [rbp-A8h] BYREF
  POINTFIX pptfx; // [rsp+60h] [rbp-A0h] BYREF
  struct REGION *v25[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v26; // [rsp+78h] [rbp-88h]
  struct _LINEATTRS v27; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-38h]
  _BYTE v30[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+120h] [rbp+20h]
  int v33; // [rsp+128h] [rbp+28h]
  int v34; // [rsp+150h] [rbp+50h]
  __int64 v35; // [rsp+160h] [rbp+60h]

  v26 = pso;
  v12 = SURFOBJ_TO_SURFACE(pso);
  v13 = 0;
  v14 = v12;
  ptfx.y = 16 * y1;
  pptfx.x = 16 * x2;
  pptfx.y = 16 * y2;
  ptfx.x = 16 * x1;
  if ( !*(_WORD *)(v12 + 100) )
  {
    v22 = *(_QWORD *)(v12 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v22, v26, 0LL, 0);
    if ( (!pco || pco->iDComplexity != 3) && mix == 3341 )
    {
      vSolidLine((struct SURFACE *)v14, 0LL, &ptfx, pco, pbo->iSolidColor);
      return 1;
    }
    memset(&v27, 0, sizeof(v27));
    Path = EngCreatePath();
    v17 = Path;
    if ( !Path )
      return v13;
    if ( PATHOBJ_bMoveTo(Path, ptfx) )
    {
      if ( PATHOBJ_bPolyLineTo(v17, &pptfx, 1u) )
        v13 = bStrokeCosmetic((struct SURFACE *)v14, v17, pco, pbo, &v27, mix);
    }
LABEL_30:
    EngDeletePath(v17);
    return v13;
  }
  memset(&v27, 0, sizeof(v27));
  v27.elWidth.l = 1;
  v16 = EngCreatePath();
  v17 = v16;
  if ( !v16 )
    return v13;
  if ( !PATHOBJ_bMoveTo(v16, ptfx) || !PATHOBJ_bPolyLineTo(v17, &pptfx, 1u) )
    goto LABEL_30;
  v22 = *(_QWORD *)(v14 + 48);
  v32 = 0LL;
  v33 = 0;
  v34 = 1;
  v35 = 0LL;
  v31 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v25);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v25);
  if ( pco )
    goto LABEL_19;
  if ( !v25[0] )
  {
LABEL_25:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v25);
    goto LABEL_30;
  }
  if ( !bUMPDSecurityGateEx(v19, v18) || prclBounds )
  {
    RGNOBJ::vSet((RGNOBJ *)v25, prclBounds);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v30, v25[0], (struct ERECTL *)prclBounds, 0);
    pco = (CLIPOBJ *)v30;
LABEL_19:
    PRECOMPUTE::vInit(v28, v14, &v22, v17, pco, 0LL, &v27, mix, 0, 0);
    if ( v29 )
    {
      if ( (*(_DWORD *)(v14 + 112) & 0x20) != 0 )
        v20 = (*(__int64 (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))(v22 + 2792))(
                v26,
                v17,
                pco,
                0LL,
                pbo,
                0LL,
                &v27,
                mix);
      else
        v20 = ((__int64 (__fastcall *)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))EngStrokePath)(
                v26,
                v17,
                pco,
                0LL,
                pbo,
                0LL,
                &v27,
                mix);
      v13 = v20;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
    goto LABEL_25;
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:EngLineTo:prclBounds == NULL\n", 733);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v25);
  return 0;
}
