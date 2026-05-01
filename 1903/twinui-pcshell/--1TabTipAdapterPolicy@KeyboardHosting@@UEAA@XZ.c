/*
 * XREFs of ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x18031E160
 * Callers:
 *     ??_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z @ 0x18031E700 (--_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x180242A44 (-erase@-$_Tree@V-$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U-$less@.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803208AC (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x180329870 (-erase@-$_Tree@V-$_Tmap_traits@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::~TabTipAdapterPolicy(KeyboardHosting::TabTipAdapterPolicy *this)
{
  void *v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  void *v7; // rcx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 67);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 69) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 67) = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
  }
  v3 = (_QWORD **)*((_QWORD *)this + 65);
  v4 = *v3;
  *v3 = v3;
  *(_QWORD *)(*((_QWORD *)this + 65) + 8LL) = *((_QWORD *)this + 65);
  *((_QWORD *)this + 66) = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 65);
  if ( v4 != v5 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x18);
      v5 = (_QWORD *)*((_QWORD *)this + 65);
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x18);
  std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::erase(
    (char *)this + 464,
    &v12,
    **((_QWORD **)this + 58));
  std::_Deallocate<16,0>(*((void **)this + 58), (const struct std::nothrow_t *)0x28);
  std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::erase(
    (__int64 ***)this + 56,
    &v12,
    **((__int64 ***)this + 56),
    *((__int64 **)this + 56));
  std::_Deallocate<16,0>(*((void **)this + 56), (const struct std::nothrow_t *)0x30);
  v7 = (void *)*((_QWORD *)this + 48);
  if ( v7 )
  {
    std::_Deallocate<16,0>(
      v7,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 50) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  v8 = (_QWORD **)*((_QWORD *)this + 46);
  v9 = *v8;
  *v8 = v8;
  *(_QWORD *)(*((_QWORD *)this + 46) + 8LL) = *((_QWORD *)this + 46);
  *((_QWORD *)this + 47) = 0LL;
  v10 = (_QWORD *)*((_QWORD *)this + 46);
  if ( v9 != v10 )
  {
    do
    {
      v11 = (_QWORD *)*v9;
      std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x48);
      v10 = (_QWORD *)*((_QWORD *)this + 46);
      v9 = v11;
    }
    while ( v11 != v10 );
  }
  std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)0x48);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((char *)this + 208);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((char *)this + 200);
  std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::erase(
    (__int64 ***)this + 11,
    &v12,
    **((__int64 ***)this + 11),
    *((__int64 **)this + 11));
  std::_Deallocate<16,0>(*((void **)this + 11), (const struct std::nothrow_t *)0x30);
  std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::erase(
    (__int64 ***)this + 9,
    &v12,
    **((__int64 ***)this + 9),
    *((__int64 **)this + 9));
  std::_Deallocate<16,0>(*((void **)this + 9), (const struct std::nothrow_t *)0x30);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>((__int64)this);
}
