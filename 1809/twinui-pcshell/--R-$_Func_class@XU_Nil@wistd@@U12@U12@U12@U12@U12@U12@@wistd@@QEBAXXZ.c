/*
 * XREFs of ??R?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@QEBAXXZ @ 0x18012C09C
 * Callers:
 *     _lambda_9bbec43bd3c841ff596242732b4f01fa_::_lambda_invoker_cdecl_ @ 0x180129A50 (_lambda_9bbec43bd3c841ff596242732b4f01fa_--_lambda_invoker_cdecl_.c)
 *     ??1AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAA@XZ @ 0x1801B1498 (--1AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Sh.c)
 *     ?wait_callback@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1802BEC70 (-wait_callback@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@de.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::operator()(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 104);
  if ( !v1 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
