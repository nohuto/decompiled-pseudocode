/*
 * XREFs of ??1TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18024A068
 * Callers:
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x18024FE00 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _TabViewManager::GetTabForWindowId_::_1_::dtor$0 @ 0x18024FEEF (_TabViewManager--GetTabForWindowId_--_1_--dtor$0.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150C54 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?SetUnhandledException@?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x180202460 (-SetUnhandledException@-$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18024979C (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_18024979C.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802628B8 (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_1802628B8.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::~TabViewManager_GetOrCreateTabForWindowId(
        TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  _DWORD *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)((char *)this + 304);
  v3 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::`vftable';
  if ( v3 )
    goto LABEL_9;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
LABEL_9:
    v5 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v5 == 1 )
    {
      wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(v5);
      (*(void (__fastcall **)(TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *)((char *)this + 8));
}
