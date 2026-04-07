/*
 * XREFs of ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18003EE70
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18003ECF4 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x18003D9F0 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18003EFC8 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18003F300 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x18003FEB0 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800730A0 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180073898 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180073DC0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

__int64 __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications(wil::details **this)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rdx
  wil::details::registry_watcher_state *v6; // rbx
  __int64 v7; // rdx
  void *v8; // rdx
  unsigned int v10; // edx
  wil::details::registry_watcher_state *v11; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v13[14]; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v15[4]; // [rsp+BCh] [rbp-4Ch] BYREF
  int v16; // [rsp+C0h] [rbp-48h]
  GUID v17; // [rsp+C8h] [rbp-40h]

  v14 = 416;
  memset_0(v15, 0, 0x19CuLL);
  v16 = 0;
  v17 = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  CM_Register_Notification(&v14, this, lambda_acfb370dec9f0af1ea203035a4ccbb17_::_lambda_invoker_cdecl_, this + 5);
  v11 = 0LL;
  v13[0] = off_1800B6D58;
  v13[1] = this;
  v13[13] = v13;
  wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
    (unsigned int)&v11,
    v2,
    v3,
    v4,
    (__int64)v13);
  if ( this + 4 == &v11 )
  {
    v6 = v11;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      this + 4,
      v11);
    v6 = 0LL;
    v11 = 0LL;
  }
  if ( v6 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)v6 + 18);
    SRWLock = (PSRWLOCK)((char *)v6 + 144);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 35, 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'(v11, v10);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v13,
    v5);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v13,
    v7);
  if ( Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected() )
    wil::details::SetEvent(*this, v8);
  return 0LL;
}
