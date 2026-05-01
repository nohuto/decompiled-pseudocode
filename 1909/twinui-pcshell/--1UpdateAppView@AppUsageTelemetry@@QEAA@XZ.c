/*
 * XREFs of ??1UpdateAppView@AppUsageTelemetry@@QEAA@XZ @ 0x1800B6400
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800B7790 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 *     _UwpAppStateManager::UpdateAppView_::_1_::dtor$0 @ 0x1800B7A5E (_UwpAppStateManager--UpdateAppView_--_1_--dtor$0.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800BC19C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 *     _Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor$0 @ 0x1800BC743 (_Win32AppStateManager--UpdateAppViewWorker_--_1_--dtor$0.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800985C8 (-LockExclusive@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?SetUnhandledException@?$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1800ABEF0 (-SetUnhandledException@-$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1?$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B635C (--1-$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VA.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800B8510 (-reset@-$shared_object@V-$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppUsageTelemetry::UpdateAppView::~UpdateAppView(AppUsageTelemetry::UpdateAppView *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  _DWORD *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)((char *)this + 304);
  v3 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &AppUsageTelemetry::UpdateAppView::`vftable';
  if ( v3 )
    goto LABEL_9;
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
LABEL_9:
    v5 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v5 == 1 )
    {
      wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(v5);
      (*(void (__fastcall **)(AppUsageTelemetry::UpdateAppView *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  wil::details::shared_object<wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((AppUsageTelemetry::UpdateAppView *)((char *)this + 8));
}
