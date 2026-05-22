/*
 * XREFs of _SystemControlDeviceCollection::SystemControlDeviceCollection_::_1_::dtor$9 @ 0x1800A37EB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemControlDeviceCollection::SystemControlDeviceCollection_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::~list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>(*(_QWORD *)(a2 + 80) + 8LL);
}
