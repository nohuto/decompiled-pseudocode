/*
 * XREFs of ?GetApplicableViewGroup@ViewGroupManager@@AEAA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUHWND__@@@Z @ 0x1801FA658
 * Callers:
 *     ?OnGroupWindowTemplateApplied@ViewGroupManager@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x1801FAB10 (-OnGroupWindowTemplateApplied@ViewGroupManager@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ViewGroupManager::GetApplicableViewGroup(RTL_SRWLOCK *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  RTL_SRWLOCK *v8; // rsi
  _QWORD *Ptr; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rbx
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v13[1] = -2LL;
  v8 = a1 + 31;
  AcquireSRWLockShared(a1 + 31);
  v13[2] = v8;
  Ptr = a1[32].Ptr;
  v10 = (_QWORD *)*Ptr;
  v13[0] = *Ptr;
  while ( v10 != Ptr )
  {
    v11 = v10[4];
    v14 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 88LL))(v11, a3, a4) )
    {
      v14 = 0LL;
      *a2 = v11;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
      goto LABEL_9;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(v13);
    v10 = (_QWORD *)v13[0];
  }
  *a2 = 0LL;
LABEL_9:
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return a2;
}
