/*
 * XREFs of _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$1 @ 0x1800BC1DF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::DeliverInputToAllTargets_::_1_::dtor_1(__int64 a1, void **a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    a2 + 9,
    (const struct std::nothrow_t *)a2);
}
