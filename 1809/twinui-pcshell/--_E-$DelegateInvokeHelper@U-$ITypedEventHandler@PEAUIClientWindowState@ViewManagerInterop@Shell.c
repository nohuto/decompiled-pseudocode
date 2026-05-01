/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@V_lambda_60d16d02b9cc51a6582d9c6577bb1617_@@$0?0PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180017F00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_60d16d02b9cc51a6582d9c6577bb1617_::__lambda_60d16d02b9cc51a6582d9c6577bb1617_ @ 0x180018468 (_lambda_60d16d02b9cc51a6582d9c6577bb1617_--__lambda_60d16d02b9cc51a6582d9c6577bb1617_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_60d16d02b9cc51a6582d9c6577bb1617_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  lambda_60d16d02b9cc51a6582d9c6577bb1617_::__lambda_60d16d02b9cc51a6582d9c6577bb1617_(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
