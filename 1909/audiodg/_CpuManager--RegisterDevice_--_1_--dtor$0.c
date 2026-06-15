/*
 * XREFs of _CpuManager::RegisterDevice_::_1_::dtor$0 @ 0x14002DD45
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpuManager::RegisterDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataReader>::~ComPtr<Windows::Storage::Streams::IDataReader>((__int64 *)(a2 + 64));
}
