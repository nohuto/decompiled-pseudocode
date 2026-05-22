/*
 * XREFs of _SystemControlDeviceCollection::Create_::_1_::dtor$1 @ 0x1800A3AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemControlDeviceCollection::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 40));
}
