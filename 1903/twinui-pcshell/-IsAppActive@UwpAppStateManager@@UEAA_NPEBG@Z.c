/*
 * XREFs of ?IsAppActive@UwpAppStateManager@@UEAA_NPEBG@Z @ 0x1800A7FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1800822E4 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??$find@PEBGU?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@1@AEBQEBG@Z @ 0x1800A77E4 (--$find@PEBGU-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180100138 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180100138.c)
 */

bool __fastcall UwpAppStateManager::IsAppActive(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID v4; // [rsp+30h] [rbp+8h] BYREF
  const unsigned __int16 *v5; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  v2 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 6, &v6);
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::find<unsigned short const *,std::less<void>,int>(
    (__int64 *)&v2[7],
    &v4,
    &v5);
  LOBYTE(v2) = v4 != v2[7].Ptr;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v6);
  return (char)v2;
}
