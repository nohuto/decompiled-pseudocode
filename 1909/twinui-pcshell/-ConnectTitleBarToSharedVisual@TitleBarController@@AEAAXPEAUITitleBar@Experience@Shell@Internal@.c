/*
 * XREFs of ?ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1802678C0
 * Callers:
 *     _lambda_89df5410cec75dfa270b441e23c20fb9_::operator() @ 0x180266CE0 (_lambda_89df5410cec75dfa270b441e23c20fb9_--operator().c)
 *     _lambda_c73351efc5a47bb1a53229d554a2998e_::operator() @ 0x18026709C (_lambda_c73351efc5a47bb1a53229d554a2998e_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UITabGroupUISource@@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITabGroupUISource@@Uerr_exception_policy@wil@@@0@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x1800A6C50 (--$com_query@UITabGroupUISource@@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@wil@@YA-AV.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x180269AD8 (-UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Exper.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TitleBarController::ConnectTitleBarToSharedVisual(
        TitleBarController *this,
        struct Windows::Internal::Shell::Experience::ITitleBar *a2,
        struct IWin32ApplicationView *a3,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a4)
{
  int v7; // eax
  _QWORD *v8; // rax
  int v9; // eax
  TitleBarController *v10; // rcx
  __int64 v11[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HANDLE hObject; // [rsp+60h] [rbp+20h] BYREF
  struct Windows::Internal::Shell::Experience::ITitleBar *v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF

  v14 = a2;
  hObject = this;
  v11[1] = -2LL;
  v7 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, __int64 *))(*(_QWORD *)a3 + 24LL))(a3, &v15);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      394LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v7);
  hObject = (HANDLE)-1LL;
  if ( (int)DwmpGetTitleBarVisual(v15, &hObject) >= 0 )
  {
    if ( (((unsigned __int64)hObject + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        398LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)0x80070006LL);
      __debugbreak();
    }
    v8 = (_QWORD *)wil::com_query<ITabGroupUISource,Windows::Internal::Shell::Experience::ITitleBar * &>(
                     (__int64)v11,
                     &v14);
    v9 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *))(*(_QWORD *)*v8 + 48LL))(
           *v8,
           hObject,
           v15,
           a4);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        399LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v9);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v11);
    TitleBarController::UpdateWin32TitleBarSize(v10, a3, a2);
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
}
