/*
 * XREFs of _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch$35 @ 0x1800A5DB3
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@0@Z @ 0x1800826D8 (-_Destroy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 *     ?_Mylast@?$_Vector_alloc@U?$_Vec_base_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@std@@QEAAAEAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1800846B0 (-_Mylast@-$_Vector_alloc@U-$_Vec_base_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch_35(
        __int64 a1,
        __int64 a2)
{
  _QWORD **v3; // rbx
  __int64 v4; // rcx

  v3 = (_QWORD **)std::_Vector_alloc<std::_Vec_base_types<std::wstring>>::_Mylast(*(_QWORD *)(a2 + 128));
  std::vector<std::wstring>::_Destroy(v4, *(_QWORD **)(a2 + 144), *v3);
  *v3 = *(_QWORD **)(a2 + 136);
  throw;
}
