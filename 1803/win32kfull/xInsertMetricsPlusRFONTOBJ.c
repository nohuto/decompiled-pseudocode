/*
 * XREFs of xInsertMetricsPlusRFONTOBJ @ 0x1C007FECC
 * Callers:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0085994 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080754 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C00843B8 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C00844BC (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0085C44 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0127EC4 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xInsertMetricsPlusRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbp
  unsigned int v8; // r15d
  struct RFONT *v9; // rbp
  unsigned __int64 v10; // rsi
  void *v11; // rax
  struct _GLYPHDATA *v12; // r9
  void *v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  struct _GLYPHDATA *v18; // rcx
  unsigned __int16 v19; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-80h] BYREF
  struct _GLYPHDATA v21; // [rsp+40h] [rbp-78h] BYREF

  v3 = *(_QWORD *)this;
  v7 = *(_QWORD *)(*(_QWORD *)this + 472LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
  {
    v19 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v19, 1u, &v20, 0, 0);
    v8 = v20;
    v3 = *(_QWORD *)this;
  }
  else
  {
    v8 = a3;
  }
  if ( v8 == *(_DWORD *)(v3 + 448) )
  {
    v18 = *(struct _GLYPHDATA **)(v7 + 8);
    if ( v18 )
    {
      *a2 = v18;
      return 1LL;
    }
  }
  if ( !*(_DWORD *)(v3 + 72) )
    return RFONTOBJ::bInsertMetrics(this, a2, a3);
  if ( !(unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
    return 0LL;
  v9 = *(struct RFONT **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 72LL) != 2 )
  {
    memset(&v21, 0, sizeof(v21));
    v10 = *(unsigned int *)(v3 + 624);
    if ( v10 < *(_QWORD *)(v3 + 584) - *(_QWORD *)(v3 + 576)
      || (LODWORD(v10) = ulCallAndConvertFontOutput(v9, (struct _FONTOBJ *)v9, v8, &v21, 0LL, 0), (_DWORD)v10 != -1) )
    {
      v11 = RFONTOBJ::pgbCheckGlyphCache(this, (unsigned int)v10);
      v12 = &v21;
      v13 = v11;
      if ( !*(_DWORD *)(*(_QWORD *)this + 628LL) )
        v12 = *(struct _GLYPHDATA **)(v3 + 504);
      v14 = ulCallAndConvertFontOutput(*(struct RFONT **)this, *(struct _FONTOBJ **)this, v8, v12, v11, v10);
      v15 = v14;
      if ( v14 != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 628LL) )
        {
          v16 = *(_QWORD *)(v3 + 504);
          *(_OWORD *)v16 = *(_OWORD *)&v21.gdf.pgb;
          *(_QWORD *)(v16 + 16) = *(_QWORD *)&v21.fxA;
        }
        *a2 = *(struct _GLYPHDATA **)(v3 + 504);
        *(_QWORD *)(v3 + 504) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 628LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
        if ( v13 )
          *(_QWORD *)(v3 + 576) += v15;
        return 1LL;
      }
    }
    return 0LL;
  }
  return RFONTOBJ::bInsertMetricsPlusPath(this, a2, a3);
}
