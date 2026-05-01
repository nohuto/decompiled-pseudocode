/*
 * XREFs of ??0Win32AppStateManager@@QEAA@XZ @ 0x1800ABC2C
 * Callers:
 *     ??$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWin32AppStateManager@@@12@XZ @ 0x1800AA3A0 (--$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VWin32AppStateManager@@@.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180054460 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800A7918 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppStateManager@AppLimits@FamilySafe.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@2@XZ @ 0x1800A9304 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@XZ @ 0x1800AE0A0 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND__@@@std@.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@2@XZ @ 0x1800AE100 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@_ea_1800AE100.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x1800AE160 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@_ea_1800AE160.c)
 */

// Hidden C++ exception states: #wind=4
Win32AppStateManager *__fastcall Win32AppStateManager::Win32AppStateManager(Win32AppStateManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  char *v6; // [rsp+50h] [rbp+18h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &Win32AppStateManager::`vftable'{for `Windows::Internal::FamilySafety::AppLimits::IAppStateManager'};
  *((_QWORD *)this + 1) = &Win32AppStateManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)this + 12) = SHTaskPoolGetUniqueContext(v2);
  *((_QWORD *)this + 7) = 0LL;
  v6 = (char *)this + 64;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::_Buyheadnode();
  v6 = (char *)this + 80;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>,0>>::_Buyheadnode(v3);
  *((_QWORD *)this + 12) = 0LL;
  v6 = (char *)this + 104;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Buyheadnode(0LL);
  *((_QWORD *)this + 15) = 0LL;
  v6 = (char *)this + 128;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 16) = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Buyheadnode(0LL);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 5;
  *((_DWORD *)this + 41) = 10;
  if ( SHRegGetDWORD(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Parental Controls\\AppLimits",
         L"TerminationMaxAttempts",
         &v5) >= 0
    && v5 - 1 <= 9 )
  {
    *((_DWORD *)this + 41) = v5;
  }
  if ( SHRegGetDWORD(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Parental Controls\\AppLimits",
         L"TerminationRetryWaitSeconds",
         &v5) >= 0
    && v5 - 1 <= 0x257 )
  {
    *((_DWORD *)this + 40) = v5;
  }
  return this;
}
