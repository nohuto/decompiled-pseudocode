/*
 * XREFs of _ControllerProcessor::InjectManipulationInput_::_1_::dtor$0 @ 0x1800766EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ControllerProcessor::InjectManipulationInput_::_1_::dtor_0(__int64 a1, void **a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    a2 + 10,
    (const struct std::nothrow_t *)a2);
}
