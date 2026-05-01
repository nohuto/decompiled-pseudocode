/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1804031BC
 * Callers:
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_Assign_range_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_1_::dtor$30 @ 0x180402E00 (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____std--allocator_.c)
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_Assign_range_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_1_::dtor$46 @ 0x180402E0C (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____st_ea_180402E0C.c)
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_Range_construct_or_tidy_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____const____::_1_::dtor$3 @ 0x180402EBF (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____st_ea_180402EBF.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18006614C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Uninitialized_backout_al<std::vector<Windows::UI::Color> *,std::allocator<std::vector<Windows::UI::Color>>>::~_Uninitialized_backout_al<std::vector<Windows::UI::Color> *,std::allocator<std::vector<Windows::UI::Color>>>(
        __int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 24LL )
    std::vector<Windows::UI::Color>::_Tidy(i);
}
