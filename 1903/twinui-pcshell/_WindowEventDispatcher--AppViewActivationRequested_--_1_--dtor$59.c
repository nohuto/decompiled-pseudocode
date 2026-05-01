/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$59 @ 0x1800C4C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB40 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_59(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 84) & 0x20;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 84) &= ~0x20u;
    return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 672));
  }
  return result;
}
