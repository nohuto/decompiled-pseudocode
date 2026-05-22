/*
 * XREFs of _Win32kInterop::ProcessInputMessage_::_1_::dtor$2 @ 0x1800BD9BD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::ProcessInputMessage_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>((__int64 *)(a2 + 64));
}
