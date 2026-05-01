/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18022D454
 * Callers:
 *     ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x180229A00 (-PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ.c)
 *     ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18022DB40 (-v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::clear(__int64 **a1)
{
  __int64 *v1; // rsi
  __int64 *v3; // rbx
  __int64 result; // rax

  v1 = a1[1];
  v3 = *a1;
  if ( *a1 != v1 )
  {
    do
      result = wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v3++);
    while ( v3 != v1 );
    v3 = *a1;
  }
  a1[1] = v3;
  return result;
}
