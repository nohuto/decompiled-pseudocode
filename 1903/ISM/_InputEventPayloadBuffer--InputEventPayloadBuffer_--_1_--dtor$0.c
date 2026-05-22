/*
 * XREFs of _InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor$0 @ 0x180142B2F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor_0(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    (void **)(*((_QWORD *)a2 + 8) + 8LL),
    a2);
}
