/*
 * XREFs of _MouseProcessor::Initialize_::_1_::dtor$1 @ 0x18003C8AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>(a2 + 96);
}
