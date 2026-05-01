/*
 * XREFs of ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1800ACD50
 * Callers:
 *     ?CancelTerminateApp@Win32AppStateManager@@UEAAXPEBG@Z @ 0x1800AC250 (-CancelTerminateApp@Win32AppStateManager@@UEAAXPEBG@Z.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800AD89C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008BBF8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A4000 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??$DebugInfo@AEAY0DC@$$CBG@AppUsageTelemetry@@SAXAEAY0DC@$$CBG@Z @ 0x1800A9FB8 (--$DebugInfo@AEAY0DC@$$CBG@AppUsageTelemetry@@SAXAEAY0DC@$$CBG@Z.c)
 *     ??$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z @ 0x1800AA1EC (--$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@2@@Z @ 0x1800AE870 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_1800AE870.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1801F7F14 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::RemoveAppFromTerminationTarget(__int64 a1, const WCHAR *a2, char a3)
{
  TraceLoggingHProvider v6; // r10
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // rdi
  __int64 *v10; // rbp
  LPCWSTR v11; // [rsp+30h] [rbp-78h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-40h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  if ( *(_DWORD *)AppUsageTelemetry::Provider(a1) > 5u )
  {
    TlgCreateWsz(&pDesc, L"Removing app entry from termination target");
    TlgWrite(v6, &unk_1804E3695, 0LL, 0LL, 3u, &pData);
  }
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 56), SRWLock);
  v8 = *(__int64 **)(a1 + 80);
  v9 = (__int64 *)v8[1];
  v10 = v8;
  if ( !*((_BYTE *)v9 + 25) )
  {
    do
    {
      if ( (int)std::wstring::compare(v9 + 4, a2) >= 0 )
      {
        v8 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
    v10 = *(__int64 **)(a1 + 80);
  }
  if ( v8 == v10 || (int)std::wstring::compare(a2, v8 + 4) < 0 )
    v8 = v10;
  if ( v8 != v10 )
  {
    if ( a3 )
    {
      if ( *((_QWORD *)a2 + 3) >= 8uLL )
        a2 = *(const WCHAR **)a2;
      v11 = a2;
      AppUsageTelemetry::EnforcedAppClosed<unsigned short const *>(&v11);
    }
    std::_Tree<std::_Tmap_traits<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>,0>>::erase(
      a1 + 80,
      &v11,
      v8);
  }
  if ( !*(_QWORD *)(a1 + 88) && *(_QWORD *)(a1 + 152) )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[50]>(v7);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 64LL))(*(_QWORD *)(a1 + 152));
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(a1 + 152));
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
}
