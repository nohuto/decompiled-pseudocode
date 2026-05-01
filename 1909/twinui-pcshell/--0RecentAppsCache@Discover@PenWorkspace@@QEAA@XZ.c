/*
 * XREFs of ??0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ @ 0x1801FA664
 * Callers:
 *     ??$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRecentAppsCache@Discover@PenWorkspace@@@Z @ 0x1801F9EB4 (--$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180014E34 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022278 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@2@PEAU32@0@Z @ 0x18005D43C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18005E750 (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??0?$event_t@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@Uerr_exception_policy@2@@wil@@QEAA@W4EventOptions@1@@Z @ 0x1801FA458 (--0-$event_t@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-Cl.c)
 */

// Hidden C++ exception states: #wind=7
PenWorkspace::Discover::RecentAppsCache *__fastcall PenWorkspace::Discover::RecentAppsCache::RecentAppsCache(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)this);
  *(_QWORD *)this = &PenWorkspace::Discover::RecentAppsCache::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = std::_List_alloc<std::_List_base_types<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>>::_Buynode0(
                            v2,
                            0LL,
                            0LL);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 4) = 1065353216;
  std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::_Init(
    (_QWORD *)this + 2,
    8LL);
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *((_QWORD *)this + 13) = v3;
  *(_OWORD *)v3 = 0LL;
  **((_QWORD **)this + 13) = (char *)this + 104;
  *((_QWORD *)this + 18) = 0LL;
  wil::event_t<wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_exception_policy>>,wil::err_exception_policy>::event_t<wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_exception_policy>>,wil::err_exception_policy>((wil::details **)this + 19);
  InitializeSRWLock((PSRWLOCK)this + 20);
  InitializeSRWLock((PSRWLOCK)this + 21);
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  return this;
}
