/*
 * XREFs of _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$5 @ 0x1800BC35F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::DeliverInputToAllTargets_::_1_::dtor_5(__int64 a1, void **a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    a2 + 8,
    (const struct std::nothrow_t *)a2);
}
