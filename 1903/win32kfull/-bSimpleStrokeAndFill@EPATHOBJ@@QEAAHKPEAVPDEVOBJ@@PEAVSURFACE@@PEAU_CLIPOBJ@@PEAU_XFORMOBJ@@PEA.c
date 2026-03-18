/*
 * XREFs of ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0135B04
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0075DA0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00788E0 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0078A58 (-bSubOverflow@@YAHJJ@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C007AB84 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     EngStrokeAndFillPath @ 0x1C014B8D0 (EngStrokeAndFillPath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C014FBCC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0156BD0 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleStrokeAndFill(
        PATHOBJ *ppo,
        char a2,
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
  int v19; // eax
  int v20; // edi
  CLIPOBJ *v21; // r14
  int v22; // r12d
  __int64 (__fastcall *v23)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  BOOL v25; // edx
  MIX v26; // edx
  __int64 (__fastcall *v27)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v28; // r14d
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
  v19 = *((_DWORD *)a4 + 28);
  v20 = 1;
  ++*((_DWORD *)a4 + 23);
  if ( (v19 & 0x80u) != 0 )
  {
    v21 = pco;
    PRECOMPUTE::vInit(v30, a4, a3, ppo, pco, pxo, plineattrs, mixFill, flOptions, 2);
    if ( !v31 )
    {
      EngSetLastError(8u);
      goto LABEL_18;
    }
    if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
    {
      v22 = -1;
      if ( (ppo->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PushThreadGuardedObject(v29, ppo, vCleanupPathStackObj);
          v27 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2816LL);
          if ( v27 )
            v28 = v27((char *)a4 + 24, ppo, pco, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
          else
            v28 = -1;
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PopThreadGuardedObject(v29);
          if ( v28 == 1 )
            goto LABEL_17;
          if ( v28 == -1 )
            goto LABEL_18;
          v21 = pco;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
          goto LABEL_18;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PushThreadGuardedObject(v29, ppo, vCleanupPathStackObj);
      v23 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2816LL);
      if ( v23 )
        v22 = v23((char *)a4 + 24, ppo, v21, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PopThreadGuardedObject(v29);
      if ( v22 == 1 )
      {
LABEL_17:
        v17 = 1;
LABEL_18:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v30);
        return v17;
      }
      if ( v22 == -1 )
        goto LABEL_18;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v30);
  }
  v25 = 0;
  if ( (plineattrs->fl & 1) == 0 )
    goto LABEL_23;
  if ( (unsigned __int8)mixFill == 13 )
    v25 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a4 + 6) + 2140LL) - 1) <= 1;
  if ( !v25 )
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
LABEL_23:
  v26 = mixFill;
  if ( (pbo[5].iSolidColor & 0x8000) == 0 )
    v26 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( (pboStroke[5].iSolidColor & 0x8000) == 0 )
    v12 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( !EPATHOBJ::bSimpleFill(ppo, a2, a3, a4, pco, pbo, pptlBrushOrg, v26, flOptions)
    || !EPATHOBJ::bSimpleStroke(ppo, a2, a3, a4, pco, pxo, pboStroke, pptlBrushOrg, plineattrs, v12) )
  {
    return 0;
  }
  return v20;
}
