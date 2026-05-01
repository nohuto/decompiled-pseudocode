/*
 * XREFs of ??4?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18039E7A8
 * Callers:
 *     ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18039E89C (--4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z @ 0x18005FC70 (-SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z.c)
 *     ??4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x18005FDC0 (--4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18014D54C (--4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180192EE0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_180192EE0.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v6; // rcx
  bool v7; // zf

  v2 = a2 + 56;
  v4 = a1 + 56;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 60) = 0;
  wil::details::StoredCallContextInfo::operator=(a1 + 96, a2 + 96);
  *(_DWORD *)(v4 + 76) = *(_DWORD *)(v2 + 76);
  wil::StoredFailureInfo::operator=(v4 + 80, v2 + 80);
  *(_DWORD *)(v4 + 72) = *(_DWORD *)(v2 + 72);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 304));
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  v6 = *(_QWORD *)(a1 + 304) + 8LL;
  if ( !*(_QWORD *)(a1 + 304) )
    v6 = v4;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 40) = v6 + 40;
  wil::details::ThreadFailureCallbackHolder::SetWatching(
    (wil::details::ThreadFailureCallbackHolder *)(a1 + 8),
    *(_DWORD *)(a2 + 32) != 0);
  v7 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = v2;
  if ( !v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
