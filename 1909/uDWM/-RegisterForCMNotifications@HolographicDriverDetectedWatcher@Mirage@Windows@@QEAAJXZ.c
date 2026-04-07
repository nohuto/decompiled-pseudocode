/*
 * XREFs of ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180041424
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x1800412C0 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18004156C (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180041868 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x180041A4C (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x180042434 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18007971C (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180079F58 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18007A408 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

__int64 __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications(wil::details **this)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  wil::details::registry_watcher_state *v5; // rbx
  void *v6; // rdx
  unsigned int v8; // edx
  wil::details::registry_watcher_state *v9; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v12[15]; // [rsp+50h] [rbp-B8h] BYREF
  int v13; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v14[4]; // [rsp+CCh] [rbp-3Ch] BYREF
  int v15; // [rsp+D0h] [rbp-38h]
  GUID v16; // [rsp+D8h] [rbp-30h]

  v13 = 416;
  memset_0(v14, 0, 0x19CuLL);
  v15 = 0;
  v16 = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  CM_Register_Notification(&v13, this, lambda_d10d8a4b96f47c58ecefc665244380ef_::_lambda_invoker_cdecl_, this + 5);
  v9 = 0LL;
  v12[0] = off_1800BCA00;
  v12[1] = this;
  v12[13] = v12;
  wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
    (unsigned int)&v9,
    v2,
    v3,
    v4,
    (__int64)&v11);
  if ( this + 4 == &v9 )
  {
    v5 = v9;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      this + 4,
      v9);
    v5 = 0LL;
    v9 = 0LL;
  }
  if ( v5 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)v5 + 19);
    SRWLock = (PSRWLOCK)((char *)v5 + 152);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 37, 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'(v9, v8);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  wistd::function<void (int const &)>::~function<void (int const &)>(&v11);
  if ( Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected() )
    wil::details::SetEvent(*this, v6);
  return 0LL;
}
