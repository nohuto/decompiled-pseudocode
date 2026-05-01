/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_41194f1b967ecfdcfc5ed7723d234191_@@$0?0PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@W4AsyncStatus@67ABI@@@?$DelegateArgTraits@P8?$IAsyncOperationCompletedHandler_impl@U?$AggregateType@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@PEAUITitleBarFactory@2345@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@23@W4AsyncStatus@23ABI@@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801D7880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 */

void *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IAsyncOperationCompletedHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::TitleBarFactory *,Windows::Internal::Shell::Experience::ITitleBarFactory *>>::*)(Windows::Foundation::IAsyncOperation<Windows::Internal::Shell::Experience::TitleBarFactory *> *,enum ABI::Windows::Foundation::AsyncStatus)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Shell::Experience::TitleBarFactory *>,Microsoft::WRL::FtmBase>,_lambda_41194f1b967ecfdcfc5ed7723d234191_,-1,Windows::Foundation::IAsyncOperation<Windows::Internal::Shell::Experience::TitleBarFactory *> *,enum ABI::Windows::Foundation::AsyncStatus>::`scalar deleting destructor'(
        void *a1,
        __int64 a2)
{
  char v2; // di
  __int64 v4; // rdx

  v2 = a2;
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)a1 + 64,
    a2);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)a1 + 64,
    v4);
  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1 + 4);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xB0);
  return a1;
}
