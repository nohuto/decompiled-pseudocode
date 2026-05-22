/*
 * XREFs of _InputRedirectionTarget::DeliverInput_::_1_::dtor$0 @ 0x180132614
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputRedirectionTarget::DeliverInput_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  InputEventPayloadBuffer::~InputEventPayloadBuffer(
    (InputEventPayloadBuffer *)(a2 + 56),
    (const struct std::nothrow_t *)a2);
}
