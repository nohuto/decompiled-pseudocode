/*
 * XREFs of ?SwitchToFallbackTabForGroup@TabViewManager@@UEAAJAEBU_GUID@@@Z @ 0x1801EB7C0
 * Callers:
 *     ?RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E3FE0 (-RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?TryGetFallbackTabForGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801ED894 (-TryGetFallbackTabForGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@In.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::SwitchToFallbackTabForGroup(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  PVOID Ptr; // rcx
  int v4; // eax
  __int64 *FallbackTabForGroup; // rax
  __int64 v6; // rbx
  PVOID v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  Ptr = this[129].Ptr;
  v12 = 0LL;
  try
  {
    v4 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 88LL))(Ptr);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1815LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v4);
    if ( v12 )
    {
      AcquireSRWLockShared(this + 167);
      FallbackTabForGroup = (__int64 *)TabViewManager::TryGetFallbackTabForGroup(&this[-17], &v13, v12);
      v6 = *FallbackTabForGroup;
      *FallbackTabForGroup = 0LL;
      v14 = v6;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
      if ( this != (RTL_SRWLOCK *)-1336LL )
        ReleaseSRWLockShared(this + 167);
      if ( v6 )
      {
        v7 = this[128].Ptr;
        v13 = 0LL;
        v8 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64, __int64 *))(*(_QWORD *)v7 + 144LL))(v7, v12, v6, &v13);
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1826LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v8);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x727,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v9);
  }
  return result;
}
