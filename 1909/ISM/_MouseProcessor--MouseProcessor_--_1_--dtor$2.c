/*
 * XREFs of _MouseProcessor::MouseProcessor_::_1_::dtor$2 @ 0x18003C0FA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::MouseProcessor_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>(*(_QWORD *)(a2 + 64) + 112LL);
}
