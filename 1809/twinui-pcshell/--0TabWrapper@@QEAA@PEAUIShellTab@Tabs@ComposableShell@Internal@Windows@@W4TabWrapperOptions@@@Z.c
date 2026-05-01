/*
 * XREFs of ??0TabWrapper@@QEAA@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@W4TabWrapperOptions@@@Z @ 0x1801D4D6C
 * Callers:
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801EE0F0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EF41C (-UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@Co.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall TabWrapper::TabWrapper(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  *((_DWORD *)a1 + 6) = 0;
  if ( (a3 & 7) != 0 )
  {
    v6 = *a1;
    *a1 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 168LL))(a2, a1);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        28LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabwrapper.h",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    if ( *a1 )
    {
      if ( (a3 & 2) != 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL))(*a1, a1 + 1);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            33LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabwrapper.h",
            (const char *)(unsigned int)v8);
          __debugbreak();
        }
      }
      if ( (a3 & 4) != 0 )
      {
        v9 = *a1;
        v14 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 56LL))(v9, &v14);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            39LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabwrapper.h",
            (const char *)(unsigned int)v10);
          __debugbreak();
        }
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 56LL))(v14, a1 + 3);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            40LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabwrapper.h",
            (const char *)(unsigned int)v11);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
      }
    }
  }
  return a1;
}
