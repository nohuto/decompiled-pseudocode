/*
 * XREFs of ?OnRectanglesChanged@CRegionGeometry@@QEAAXXZ @ 0x180079ADC
 * Callers:
 *     ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@_N@Z @ 0x1800798D4 (-SetOrAppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV-$sp.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180079B34 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CRegionGeometry::OnRectanglesChanged(CRegionGeometry *this, __int64 a2, __int64 a3)
{
  CRegionGeometry *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = this;
  *((_BYTE *)this + 160) = 1;
  v4 = *((_QWORD *)this + 17);
  v5 = *((_QWORD *)v3 + 18);
  while ( v4 != v5 )
  {
    if ( !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v4, v5, a3, v3) )
    {
      *((_BYTE *)v3 + 160) = 0;
      break;
    }
    v4 = v6 + 16;
  }
  (*(void (__fastcall **)(CRegionGeometry *, _QWORD, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, 0LL, 0LL);
}
