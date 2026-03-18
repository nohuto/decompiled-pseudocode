/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180063B14
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x1800AB540 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800CBF94 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x1800DE960 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@AEAAJXZ @ 0x180183D0C (-ConsumeTipPoints@CSuperWetInkScribble@@AEAAJXZ.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x180199AB0 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 *     ??1CPathData@@MEAA@XZ @ 0x18021C730 (--1CPathData@@MEAA@XZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18021EA48 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned char>::_Tidy(__int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    v5 = v2;
    v4 = v3;
    if ( v3 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v5, &v4);
      v3 = v4;
      v2 = v5;
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
