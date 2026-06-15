/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@0@Z @ 0x1800DB698
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IProcessSubmixProxy__std::allocator_Microsoft::WRL::ComPtr_IProcessSubmixProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&___ptr64__::_1_::catch$32 @ 0x1800E19A7 (_std--vector_Microsoft--WRL--ComPtr_IProcessSubmixProxy__std--allocator_Microsoft--WRL--ComPtr_I.c)
 *     _std::vector_Microsoft::WRL::ComPtr_ISaDeviceProxy__std::allocator_Microsoft::WRL::ComPtr_ISaDeviceProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ISaDeviceProxy__const_&___ptr64__::_1_::catch$32 @ 0x1800E6BC0 (_std--vector_Microsoft--WRL--ComPtr_ISaDeviceProxy__std--allocator_Microsoft--WRL--ComPtr_ISaDev.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::_Destroy(
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
      result = Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v4++);
    while ( v4 != a3 );
  }
  return result;
}
