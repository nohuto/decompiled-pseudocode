/*
 * XREFs of ?_Calculate_growth@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800061B4
 * Callers:
 *     ??$_Insert_range@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180005BAC (--$_Insert_range@V-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@@-.c)
 *     ??$_Emplace_reallocate@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAPEAPEAVCColorGradientStop@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180006074 (--$_Emplace_reallocate@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PE.c)
 *     ??$_Emplace_reallocate@PEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18014A84C (--$_Emplace_reallocate@PEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801C3F0C (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 *     std::vector_Windows::Foundation::Numerics::float2_std::allocator_Windows::Foundation::Numerics::float2___::_Resize__lambda_2ff4ffb0ae9e0c6fc701fcd0ab995068___ @ 0x1801C4368 (std--vector_Windows--Foundation--Numerics--float2_std--allocator_Windows--Foundation--Numerics--.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float2>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = (__int64)(a1[2] - *a1) >> 3;
  v3 = v2 >> 1;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
