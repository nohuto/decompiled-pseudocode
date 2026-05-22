/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_WGIController__std::allocator_Microsoft::WRL::ComPtr_WGIController_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_WGIController____::_1_::catch$32 @ 0x1800A6FEA
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@0@Z @ 0x1800A8098 (-_Destroy@-$vector@V-$ComPtr@VWGIController@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VWGIControll.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_WGIController__std::allocator_Microsoft::WRL::ComPtr_WGIController_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_WGIController____::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<WGIController>>::_Destroy(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 104)));
  throw;
}
