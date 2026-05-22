/*
 * XREFs of _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::_Emplace_reallocate_Microsoft::WRL::Wrappers::HString__::_1_::catch$36 @ 0x1800D6F6F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXPEAVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x1800D9140 (-_Destroy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::_Emplace_reallocate_Microsoft::WRL::Wrappers::HString__::_1_::catch_36(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::Wrappers::HString>::_Destroy(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 104)));
  throw;
}
