/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@V_lambda_f51dfb545d2092f53a09626c96ba7267_@@$0?0PEAU?$IAsyncOperation@_N@23@W4AsyncStatus@23ABI@@@?$DelegateArgTraits@P8?$IAsyncOperationCompletedHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAU?$IAsyncOperation@_N@23@W4AsyncStatus@23ABI@@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801D7830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IAsyncOperationCompletedHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(Windows::Foundation::IAsyncOperation<bool> *,enum ABI::Windows::Foundation::AsyncStatus)>::DelegateInvokeHelper<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,_lambda_f51dfb545d2092f53a09626c96ba7267_,-1,Windows::Foundation::IAsyncOperation<bool> *,enum ABI::Windows::Foundation::AsyncStatus>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1 + 4);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1 + 3);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
