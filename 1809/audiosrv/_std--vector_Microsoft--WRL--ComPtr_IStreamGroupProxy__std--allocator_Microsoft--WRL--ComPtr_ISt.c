/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IStreamGroupProxy__std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IStreamGroupProxy__const_&___ptr64__::_1_::catch$32 @ 0x1800C6E08
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006888B (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x1800C96A0 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IStreamGroupProxy__std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IStreamGroupProxy__const_____ptr64__::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(a1, *(_QWORD *)(a2 + 136), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
