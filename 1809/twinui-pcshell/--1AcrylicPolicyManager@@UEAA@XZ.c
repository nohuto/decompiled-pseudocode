/*
 * XREFs of ??1AcrylicPolicyManager@@UEAA@XZ @ 0x1800E5880
 * Callers:
 *     ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x1800E5E0C (--_GAcrylicPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800E5F1C (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1800E7DD0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800E7DF8 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AcrylicPolicyManager::~AcrylicPolicyManager(AcrylicPolicyManager *this)
{
  Concurrency::details::_RefCounter *v2; // rcx
  __int64 v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  volatile int *v9; // rdx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v2 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 55);
  if ( v2 )
    Concurrency::details::_RefCounter::_Destroy(v2);
  v3 = *((_QWORD *)this + 54);
  if ( v3 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v3 + 144));
    SRWLock = (PSRWLOCK)(v3 + 144);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 140), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v3, v4);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  SmartCookie::Unregister((AcrylicPolicyManager *)((char *)this + 312));
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 312,
    v5);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 312,
    v6);
  SmartCookie::Unregister((AcrylicPolicyManager *)((char *)this + 192));
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 192,
    v7);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 192,
    v8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v9);
}
