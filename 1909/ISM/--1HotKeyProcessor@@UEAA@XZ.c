/*
 * XREFs of ??1HotKeyProcessor@@UEAA@XZ @ 0x180145B10
 * Callers:
 *     ??_GHotKeyProcessor@@UEAAPEAXI@Z @ 0x180145CE0 (--_GHotKeyProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x180147554 (-erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@UHOTKEY@@@std@@U-$less@K@2@V-$allocator@U-$pair@$$.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180147748 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@2@V32@0@Z @ 0x1801478F4 (-erase@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHOTKEY@@@std@@U-$less@V-$shared_ptr@UHOTKEY@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HotKeyProcessor::~HotKeyProcessor(HotKeyProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  _BYTE v10[32]; // [rsp+48h] [rbp-20h] BYREF
  char v11; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v12; // [rsp+88h] [rbp+20h]

  *(_QWORD *)this = &HotKeyProcessor::`vftable'{for `IRemoteHotKeyProcessor'};
  *((_QWORD *)this + 1) = &HotKeyProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyReconnectAdapterOwner>'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 15);
  v3 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  v4 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::erase(
    (char *)this + 64,
    &v11,
    **((_QWORD **)this + 8),
    *((_QWORD *)this + 8));
  std::_Deallocate<16,0>(*((void **)this + 8), (const struct std::nothrow_t *)0x30);
  v12 = (_QWORD *)*((_QWORD *)this + 5);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    (char *)this + 40,
    v7,
    *v12,
    v12);
  std::_Deallocate<16,0>(*((void **)this + 5), (const struct std::nothrow_t *)0x20);
  v8 = (__int64 *)*((_QWORD *)this + 3);
  v9 = *v8;
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<HOTKEY>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<HOTKEY>>>,0>>::erase(
    (char *)this + 24,
    v10,
    v9);
  std::_Deallocate<16,0>(*((void **)this + 3), (const struct std::nothrow_t *)0x38);
  *((_DWORD *)this + 5) = -1073741823;
}
