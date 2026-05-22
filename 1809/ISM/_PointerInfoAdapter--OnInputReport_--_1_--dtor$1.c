/*
 * XREFs of _PointerInfoAdapter::OnInputReport_::_1_::dtor$1 @ 0x180130867
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PointerInfoAdapter::OnInputReport_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>::~unique_ptr<PointerInfoAdapter::LastDeviceFrame>((_QWORD **)(a2 + 64));
}
