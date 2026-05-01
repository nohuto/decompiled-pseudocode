/*
 * XREFs of ?GetTabsForAumid@TabViewManager@@UEAAJAEBVHString@Wrappers@WRL@Microsoft@@AEAV?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180230A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18022768C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_ex.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::GetTabsForAumid(RTL_SRWLOCK *a1, HSTRING *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rdi
  const char *v7; // r9
  __int64 *Ptr; // rsi
  __int64 v9; // rbx
  bool v10; // r14
  __int64 v11; // r15
  int (__fastcall *v12)(__int64, PCWSTR, int *); // r14
  PCWSTR StringRawBuffer; // rax
  __int64 *v14; // r8
  __int64 result; // rax
  _QWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v16[1] = -2LL;
  v6 = a1 + 158;
  AcquireSRWLockShared(a1 + 158);
  v16[2] = v6;
  Ptr = (__int64 *)a1[138].Ptr;
  v9 = *Ptr;
  v16[0] = *Ptr;
  try
  {
    while ( (__int64 *)v9 != Ptr )
    {
      (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v9 + 32))(
        *(_QWORD *)(v9 + 32),
        &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
        &v19);
      v10 = v19 != 0;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v9 + 32);
        v12 = *(int (__fastcall **)(__int64, PCWSTR, int *))(*(_QWORD *)v11 + 152LL);
        StringRawBuffer = WindowsGetStringRawBuffer(*a2, 0LL);
        if ( v12(v11, StringRawBuffer, &v18) >= 0 )
        {
          if ( v18 )
          {
            v14 = (__int64 *)(v9 + 40);
            if ( *(_QWORD *)(a3 + 16) == *(_QWORD *)(a3 + 8) )
            {
              std::vector<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const &>(
                (__int64 **)a3,
                *(__int64 **)(a3 + 8),
                v14);
            }
            else
            {
              wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
                *(_QWORD **)(a3 + 8),
                *v14);
              *(_QWORD *)(a3 + 8) += 8LL;
            }
          }
        }
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(v16);
      v9 = v16[0];
    }
    if ( v6 )
      ReleaseSRWLockShared(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x46E,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v7);
  }
  return result;
}
