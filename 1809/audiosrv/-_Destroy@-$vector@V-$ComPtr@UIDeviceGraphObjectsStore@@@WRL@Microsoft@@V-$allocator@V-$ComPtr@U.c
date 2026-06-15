/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@0@Z @ 0x1800E8E00
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__const_&___ptr64__::_1_::catch$32 @ 0x1800E69C0 (_std--vector_Microsoft--WRL--ComPtr_IDeviceGraphObjectsStore__std--allocator_Microsoft--WRL--Com.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::_Destroy(
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
      result = Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(v4++);
    while ( v4 != a3 );
  }
  return result;
}
