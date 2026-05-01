/*
 * XREFs of ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x1800ACA98
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::Threading::ITimerElapsedHandler::_)(Windows::System::Threading::IThreadPoolTimer__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::Threading::ITimerElapsedHandler_Microsoft::WRL::FtmBase___lambda_47c0868eeef6d2db2a8f89db045b20e4___1_Windows::System::Threading::IThreadPoolTimer___::Invoke @ 0x1800AC990 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--Threading_ea_1800AC990.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008BBF8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x18009920C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A4000 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??$DebugInfo@AEAY0DD@$$CBG@AppUsageTelemetry@@SAXAEAY0DD@$$CBG@Z @ 0x1800AA028 (--$DebugInfo@AEAY0DD@$$CBG@AppUsageTelemetry@@SAXAEAY0DD@$$CBG@Z.c)
 *     ??$EnforcedAppCloseFailed@PEBGAEBI@AppUsageTelemetry@@SAX$$QEAPEBGAEBI@Z @ 0x1800AA108 (--$EnforcedAppCloseFailed@PEBGAEBI@AppUsageTelemetry@@SAX$$QEAPEBGAEBI@Z.c)
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1800AD568 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@2@@Z @ 0x1800AE870 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_1800AE870.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::OnTerminateTimer(Win32AppStateManager *this)
{
  TraceLoggingHProvider v2; // r10
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // di
  _QWORD *v6; // rbx
  const WCHAR *v7; // rcx
  unsigned int v8; // eax
  _QWORD *i; // rax
  unsigned int v10; // [rsp+30h] [rbp-68h] BYREF
  LPCWSTR v11; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v12; // [rsp+40h] [rbp-58h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+48h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-20h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  if ( *(_DWORD *)AppUsageTelemetry::Provider((__int64)this) > 5u )
  {
    TlgCreateWsz(&pDesc, L"Termination timer event fired");
    TlgWrite(v2, &unk_1804E3695, 0LL, 0LL, 3u, &pData);
  }
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 7, SRWLock);
  v5 = 0;
  v6 = (_QWORD *)**((_QWORD **)this + 10);
  while ( v6 != *((_QWORD **)this + 10) )
  {
    v7 = (const WCHAR *)(v6 + 4);
    v10 = *((_DWORD *)v6 + 16);
    *((_DWORD *)v6 + 16) = v10 + 1;
    v8 = *((_DWORD *)this + 41);
    if ( v10 > v8 )
    {
      v5 = 0;
      if ( v6[7] >= 8uLL )
        v7 = *(const WCHAR **)v7;
      v11 = v7;
      AppUsageTelemetry::EnforcedAppCloseFailed<unsigned short const *,unsigned int const &>(&v11, (__int64)&v10);
    }
    else
    {
      LOBYTE(v4) = v10 == v8 || *((_DWORD *)v6 + 17) == 1;
      v5 = Win32AppStateManager::TerminateAppOnce(this, v6 + 4, v4);
    }
    if ( v5 )
    {
      v3 = v6[2];
      if ( *(_BYTE *)(v3 + 25) )
      {
        for ( i = (_QWORD *)v6[1]; !*((_BYTE *)i + 25) && v6 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v6 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Min((_QWORD *)v3);
      }
      v6 = i;
    }
    else
    {
      std::_Tree<std::_Tmap_traits<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>,0>>::erase(
        (char *)this + 80,
        &v12,
        v6);
      v6 = v12;
    }
  }
  if ( !v5 && *((_QWORD *)this + 19) )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[51]>(v3);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 64LL))(*((_QWORD *)this + 19));
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 19);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
}
