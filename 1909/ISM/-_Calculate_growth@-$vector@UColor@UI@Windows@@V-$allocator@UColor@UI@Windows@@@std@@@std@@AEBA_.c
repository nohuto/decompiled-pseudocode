/*
 * XREFs of ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800AF988
 * Callers:
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800ADCC0 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___ @ 0x1800ADF44 (std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--_Resize__lambda_c948d9edf99.c)
 *     ??$_Assign_range@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEAW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800FBE10 (--$_Assign_range@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXPEA.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<Windows::UI::Color>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = (__int64)(a1[2] - *a1) >> 2;
  v3 = v2 >> 1;
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
