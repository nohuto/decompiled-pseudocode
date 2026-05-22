/*
 * XREFs of _DWMInputTarget::DeliverInput_::_1_::dtor$0 @ 0x1800C7206
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DWMInputTarget::DeliverInput_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  InputEventPayloadBuffer::~InputEventPayloadBuffer(
    (InputEventPayloadBuffer *)(a2 + 56),
    (const struct std::nothrow_t *)a2);
}
