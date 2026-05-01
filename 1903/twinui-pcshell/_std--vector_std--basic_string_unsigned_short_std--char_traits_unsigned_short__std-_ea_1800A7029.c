/*
 * XREFs of _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Emplace_reallocate_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&__::_1_::catch$22 @ 0x1800A7029
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@0@Z @ 0x1800826D8 (-_Destroy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K@Z @ 0x1800FF5E4 (-deallocate@-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA.c)
 */

void __fastcall __noreturn std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Emplace_reallocate_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____::_1_::catch_22(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<std::wstring>::_Destroy(a1, *(_QWORD **)(a2 + 128), *(_QWORD **)(a2 + 152));
  std::allocator<std::wstring>::deallocate(v3, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
  throw;
}
