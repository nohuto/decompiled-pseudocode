/*
 * XREFs of _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Reallocate_::_1_::catch$0 @ 0x1800CE2FA
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x180032504 (-_Destroy_if_not_nil@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFra.c)
 *     _CxxThrowException_0 @ 0x1800CB04C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
    a1,
    *(void **)(a2 + 104));
  throw;
}
