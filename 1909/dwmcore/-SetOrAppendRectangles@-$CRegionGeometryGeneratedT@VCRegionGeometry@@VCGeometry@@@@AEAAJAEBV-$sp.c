/*
 * XREFs of ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@_N@Z @ 0x18003A468
 * Callers:
 *     ?ProcessLegacyRegionGeometryUpdateCommand@@YAJPEAVCRegionGeometry@@PEAVCChannelContext@@PEBUtagMILCMD_REGIONGEOMETRY@@PEBXI@Z @ 0x1800C535C (-ProcessLegacyRegionGeometryUpdateCommand@@YAJPEAVCRegionGeometry@@PEAVCChannelContext@@PEBUtagM.c)
 *     ?AppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x18019E5F8 (-AppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV-$span@$$.c)
 *     ?SetRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x1801A142C (-SetRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV-$span@$$CBU.c)
 * Callees:
 *     ??$_Insert_range@PEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UtagRECT@@@std@@@std@@@1@PEBUtagRECT@@1Uforward_iterator_tag@1@@Z @ 0x18003A4B4 (--$_Insert_range@PEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXV-$_Ve.c)
 *     ?OnRectanglesChanged@CRegionGeometry@@QEAAXXZ @ 0x18003A670 (-OnRectanglesChanged@CRegionGeometry@@QEAAXXZ.c)
 */

__int64 __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetOrAppendRectangles(
        CRegionGeometry *this,
        _QWORD *a2,
        char a3)
{
  _QWORD *v4; // rcx

  v4 = (_QWORD *)((char *)this + 136);
  if ( !a3 )
    v4[1] = *v4;
  std::vector<tagRECT>::_Insert_range<tagRECT const *>(v4, *((_QWORD *)this + 18), a2[1], a2[1] + 16LL * *a2);
  CRegionGeometry::OnRectanglesChanged(this);
  return 0LL;
}
