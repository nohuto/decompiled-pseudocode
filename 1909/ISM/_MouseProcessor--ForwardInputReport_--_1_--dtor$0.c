/*
 * XREFs of _MouseProcessor::ForwardInputReport_::_1_::dtor$0 @ 0x18012B6A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MouseProcessor::ForwardInputReport_::_1_::dtor_0(__int64 a1, void **a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    a2 + 8,
    (const struct std::nothrow_t *)a2);
}
