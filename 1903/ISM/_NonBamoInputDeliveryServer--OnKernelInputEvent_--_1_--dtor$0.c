/*
 * XREFs of _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x180109F19
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  InputEventPayloadBuffer::~InputEventPayloadBuffer(
    (InputEventPayloadBuffer *)(a2 + 48),
    (const struct std::nothrow_t *)a2);
}
