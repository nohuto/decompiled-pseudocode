/*
 * XREFs of _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x18012F00C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::InputDeliveryServer_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
           (__int64 *)(*(_QWORD *)(a2 + 144) + 104LL),
           a2);
}
