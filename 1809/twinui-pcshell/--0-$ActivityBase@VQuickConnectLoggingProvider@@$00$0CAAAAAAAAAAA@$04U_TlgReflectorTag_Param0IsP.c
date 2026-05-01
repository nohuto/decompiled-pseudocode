/*
 * XREFs of ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180170FFC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_417362b0a1391b76000680eec230619f___::CTaskWrapper__lambda_417362b0a1391b76000680eec230619f_____lambda_417362b0a1391b76000680eec230619f___ @ 0x18016FC5C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_417362b0a1391b76000680eec230619f___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17___::CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_____lambda_f8d696b2e2b9ef5ca7bb243e22227a17___ @ 0x18016FCE4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17___--CTaskW.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800414F4 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??0?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1801072A0 (--0-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rax
  char *v6; // rcx
  bool v7; // zf

  *(_QWORD *)a1 = &wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    a3);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)a1 + 56,
    a2 + 56);
  *((_QWORD *)a1 + 38) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  v5 = *((_QWORD *)a1 + 38);
  v6 = (char *)(v5 + 8);
  if ( !v5 )
    v6 = (char *)a1 + 56;
  *((_QWORD *)a1 + 6) = v6;
  *((_QWORD *)a1 + 5) = v6 + 40;
  v7 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( !v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
