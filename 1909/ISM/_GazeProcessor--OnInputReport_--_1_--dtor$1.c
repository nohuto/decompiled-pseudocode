/*
 * XREFs of _GazeProcessor::OnInputReport_::_1_::dtor$1 @ 0x180125CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GazeProcessor::OnInputReport_::_1_::dtor_1(__int64 a1, void **a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    a2 + 21,
    (const struct std::nothrow_t *)a2);
}
