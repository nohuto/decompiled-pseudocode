/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@0@Z @ 0x1800F6B1C
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_ITaskWindow__std::allocator_Microsoft::WRL::ComPtr_ITaskWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ITaskWindow____::_1_::catch$57 @ 0x1800ADB42 (_std--vector_Microsoft--WRL--ComPtr_ITaskWindow__std--allocator_Microsoft--WRL--ComPtr_ITaskWind.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal__std::allocator_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal____::_1_::catch$32 @ 0x1800EA0C2 (_std--vector_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal__std--allocator_Microsoft--WRL.c)
 * Callees:
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800E4C08 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'(v4++);
    while ( v4 != a3 );
  }
  return result;
}
