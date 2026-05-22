/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@0@Z @ 0x1800E6200
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IAttachableInputObjectSampleProxy__std::allocator_Microsoft::WRL::ComPtr_IAttachableInputObjectSampleProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IAttachableInputObjectSampleProxy__const_&__::_1_::catch$32 @ 0x1800DFD6F (_std--vector_Microsoft--WRL--ComPtr_IAttachableInputObjectSampleProxy__std--allocator_Microsoft-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v4++);
    while ( v4 != a3 );
  }
  return result;
}
