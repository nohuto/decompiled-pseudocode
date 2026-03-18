/*
 * XREFs of ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00CD54C
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C00CB370 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0282EF4 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 * Callees:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CE000 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C00CE178 (-bSubOverflow@@YAHJJ@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00F2BBC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngStrokePath @ 0x1C014CCD0 (EngStrokePath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C015098C (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0157990 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

int __fastcall EPATHOBJ::bSimpleStroke(
        PATHOBJ *ppo,
        unsigned int a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  unsigned int v10; // r15d
  struct PDEVOBJ *v11; // r12
  __m128i *v14; // r10
  int v15; // ebx
  __m128i *v16; // r10
  int v17; // eax
  CLIPOBJ *v18; // r15
  int v20; // r12d
  __int64 (__fastcall *v21)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  __int64 (__fastcall *v22)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  int v23; // r15d
  _BYTE v24[32]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v25[32]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v26; // [rsp+90h] [rbp-48h]

  v10 = a2;
  v11 = a3;
  memset(v24, 0, sizeof(v24));
  v15 = 0;
  if ( (unsigned int)bSubOverflow(
                       _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)&ppo[1] + 48LL), 8)),
                       *(_DWORD *)(*(_QWORD *)&ppo[1] + 48LL))
    || (unsigned int)bSubOverflow(_mm_srli_si128(v14[48LL], 8).m128i_i32[1], HIDWORD(v14[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v16[3], 8)) - v16[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v16[48LL], 8).m128i_i32[1] - HIDWORD(v16[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( ppo->cCurves )
  {
    v17 = *((_DWORD *)a4 + 28);
    ++*((_DWORD *)a4 + 23);
    if ( (v17 & 0x20) == 0 )
      goto LABEL_10;
    v18 = pco;
    PRECOMPUTE::vInit(v25, a4, v11, ppo, pco, pxo, plineattrs, mix, 0, 0);
    if ( !v26 )
    {
      EngSetLastError(8u);
      goto LABEL_21;
    }
    if ( (plineattrs->fl & 1) != 0 && (a2 & 2) == 0 )
    {
LABEL_9:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v25);
      v10 = a2;
LABEL_10:
      if ( (plineattrs->fl & 1) == 0 )
        return EngStrokePath((SURFOBJ *)((char *)a4 + 24), ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
      if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, pxo, plineattrs) )
        return EPATHOBJ::bSimpleFill(ppo, v10, v11, a4, pco, pbo, pptlBrushOrg, mix, 2u);
      return 0;
    }
    v20 = -1;
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
          PushThreadGuardedObject(v24, ppo, vCleanupPathStackObj);
        v22 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2800LL);
        if ( v22 )
          v23 = v22((char *)a4 + 24, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
        else
          v23 = -1;
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
          PopThreadGuardedObject(v24);
        if ( v23 == 1 )
          goto LABEL_20;
        if ( v23 == -1 )
          goto LABEL_21;
        v18 = pco;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_21;
    }
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
      PushThreadGuardedObject(v24, ppo, vCleanupPathStackObj);
    v21 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2800LL);
    if ( v21 )
      v20 = v21((char *)a4 + 24, ppo, v18, pxo, pbo, pptlBrushOrg, plineattrs, mix);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
      PopThreadGuardedObject(v24);
    if ( v20 != 1 )
    {
      if ( v20 != -1 )
      {
        v11 = a3;
        goto LABEL_9;
      }
LABEL_21:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v25);
      return v15;
    }
LABEL_20:
    v15 = 1;
    goto LABEL_21;
  }
  return 1;
}
