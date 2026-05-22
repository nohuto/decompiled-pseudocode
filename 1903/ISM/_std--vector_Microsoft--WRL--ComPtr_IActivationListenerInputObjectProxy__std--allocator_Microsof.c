/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__std::allocator_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__const_&__::_1_::catch$32 @ 0x1800C7967
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@0@Z @ 0x180059DCC (-_Destroy@-$vector@V-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V-$allocator@.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__std::allocator_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__const____::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Destroy(
    a1,
    *(__int64 **)(a2 + 136),
    *(__int64 **)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
