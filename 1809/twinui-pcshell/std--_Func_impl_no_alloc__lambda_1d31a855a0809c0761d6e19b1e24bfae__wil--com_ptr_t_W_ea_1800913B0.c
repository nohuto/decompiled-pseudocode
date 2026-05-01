/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1d31a855a0809c0761d6e19b1e24bfae__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy @ 0x1800913B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_1d31a855a0809c0761d6e19b1e24bfae__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx

  v3 = a1 + 8;
  *a2 = off_1803CAE40;
  Microsoft::WRL::WeakRef::WeakRef(a2 + 1, (__int64 *)(a1 + 8));
  a2[2] = *(_QWORD *)(v3 + 8);
  return a2;
}
