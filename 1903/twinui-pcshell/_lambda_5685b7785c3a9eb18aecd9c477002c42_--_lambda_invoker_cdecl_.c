/*
 * XREFs of _lambda_5685b7785c3a9eb18aecd9c477002c42_::_lambda_invoker_cdecl_ @ 0x18024E020
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180104D80 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801C5BAC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ @ 0x1802538E0 (-TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_5685b7785c3a9eb18aecd9c477002c42_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  if ( *(_QWORD *)(Context + 56) )
    std::_Func_class<void,>::operator()(Context);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (wil::details **)(Context + 72),
    0LL);
  if ( WindowPropertyChangedListener::TrySubscribePropertiesChangedEvent((WindowPropertyChangedListener *)Context) )
    SetThreadpoolWait(*(PTP_WAIT *)(Context + 80), *(HANDLE *)(Context + 72), 0LL);
}
