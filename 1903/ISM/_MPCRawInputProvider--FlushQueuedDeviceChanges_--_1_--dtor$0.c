/*
 * XREFs of _MPCRawInputProvider::FlushQueuedDeviceChanges_::_1_::dtor$0 @ 0x180094554
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCRawInputProvider::FlushQueuedDeviceChanges_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<std::shared_ptr<LegacyDeviceInfo>>::~vector<std::shared_ptr<LegacyDeviceInfo>>(a2 + 64);
}
