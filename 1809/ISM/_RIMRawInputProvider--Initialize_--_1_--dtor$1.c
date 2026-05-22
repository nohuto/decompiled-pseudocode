/*
 * XREFs of _RIMRawInputProvider::Initialize_::_1_::dtor$1 @ 0x180130F31
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMRawInputProvider::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>((__int64 *)(a2 + 216));
}
