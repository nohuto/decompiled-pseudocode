/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5794
 * Callers:
 *     _CScreenClippingExperienceManager::RegisterForHotKeyHandling_::_1_::dtor$5 @ 0x1801818D5 (_CScreenClippingExperienceManager--RegisterForHotKeyHandling_--_1_--dtor$5.c)
 * Callees:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800E5F1C (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800E7DF8 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // edx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v1 + 144));
    SRWLock = (PSRWLOCK)(v1 + 144);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 140), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      if ( v1 )
        wil::details::registry_watcher_state::`scalar deleting destructor'(
          (wil::details::registry_watcher_state *)v1,
          v2);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
