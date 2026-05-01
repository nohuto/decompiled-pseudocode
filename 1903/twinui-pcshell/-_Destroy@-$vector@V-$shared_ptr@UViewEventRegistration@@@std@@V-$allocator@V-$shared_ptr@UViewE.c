/*
 * XREFs of ?_Destroy@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UViewEventRegistration@@@2@0@Z @ 0x1801E3A30
 * Callers:
 *     _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::_Emplace_reallocate_std::shared_ptr_KBViewInfo__&__::_1_::catch$41 @ 0x1801DF227 (_std--vector_std--shared_ptr_KBViewInfo__std--allocator_std--shared_ptr_KBViewInfo_____--_Emplac.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo__const_&__::_1_::catch$34 @ 0x18021E867 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_PeoplePaneViewIn.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch$38 @ 0x18021EC29 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_Peo_ea_18021EC29.c)
 *     _std::vector_std::shared_ptr_AltTabWindowHookData__std::allocator_std::shared_ptr_AltTabWindowHookData_____::_Emplace_reallocate_std::shared_ptr_AltTabWindowHookData__&__::_1_::catch$41 @ 0x1802E72F9 (_std--vector_std--shared_ptr_AltTabWindowHookData__std--allocator_std--shared_ptr_AltTabWindowHo.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::vector<std::shared_ptr<ViewEventRegistration>>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  std::_Ref_count_base *v5; // rcx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *(std::_Ref_count_base **)(v4 + 8);
      if ( v5 )
        std::_Ref_count_base::_Decref(v5);
      v4 += 16LL;
    }
    while ( v4 != a3 );
  }
}
