/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@0@Z @ 0x180059B4C
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IMessageProxy__std::allocator_Microsoft::WRL::ComPtr_IMessageProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IMessageProxy__const_&__::_1_::catch$57 @ 0x18003B280 (_std--vector_Microsoft--WRL--ComPtr_IMessageProxy__std--allocator_Microsoft--WRL--ComPtr_IMessag.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IMPCInputProviderBase__std::allocator_Microsoft::WRL::ComPtr_IMPCInputProviderBase_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IMPCInputProviderBase____::_1_::catch$57 @ 0x18003CB83 (_std--vector_Microsoft--WRL--ComPtr_IMPCInputProviderBase__std--allocator_Microsoft--WRL--ComPtr.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IInputTarget__std::allocator_Microsoft::WRL::ComPtr_IInputTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IInputTarget____::_1_::catch$32 @ 0x18006602E (_std--vector_Microsoft--WRL--ComPtr_IInputTarget__std--allocator_Microsoft--WRL--ComPtr_IInputTa.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__std::allocator_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__const_&__::_1_::catch$32 @ 0x1800C7777 (_std--vector_Microsoft--WRL--ComPtr_IActivationListenerInputObjectProxy__std--allocator_Microsof.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice__const_&__::_1_::catch$32 @ 0x1800E9FC4 (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--SpatialInteractions--SpatialInteractionOb.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      ++v4;
    }
    while ( v4 != a3 );
  }
  return result;
}
