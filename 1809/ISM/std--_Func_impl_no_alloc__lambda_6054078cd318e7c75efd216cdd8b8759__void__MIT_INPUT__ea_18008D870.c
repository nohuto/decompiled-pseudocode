/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6054078cd318e7c75efd216cdd8b8759__void__MIT_INPUT_FOCUS_MESSAGE_const_____ptr64_::_Do_call @ 0x18008D870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_6054078cd318e7c75efd216cdd8b8759__void__MIT_INPUT_FOCUS_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        const struct _MIT_INPUT_FOCUS_MESSAGE **a2)
{
  DWMInputRouter::OnFocusedThreadChanged(*(DWMInputRouter **)(a1 + 8), *a2);
}
