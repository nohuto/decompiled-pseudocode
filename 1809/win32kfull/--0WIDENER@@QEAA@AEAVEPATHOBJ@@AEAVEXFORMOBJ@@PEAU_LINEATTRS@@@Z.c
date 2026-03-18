/*
 * XREFs of ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0144830
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014349C (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C01436AC (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0143994 (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C01449BC (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C0144EEC (-bValid@WIDENER@@QEBAHXZ.c)
 */

WIDENER *__fastcall WIDENER::WIDENER(WIDENER *this, __m128i **a2, struct MATRIX **a3, struct _LINEATTRS *a4)
{
  ULONG iEndCap; // ecx
  ULONG iJoin; // eax
  BOOL v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  FLOAT_LONG v14; // xmm1_4
  int v15; // eax
  float v17; // xmm1_4
  __m128i *v18; // rcx
  __m128i v19; // xmm1
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int32 v22; // [rsp+24h] [rbp-24h]
  int v23; // [rsp+28h] [rbp-20h]
  __int32 v24; // [rsp+2Ch] [rbp-1Ch]
  int v25; // [rsp+50h] [rbp+8h] BYREF

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
  v12 = v11 | 0x10;
  v13 = v11 & 0xFFFFFFEF;
  if ( !v10 )
    v12 = v13;
  v25 = 0;
  *((_DWORD *)this + 10) = v12;
  LODWORD(v14.e) = a4->elWidth;
  bFToL(v14.e, &v25, 6u);
  *((FLOAT_LONG *)this + 325) = v14;
  *((float *)this + 325) = *((float *)this + 325) * 0.5;
  v15 = *((_DWORD *)this + 322);
  if ( v15 == 2 )
  {
    v17 = *((float *)this + 325) * a4->eMiterLimit;
    *((float *)this + 324) = v17;
    *((float *)this + 324) = v17 * *((float *)this + 324);
  }
  if ( a4->pstyle || *((_DWORD *)this + 323) == 1 || v15 == 2 )
  {
    if ( EXFORMOBJ::bInverse((WIDENER *)((char *)this + 808), *a3) )
    {
      v18 = a2[1];
      v21 = _mm_cvtsi128_si32(_mm_srli_si128(v18[3], 8)) - v18[3].m128i_i32[0];
      v19 = v18[3];
      v20 = v18[3].m128i_i64[0];
      v23 = -v21;
      v22 = _mm_srli_si128(v19, 8).m128i_i32[1] - HIDWORD(v20);
      v24 = v22;
      if ( EXFORMOBJ::bXform((WIDENER *)((char *)this + 808), (struct _VECTORFX *)&v21, (struct _VECTORL *)&v21, 2uLL) )
        goto LABEL_12;
    }
    else
    {
      EngSetLastError(0x216u);
    }
    *((_DWORD *)this + 314) = 1;
  }
LABEL_12:
  if ( (unsigned int)WIDENER::bValid(this)
    && (!(unsigned int)WIDEPENOBJ::bPolygonizePen((WIDENER *)((char *)this + 824), (struct EXFORMOBJ *)a3, v25)
     || !(unsigned int)WIDENER::bWiden(this)) )
  {
    *((_DWORD *)this + 314) = 1;
  }
  return this;
}
