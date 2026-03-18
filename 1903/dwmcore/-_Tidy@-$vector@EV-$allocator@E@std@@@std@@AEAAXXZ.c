/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1634
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180074794 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x18007B5F8 (_anonymous_namespace_--SendFramesReport.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18007C2F8 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180096094 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?CreateScribble@CRemoteSuperWetSource@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801B27F0 (-CreateScribble@CRemoteSuperWetSource@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@P.c)
 *     ?LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1801BC724 (-LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV-$vector@EV-$allocator@E@std@@@std@@.c)
 *     ?ConsumeTipPoints@CRemoteSuperWetInkScribble@@MEAAJXZ @ 0x1801BCC20 (-ConsumeTipPoints@CRemoteSuperWetInkScribble@@MEAAJXZ.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJXZ @ 0x1801BCD50 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJXZ.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801C53F8 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 *     ??1CRemoteSuperWetSharedSection@@UEAA@XZ @ 0x1801C7C54 (--1CRemoteSuperWetSharedSection@@UEAA@XZ.c)
 *     ??1CPathData@@MEAA@XZ @ 0x18022B890 (--1CPathData@@MEAA@XZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18024C900 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Tidy(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = std::_Deallocate<16,0>(v2, a1[2] - v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
