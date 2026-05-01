/*
 * XREFs of _WindowEventDispatcher::OnShellHookMessage_::_1_::dtor$48 @ 0x1800AD260
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::OnShellHookMessage_::_1_::dtor_48(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 176) & 0x10;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 176) &= ~0x10u;
    return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 184));
  }
  return result;
}
