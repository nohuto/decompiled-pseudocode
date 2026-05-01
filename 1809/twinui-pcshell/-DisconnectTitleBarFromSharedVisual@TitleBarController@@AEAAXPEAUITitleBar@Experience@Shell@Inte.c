/*
 * XREFs of ?DisconnectTitleBarFromSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1801F73E4
 * Callers:
 *     ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F8BF8 (-RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UITabGroupUISource@@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITabGroupUISource@@Uerr_exception_policy@wil@@@0@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x18008FFB8 (--$com_query@UITabGroupUISource@@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@wil@@YA-AV.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TitleBarController::DisconnectTitleBarFromSharedVisual(
        TitleBarController *this,
        struct Windows::Internal::Shell::Experience::ITitleBar *a2,
        struct IWin32ApplicationView *a3,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a4)
{
  int v5; // eax
  int TitleBarVisual; // eax
  char *v7; // rcx
  _QWORD *v8; // rax
  int v9; // ebx
  char v10; // al
  __int64 v11[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HANDLE hObject; // [rsp+50h] [rbp+10h] BYREF
  struct Windows::Internal::Shell::Experience::ITitleBar *v14; // [rsp+58h] [rbp+18h] BYREF
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF

  v14 = a2;
  hObject = this;
  v11[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, __int64 *))(*(_QWORD *)a3 + 24LL))(a3, &v15);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      418LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v5);
    return;
  }
  if ( v15 )
  {
    hObject = (HANDLE)-1LL;
    TitleBarVisual = DwmpGetTitleBarVisual(v15, &hObject);
    if ( TitleBarVisual >= 0 )
    {
      v7 = (char *)hObject;
      if ( (char *)hObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
      {
LABEL_7:
        if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v7);
        return;
      }
      v8 = (_QWORD *)wil::com_query<ITabGroupUISource,Windows::Internal::Shell::Experience::ITitleBar * &>(
                       (__int64)v11,
                       &v14);
      v9 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *))(*(_QWORD *)*v8 + 56LL))(
             *v8,
             hObject,
             v15,
             a4);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v11);
      v10 = 1;
      if ( (unsigned int)(v9 + 2147023170) <= 1
        || v9 == -2147023174
        || v9 == -2147417848
        || v9 == -2147418094
        || v9 == -2147418105
        || v9 >= 0 )
      {
        v10 = 0;
      }
      if ( v10 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          428LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        421LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)TitleBarVisual);
    }
    v7 = (char *)hObject;
    goto LABEL_7;
  }
}
