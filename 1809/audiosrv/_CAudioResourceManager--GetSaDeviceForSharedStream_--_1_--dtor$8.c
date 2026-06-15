/*
 * XREFs of _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$8 @ 0x18006C61A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(a2 + 160);
}
