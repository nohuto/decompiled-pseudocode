/*
 * XREFs of ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012114C
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C011D180 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0120BC8 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0121348 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C012185C (-bValid@WIDENER@@QEBAHXZ.c)
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0121C18 (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z.c)
 */

WIDENER *__fastcall WIDENER::WIDENER(WIDENER *this, __m128i **a2, struct MATRIX **a3, struct _LINEATTRS *a4)
{
  ULONG iEndCap; // ecx
  ULONG iJoin; // eax
  BOOL v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  FLOAT_LONG v13; // xmm1_4
  float v14; // xmm1_4
  __m128i *v15; // rcx
  __m128i v16; // xmm1
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int32 v20; // [rsp+24h] [rbp-24h]
  int v21; // [rsp+28h] [rbp-20h]
  __int32 v22; // [rsp+2Ch] [rbp-1Ch]
  int v23; // [rsp+50h] [rbp+8h] BYREF

  STYLER::STYLER(this, (struct EPATHOBJ *)a2, a4);
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 824));
  *((_DWORD *)this + 236) = 0;
  *((_DWORD *)this + 244) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 984));
  *((_DWORD *)this + 276) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 1136));
  *((_DWORD *)this + 314) = 0;
  if ( !(unsigned int)WIDENER::bValid(this) )
    return this;
  iEndCap = a4->iEndCap;
  *((_DWORD *)this + 323) = iEndCap;
  iJoin = a4->iJoin;
  *((_DWORD *)this + 322) = iJoin;
  v10 = !iJoin && iEndCap <= 1;
  v11 = *((_DWORD *)this + 10);
  if ( v10 )
    v12 = v11 | 0x10;
  else
    v12 = v11 & 0xFFFFFFEF;
  *((_DWORD *)this + 10) = v12;
  LODWORD(v13.e) = a4->elWidth;
  bFToL(v13.e, &v23, 6);
  *((FLOAT_LONG *)this + 325) = v13;
  *((float *)this + 325) = *((float *)this + 325) * 0.5;
  if ( *((_DWORD *)this + 322) == 2 )
  {
    v14 = *((float *)this + 325) * a4->eMiterLimit;
    *((float *)this + 324) = v14;
    *((float *)this + 324) = v14 * *((float *)this + 324);
    goto LABEL_8;
  }
  if ( a4->pstyle || *((_DWORD *)this + 323) == 1 )
  {
LABEL_8:
    if ( EXFORMOBJ::bInverse((WIDENER *)((char *)this + 808), *a3) )
    {
      v15 = a2[1];
      v19 = _mm_cvtsi128_si32(_mm_srli_si128(v15[3], 8)) - v15[3].m128i_i32[0];
      v16 = v15[3];
      v17 = v15[3].m128i_i64[0];
      v21 = -v19;
      v20 = _mm_srli_si128(v16, 8).m128i_i32[1] - HIDWORD(v17);
      v22 = v20;
      if ( EXFORMOBJ::bXform((WIDENER *)((char *)this + 808), (struct _VECTORFX *)&v19, (struct _VECTORL *)&v19, 2uLL) )
        goto LABEL_10;
    }
    else
    {
      EngSetLastError(0x216u);
    }
    *((_DWORD *)this + 314) = 1;
  }
LABEL_10:
  if ( (unsigned int)WIDENER::bValid(this)
    && (!(unsigned int)WIDEPENOBJ::bPolygonizePen((WIDENER *)((char *)this + 824), (struct EXFORMOBJ *)a3, v23)
     || !(unsigned int)WIDENER::bWiden(this)) )
  {
    *((_DWORD *)this + 314) = 1;
  }
  return this;
}
