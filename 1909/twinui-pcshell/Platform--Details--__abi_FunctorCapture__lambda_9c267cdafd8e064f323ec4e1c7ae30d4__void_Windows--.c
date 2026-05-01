/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_9c267cdafd8e064f323ec4e1c7ae30d4__void_Windows::Foundation::IAsyncOperation_bool____enum_Windows::Foundation::AsyncStatus_::_scalar_deleting_destructor_ @ 0x18030C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_9c267cdafd8e064f323ec4e1c7ae30d4__void_Windows::Foundation::IAsyncOperation_bool____enum_Windows::Foundation::AsyncStatus_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
