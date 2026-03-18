/*
 * XREFs of xInsertMetricsRFONTOBJ @ 0x1C00800D4
 * Callers:
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0085C44 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080A04 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C00844BC (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xInsertMetricsRFONTOBJ(RFONTOBJ *this, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // r14
  BOOL v10; // r15d
  struct _GLYPHDATA *v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  unsigned __int16 v15; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-98h] BYREF
  struct _GLYPHDATA v18; // [rsp+60h] [rbp-88h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)this + 472LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
  {
    v15 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v15, 1u, &v16, 0, 0);
    v8 = v16;
    v3 = *(_QWORD *)this;
  }
  else
  {
    v8 = a3;
  }
  if ( v8 == *(_DWORD *)(v3 + 448) && (v14 = *(_QWORD *)(v7 + 8)) != 0 )
  {
    *a2 = v14;
    return 1LL;
  }
  else if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
  {
    v9 = *(_QWORD *)this;
    v10 = *(_DWORD *)(*(_QWORD *)this + 72LL) == 2;
    memset(&v18, 0, sizeof(v18));
    v17 = *(_QWORD *)(v9 + 112);
    v11 = &v18;
    if ( !*(_DWORD *)(v9 + 628) )
      v11 = *(struct _GLYPHDATA **)(v3 + 504);
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)&v17,
                         *(struct DHPDEV__ **)(v9 + 96),
                         (struct _FONTOBJ *)v9,
                         v10 + 1,
                         v8,
                         v11,
                         0LL,
                         0) != -1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 628LL) )
      {
        v12 = *(_QWORD *)(v3 + 504);
        *(_OWORD *)v12 = *(_OWORD *)&v18.gdf.pgb;
        *(_QWORD *)(v12 + 16) = *(_QWORD *)&v18.fxA;
      }
      **(_QWORD **)(v3 + 504) = 0LL;
      v4 = 1;
      *a2 = *(_QWORD *)(v3 + 504);
      *(_QWORD *)(v3 + 504) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 628LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
    }
    return v4;
  }
  else
  {
    return 0LL;
  }
}
