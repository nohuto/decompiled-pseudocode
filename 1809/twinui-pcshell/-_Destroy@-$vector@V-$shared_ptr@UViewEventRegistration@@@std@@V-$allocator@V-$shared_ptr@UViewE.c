/*
 * XREFs of ?_Destroy@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UViewEventRegistration@@@2@0@Z @ 0x18019CB40
 * Callers:
 *     _std::vector_std::shared_ptr_ViewEventRegistration__std::allocator_std::shared_ptr_ViewEventRegistration_____::_Emplace_reallocate_std::shared_ptr_ViewEventRegistration__const_&___ptr64__::_1_::catch$41 @ 0x180198269 (_std--vector_std--shared_ptr_ViewEventRegistration__std--allocator_std--shared_ptr_ViewEventRegi.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo__const_&___ptr64__::_1_::catch$34 @ 0x1801C6BF9 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_PeoplePaneViewIn.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch$34 @ 0x1801C6FB3 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_Peo_ea_1801C6FB3.c)
 *     _std::vector_std::shared_ptr_AltTabWindowHookData__std::allocator_std::shared_ptr_AltTabWindowHookData_____::_Emplace_reallocate_std::shared_ptr_AltTabWindowHookData__&___ptr64__::_1_::catch$41 @ 0x18028DBC1 (_std--vector_std--shared_ptr_AltTabWindowHookData__std--allocator_std--shared_ptr_AltTabWindowHo.c)
 *     _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::_Emplace_reallocate_std::shared_ptr_KBViewInfo____::_1_::catch$41 @ 0x1802B3EE8 (_std--vector_std--shared_ptr_KBViewInfo__std--allocator_std--shared_ptr_KBViewInfo_____--_Emplac.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
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
