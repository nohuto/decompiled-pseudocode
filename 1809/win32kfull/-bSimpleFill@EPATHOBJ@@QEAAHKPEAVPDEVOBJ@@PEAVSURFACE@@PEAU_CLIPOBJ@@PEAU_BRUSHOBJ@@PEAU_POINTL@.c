/*
 * XREFs of ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013EA40
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0005BD4 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C013D880 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026A288 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026A760 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C013EBB0 (-bSubOverflow@@YAHJJ@Z.c)
 *     EngFillPath @ 0x1C013EBE0 (EngFillPath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0141370 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0150D14 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleFill(
        PATHOBJ *ppo,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  __m128i *v13; // r9
  int v14; // ebx
  __m128i *v15; // r9
  int v17; // r12d
  __int64 (__fastcall *v18)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v19; // r15d
  __int64 (__fastcall *v20)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  _BYTE v21[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v22[32]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v23; // [rsp+90h] [rbp-38h]

  memset(v21, 0, sizeof(v21));
  v14 = 0;
  if ( (unsigned int)bSubOverflow(
                       _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)&ppo[1] + 48LL), 8)),
                       *(_DWORD *)(*(_QWORD *)&ppo[1] + 48LL))
    || (unsigned int)bSubOverflow(_mm_srli_si128(v13[48LL], 8).m128i_i32[1], HIDWORD(v13[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v15[3], 8)) - v15[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v15[48LL], 8).m128i_i32[1] - HIDWORD(v15[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  if ( (*((_DWORD *)a4 + 28) & 0x40) == 0
    || ((a2 & 8) == 0 || (flOptions & 2) == 0) && ((flOptions & 2) != 0 || (a2 & 4) == 0) )
  {
    goto LABEL_10;
  }
  PRECOMPUTE::vInit(v22, a4, a3, ppo, pco, 0LL, 0LL, mix, flOptions, 1);
  if ( v23 )
  {
    v17 = -1;
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        ++*((_DWORD *)a4 + 23);
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
          PushThreadGuardedObject(v21, ppo, vCleanupPathStackObj);
        v18 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2808LL);
        if ( v18 )
          v19 = v18((char *)a4 + 24, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
        else
          v19 = -1;
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
          PopThreadGuardedObject(v21);
        if ( v19 == 1 )
        {
LABEL_36:
          v14 = 1;
          goto LABEL_37;
        }
        if ( v19 == -1 )
          goto LABEL_37;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_37;
    }
    ++*((_DWORD *)a4 + 23);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
      PushThreadGuardedObject(v21, ppo, vCleanupPathStackObj);
    v20 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2808LL);
    if ( v20 )
      v17 = v20((char *)a4 + 24, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
      PopThreadGuardedObject(v21);
    if ( v17 != 1 )
    {
      if ( v17 != -1 )
      {
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v22);
LABEL_10:
        ++*((_DWORD *)a4 + 23);
        return EngFillPath((SURFOBJ *)((char *)a4 + 24), ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
      }
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  EngSetLastError(8u);
LABEL_37:
  PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v22);
  return v14;
}
