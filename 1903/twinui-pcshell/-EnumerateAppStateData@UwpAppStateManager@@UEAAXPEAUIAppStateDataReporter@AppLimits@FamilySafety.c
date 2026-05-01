/*
 * XREFs of ?EnumerateAppStateData@UwpAppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800A7D30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1800822E4 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180100138 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180100138.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpAppStateManager::EnumerateAppStateData(
        RTL_SRWLOCK *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  _QWORD *Ptr; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v12; // [rsp+68h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 6, &v12);
  Ptr = this[7].Ptr;
  v5 = (_QWORD *)*Ptr;
  v11 = (_QWORD *)*Ptr;
  while ( v5 != Ptr )
  {
    v6 = (_QWORD *)v5[8];
    v7 = v6;
    if ( v6[3] >= 8uLL )
      v7 = (_QWORD *)*v6;
    (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, _QWORD *))(*(_QWORD *)a2 + 24LL))(
      a2,
      v7);
    v8 = (_QWORD *)v6[4];
    v9 = (_QWORD *)*v8;
    v10 = (_QWORD *)*v8;
    while ( v9 != v8 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, _QWORD))(*(_QWORD *)a2 + 48LL))(
        a2,
        v9[4]);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v10);
      v9 = v10;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v11);
    v5 = v11;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v12);
}
