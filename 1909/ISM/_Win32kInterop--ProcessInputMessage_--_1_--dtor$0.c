/*
 * XREFs of _Win32kInterop::ProcessInputMessage_::_1_::dtor$0 @ 0x1800BD9A5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::ProcessInputMessage_::_1_::dtor_0(__int64 a1, void **a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    a2 + 11,
    (const struct std::nothrow_t *)a2);
}
