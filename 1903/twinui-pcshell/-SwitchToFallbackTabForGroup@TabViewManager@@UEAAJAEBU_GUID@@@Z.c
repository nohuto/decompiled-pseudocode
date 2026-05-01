/*
 * XREFs of ?SwitchToFallbackTabForGroup@TabViewManager@@UEAAJAEBU_GUID@@@Z @ 0x18023DD40
 * Callers:
 *     ?RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180236CD0 (-RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?TryGetFallbackTabForGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18023FE0C (-TryGetFallbackTabForGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@In.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::SwitchToFallbackTabForGroup(TabViewManager *this, const struct _GUID *a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  __int64 *FallbackTabForGroup; // rax
  __int64 v7; // rbx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0LL;
  v3 = **((_QWORD **)this + 136);
  v14 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 88);
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1500LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v5);
    if ( v14 )
    {
      AcquireSRWLockShared((PSRWLOCK)this + 164);
      FallbackTabForGroup = (__int64 *)TabViewManager::TryGetFallbackTabForGroup((char *)this - 136, &v15, v14);
      v7 = *FallbackTabForGroup;
      *FallbackTabForGroup = 0LL;
      v16 = v7;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
      if ( this != (TabViewManager *)-1312LL )
        ReleaseSRWLockShared((PSRWLOCK)this + 164);
      if ( v7 )
      {
        v15 = 0LL;
        v8 = (__int64 *)*((_QWORD *)this + 135);
        v9 = *v8;
        v15 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v9 + 144))(v8, v14, v7, &v15);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1511LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v10);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5ED,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v11);
  }
  return result;
}
