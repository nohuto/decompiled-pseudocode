/*
 * XREFs of _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$9 @ 0x180133DF2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ContextualProcessorBuffer::DeliverInput_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  ContextualProcessorBuffer::InputSample::~InputSample(
    (ContextualProcessorBuffer::InputSample *)(a2 + 56),
    (const struct std::nothrow_t *)a2);
}
