/*
 * XREFs of ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0257204
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C007C3CC (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C007C62C (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0104EB4 (-bSubOverflow@@YAHJJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C012BB58 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C012BC28 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     EngStrokeAndFillPath @ 0x1C02597B0 (EngStrokeAndFillPath.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleStrokeAndFill(
        PATHOBJ *ppo,
        unsigned int a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  MIX v12; // r13d
  __m128i *v16; // r10
  int v17; // ebx
  __m128i *v18; // r10
  int v20; // eax
  int v21; // edi
  CLIPOBJ *v22; // r14
  int v23; // r12d
  __int64 (__fastcall *v24)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v25; // r14d
  __int64 (__fastcall *v26)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  BOOL v27; // edx
  MIX v28; // edx
  _BYTE v29[32]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v30[32]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-48h]

  v12 = mixFill;
  memset(v29, 0, sizeof(v29));
  v17 = 0;
  if ( bSubOverflow(
         _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)&ppo[1] + 48LL), 8)),
         *(_DWORD *)(*(_QWORD *)&ppo[1] + 48LL))
    || bSubOverflow(_mm_srli_si128(v16[48LL], 8).m128i_i32[1], HIDWORD(v16[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v18[3], 8)) - v18[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v18[48LL], 8).m128i_i32[1] - HIDWORD(v18[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  v20 = *((_DWORD *)a4 + 28);
  v21 = 1;
  ++*((_DWORD *)a4 + 23);
  if ( (v20 & 0x80u) != 0 )
  {
    v22 = pco;
    PRECOMPUTE::vInit(
      (__int64)v30,
      a4,
      a3,
      (struct EPATHOBJ *)ppo,
      (__int64)pco,
      pxo,
      plineattrs,
      mixFill,
      flOptions,
      2);
    if ( !v31 )
    {
      EngSetLastError(8u);
LABEL_33:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v30);
      return v17;
    }
    if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
    {
      v23 = -1;
      if ( (ppo->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PushThreadGuardedObject(v29, ppo, vCleanupPathStackObj);
          v24 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2808LL);
          if ( v24 )
            v25 = v24((char *)a4 + 24, ppo, pco, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
          else
            v25 = -1;
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PopThreadGuardedObject(v29);
          if ( v25 == 1 )
            goto LABEL_31;
          if ( v25 == -1 )
            goto LABEL_33;
          v22 = pco;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
          goto LABEL_33;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PushThreadGuardedObject(v29, ppo, vCleanupPathStackObj);
      v26 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2808LL);
      if ( v26 )
        v23 = v26((char *)a4 + 24, ppo, v22, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PopThreadGuardedObject(v29);
      if ( v23 == 1 )
      {
LABEL_31:
        v17 = 1;
        goto LABEL_33;
      }
      if ( v23 == -1 )
        goto LABEL_33;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v30);
  }
  v27 = 0;
  if ( (plineattrs->fl & 1) == 0 )
    goto LABEL_40;
  if ( (unsigned __int8)mixFill == 13 )
    v27 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a4 + 6) + 2132LL) - 1) <= 1;
  if ( !v27 )
    return EngStrokeAndFillPath(
             (SURFOBJ *)((char *)a4 + 24),
             ppo,
             pco,
             pxo,
             pboStroke,
             plineattrs,
             pbo,
             pptlBrushOrg,
             mixFill,
             flOptions);
LABEL_40:
  v28 = mixFill;
  if ( (pbo[5].iSolidColor & 0x8000) == 0 )
    v28 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( (pboStroke[5].iSolidColor & 0x8000) == 0 )
    v12 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( !EPATHOBJ::bSimpleFill(ppo, a2, a3, a4, pco, pbo, pptlBrushOrg, v28, flOptions)
    || !EPATHOBJ::bSimpleStroke(ppo, a2, a3, a4, pco, pxo, pboStroke, pptlBrushOrg, plineattrs, v12) )
  {
    return 0;
  }
  return v21;
}
