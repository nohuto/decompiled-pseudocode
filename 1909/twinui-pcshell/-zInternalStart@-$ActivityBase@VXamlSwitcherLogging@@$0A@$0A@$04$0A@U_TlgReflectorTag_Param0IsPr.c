/*
 * XREFs of ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D2728
 * Callers:
 *     ?StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z @ 0x1802D1EB0 (-StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z.c)
 *     ?StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1802D4C18 (-StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@RunWindowCallback@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1802DC630 (-StartActivity@RunWindowCallback@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowCreatedCallback@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1802EDD64 (-StartActivity@WindowCreatedCallback@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1802F9AB4 (-StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1802F9B94 (-StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1802F9DA0 (-StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180308664 (-StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150C54 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802D262C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                    v3,
                    (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1] <= 5u )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  }
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
