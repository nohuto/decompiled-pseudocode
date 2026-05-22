/*
 * XREFs of ??1?$list@U?$pair@$$CBKI@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAA@XZ @ 0x180074BC0
 * Callers:
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$10 @ 0x18003C5E8 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$10.c)
 *     _std::_Hash_std::_Umap_traits_enum_Windows::Gaming::Input::GamepadButtons_unsigned_short_std::_Uhash_compare_enum_Windows::Gaming::Input::GamepadButtons_std::hash_enum_Windows::Gaming::Input::GamepadButtons__std::equal_to_enum_Windows::Gaming::Input::GamepadButtons____std::allocator_std::pair_enum_Windows::Gaming::Input::GamepadButtons_const__unsigned_short____0___::_Hash_std::_Umap_traits_enum_Windows::Gaming::Input::GamepadButtons_unsigned_short_std::_Uhash_compare_enum_Windows::Gaming::Input::GamepadButtons_std::hash_enum_Windows::Gaming::Input::GamepadButtons__std::equal_to_enum_Windows::Gaming::Input::GamepadButtons____std::allocator_std::pair_enum_Windows::Gaming::Input::GamepadButtons_const__unsigned_short____0____::_1_::dtor$0 @ 0x18003C696 (_std--_Hash_std--_Umap_traits_enum_Windows--Gaming--Input--GamepadButtons_unsigned__ea_18003C696.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_unsigned_int_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_int____0___::_Hash_std::_Umap_traits_unsigned_long_unsigned_int_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_int____0____::_1_::dtor$0 @ 0x1800BA79E (_std--_Hash_std--_Umap_traits_unsigned_long_unsigned_int_std--_Uhash_compare_unsigned_long_std--.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,unsigned int>>::~list<std::pair<unsigned long const,unsigned int>>(
        __int64 a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x18);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
}
