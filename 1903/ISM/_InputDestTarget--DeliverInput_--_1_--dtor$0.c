/*
 * XREFs of _InputDestTarget::DeliverInput_::_1_::dtor$0 @ 0x1800C7C05
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputDestTarget::DeliverInput_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  InputEventPayloadBuffer::~InputEventPayloadBuffer(
    (InputEventPayloadBuffer *)(a2 + 56),
    (const struct std::nothrow_t *)a2);
}
