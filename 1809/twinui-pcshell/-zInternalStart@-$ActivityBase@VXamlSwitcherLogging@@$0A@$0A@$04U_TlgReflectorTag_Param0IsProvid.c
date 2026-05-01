/*
 * XREFs of ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180282644
 * Callers:
 *     ?StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180281068 (-StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180281124 (-StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180281304 (-StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18028FA94 (-StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18010B090 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18027C31C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                    v3,
                    (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1] <= 5u )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
