/*
 * XREFs of _WindowEventDispatcher::WindowAdded_::_1_::dtor$25 @ 0x1800AB860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::WindowAdded_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 172) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 172) &= ~2u;
    return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 328));
  }
  return result;
}
