/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IMessageProxy__std::allocator_Microsoft::WRL::ComPtr_IMessageProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IMessageProxy__const_&__::_1_::catch$57 @ 0x18003B7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@0@Z @ 0x180059DCC (-_Destroy@-$vector@V-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V-$allocator@.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IMessageProxy__std::allocator_Microsoft::WRL::ComPtr_IMessageProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IMessageProxy__const____::_1_::catch_57(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 136),
    *(_QWORD *)(a2 + 48));
  std::_Deallocate<16,0>(*(void **)(a2 + 128), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
