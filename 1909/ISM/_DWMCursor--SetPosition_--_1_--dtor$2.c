/*
 * XREFs of _DWMCursor::SetPosition_::_1_::dtor$2 @ 0x18003A7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::SetPosition_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IFocusInputTarget>::~ComPtr<IFocusInputTarget>(a2 + 56);
}
