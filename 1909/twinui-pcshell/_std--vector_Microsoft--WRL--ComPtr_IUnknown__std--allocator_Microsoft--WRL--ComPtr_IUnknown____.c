/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IUnknown__std::allocator_Microsoft::WRL::ComPtr_IUnknown_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IUnknown____::_1_::catch$32 @ 0x1801FA3AE
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1801FC56C (-_Destroy@-$vector@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIUnknown@@@WRL@M.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IUnknown__std::allocator_Microsoft::WRL::ComPtr_IUnknown_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IUnknown____::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IUnknown>>::_Destroy(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 104)));
  throw;
}
