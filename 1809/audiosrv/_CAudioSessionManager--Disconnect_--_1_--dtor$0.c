/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x18006A0DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(a2 + 48);
}
