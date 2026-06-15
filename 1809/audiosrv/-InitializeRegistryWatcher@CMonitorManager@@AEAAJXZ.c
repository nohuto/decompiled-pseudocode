/*
 * XREFs of ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x180059904
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180057924 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 * Callees:
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180059A58 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x18005A1A4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ?_Tidy@?$_Func_class@XW4RegistryChangeKind@wil@@U_Nil@wistd@@U34@U34@U34@U34@U34@@wistd@@IEAAXXZ @ 0x18005A288 (-_Tidy@-$_Func_class@XW4RegistryChangeKind@wil@@U_Nil@wistd@@U34@U34@U34@U34@U34@@wistd@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800FAB58 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800FAD18 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

__int64 __fastcall CMonitorManager::InitializeRegistryWatcher(CMonitorManager *this)
{
  HKEY *phkResult; // rdi
  unsigned int v2; // esi
  HKEY v3; // r15
  int v5; // edx
  LSTATUS v6; // ebx
  int v7; // r8d
  int v8; // r9d
  wil::details::registry_watcher_state **v9; // r14
  wil::details::registry_watcher_state *v10; // rbx
  DWORD LastError; // ebx
  unsigned int v13; // edx
  wil::details::registry_watcher_state *v14; // [rsp+38h] [rbp-49h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v16[14]; // [rsp+48h] [rbp-39h] BYREF

  phkResult = (HKEY *)((char *)this + 368);
  v2 = 0;
  v3 = (HKEY)*((_QWORD *)this + 46);
  if ( v3 )
  {
    LastError = GetLastError();
    RegCloseKey(v3);
    SetLastError(LastError);
  }
  *phkResult = 0LL;
  v6 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
         0,
         0xF003Fu,
         phkResult);
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, 0LL);
    }
    if ( v6 > 0 )
      return (unsigned __int16)v6 | 0x80070000;
    else
      return (unsigned int)v6;
  }
  else
  {
    v16[1] = this;
    v16[0] = off_18014CAC0;
    v14 = 0LL;
    v16[13] = v16;
    wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
      (unsigned int)&v14,
      v5,
      v7,
      v8,
      (__int64)v16);
    v9 = (wil::details::registry_watcher_state **)((char *)this + 360);
    if ( v9 == &v14 )
    {
      v10 = v14;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        v9,
        v14);
      v10 = 0LL;
      v14 = 0LL;
    }
    if ( v10 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v10 + 18);
      SRWLock = (PSRWLOCK)((char *)v10 + 144);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 35, 0xFFFFFFFF) == 1 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &SRWLock,
          0LL);
        wil::details::registry_watcher_state::`scalar deleting destructor'(v14, v13);
      }
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    wistd::_Func_class<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v16);
    wistd::_Func_class<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v16);
    if ( !*v9 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
      }
      return (unsigned int)-2147024882;
    }
  }
  return v2;
}
