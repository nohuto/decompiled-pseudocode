/*
 * XREFs of ?GetTabsForAumid@TabViewManager@@UEAAJAEBVHString@Wrappers@WRL@Microsoft@@AEAV?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1801DD480
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801D19F0 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_ex.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::GetTabsForAumid(RTL_SRWLOCK *a1, HSTRING *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rdi
  const char *v7; // r9
  __int64 *Ptr; // rsi
  __int64 v9; // rbx
  bool v10; // r14
  __int64 v11; // r14
  PCWSTR StringRawBuffer; // rax
  __int64 *v13; // r8
  __int64 result; // rax
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v15[1] = -2LL;
  v6 = a1 + 162;
  AcquireSRWLockShared(a1 + 162);
  v15[2] = v6;
  Ptr = (__int64 *)a1[135].Ptr;
  v9 = *Ptr;
  v15[0] = *Ptr;
  try
  {
    while ( (__int64 *)v9 != Ptr )
    {
      (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v9 + 32))(
        *(_QWORD *)(v9 + 32),
        &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
        &v18);
      v10 = v18 != 0;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v9 + 32);
        StringRawBuffer = WindowsGetStringRawBuffer(*a2, 0LL);
        if ( (*(int (__fastcall **)(__int64, PCWSTR, int *))(*(_QWORD *)v11 + 152LL))(v11, StringRawBuffer, &v17) >= 0 )
        {
          if ( v17 )
          {
            v13 = (__int64 *)(v9 + 40);
            if ( *(_QWORD *)(a3 + 16) == *(_QWORD *)(a3 + 8) )
            {
              std::vector<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const &>(
                (__int64 **)a3,
                *(__int64 **)(a3 + 8),
                v13);
            }
            else
            {
              wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
                *(_QWORD **)(a3 + 8),
                *v13);
              *(_QWORD *)(a3 + 8) += 8LL;
            }
          }
        }
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(v15);
      v9 = v15[0];
    }
    if ( v6 )
      ReleaseSRWLockShared(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4DA,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v7);
  }
  return result;
}
