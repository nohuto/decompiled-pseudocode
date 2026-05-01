/*
 * XREFs of ?DisconnectTitleBarFromSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x180248400
 * Callers:
 *     ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180249AF0 (-RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UITabGroupUISource@@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITabGroupUISource@@Uerr_exception_policy@wil@@@0@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x180099B60 (--$com_query@UITabGroupUISource@@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@wil@@YA-AV.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TitleBarController::DisconnectTitleBarFromSharedVisual(
        TitleBarController *this,
        struct Windows::Internal::Shell::Experience::ITitleBar *a2,
        struct IWin32ApplicationView *a3,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a4)
{
  int v5; // eax
  char *v6; // rcx
  _QWORD *v7; // rax
  int v8; // ebx
  char v9; // al
  __int64 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HANDLE hObject; // [rsp+50h] [rbp+10h] BYREF
  struct Windows::Internal::Shell::Experience::ITitleBar *v13; // [rsp+58h] [rbp+18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF

  v13 = a2;
  hObject = this;
  v10[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, __int64 *))(*(_QWORD *)a3 + 24LL))(a3, &v14);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19A,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v5);
    return;
  }
  if ( v14 )
  {
    hObject = (HANDLE)-1LL;
    if ( (int)DwmpGetTitleBarVisual(v14, &hObject) >= 0 )
    {
      v6 = (char *)hObject;
      if ( (char *)hObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_16;
      v7 = (_QWORD *)wil::com_query<ITabGroupUISource,Windows::Internal::Shell::Experience::ITitleBar * &>(
                       (__int64)v10,
                       &v13);
      v8 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *))(*(_QWORD *)*v7 + 56LL))(
             *v7,
             hObject,
             v14,
             a4);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v10);
      v9 = 1;
      if ( (unsigned int)(v8 + 2147023170) <= 1
        || v8 == -2147023174
        || v8 == -2147417848
        || v8 == -2147418094
        || v8 == -2147418105
        || v8 >= 0 )
      {
        v9 = 0;
      }
      if ( v9 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          420LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
    }
    v6 = (char *)hObject;
LABEL_16:
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v6);
  }
}
