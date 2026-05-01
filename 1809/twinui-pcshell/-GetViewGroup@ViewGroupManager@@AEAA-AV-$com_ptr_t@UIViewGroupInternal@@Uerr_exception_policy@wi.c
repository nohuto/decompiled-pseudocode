/*
 * XREFs of ?GetViewGroup@ViewGroupManager@@AEAA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801FA80C
 * Callers:
 *     ?OnViewPositionChanged@ViewGroupManager@@UEAAJPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1801FAE70 (-OnViewPositionChanged@ViewGroupManager@@UEAAJPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ViewGroupManager::GetViewGroup(RTL_SRWLOCK *a1, __int64 *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi
  _QWORD *Ptr; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rbx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = a1 + 31;
  AcquireSRWLockShared(a1 + 31);
  Ptr = a1[32].Ptr;
  v8 = (_QWORD *)*Ptr;
  v12 = (_QWORD *)*Ptr;
  while ( v8 != Ptr )
  {
    v9 = v8[4];
    v11 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 64LL))(v9, a3) )
    {
      v11 = 0LL;
      *a2 = v9;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
      goto LABEL_9;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(&v12);
    v8 = v12;
  }
  *a2 = 0LL;
LABEL_9:
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return a2;
}
