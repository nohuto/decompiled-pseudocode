/*
 * XREFs of _SystemControlDeviceCollection::Create_::_1_::dtor$0 @ 0x1800A38D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemControlDeviceCollection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>((_QWORD *)(a2 + 64));
}
