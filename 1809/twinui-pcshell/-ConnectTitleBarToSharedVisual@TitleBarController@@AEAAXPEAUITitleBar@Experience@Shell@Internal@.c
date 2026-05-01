/*
 * XREFs of ?ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1801F7290
 * Callers:
 *     _lambda_4583b2cd47151c5f4a6d744938b764a0_::operator() @ 0x1801F6534 (_lambda_4583b2cd47151c5f4a6d744938b764a0_--operator().c)
 *     _lambda_5f9e95539f8e1465166802ff2b1874b7_::operator() @ 0x1801F6898 (_lambda_5f9e95539f8e1465166802ff2b1874b7_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UITabGroupUISource@@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITabGroupUISource@@Uerr_exception_policy@wil@@@0@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x18008FFB8 (--$com_query@UITabGroupUISource@@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@wil@@YA-AV.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x1801F9698 (-UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Exper.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TitleBarController::ConnectTitleBarToSharedVisual(
        TitleBarController *this,
        struct Windows::Internal::Shell::Experience::ITitleBar *a2,
        struct IWin32ApplicationView *a3,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a4)
{
  int v7; // eax
  int TitleBarVisual; // eax
  _QWORD *v9; // rax
  int v10; // eax
  TitleBarController *v11; // rcx
  __int64 v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HANDLE hObject; // [rsp+60h] [rbp+20h] BYREF
  struct Windows::Internal::Shell::Experience::ITitleBar *v15; // [rsp+68h] [rbp+28h] BYREF
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF

  v15 = a2;
  hObject = this;
  v12[1] = -2LL;
  v7 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, __int64 *))(*(_QWORD *)a3 + 24LL))(a3, &v16);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      404LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v7);
  hObject = (HANDLE)-1LL;
  TitleBarVisual = DwmpGetTitleBarVisual(v16, &hObject);
  if ( TitleBarVisual < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      406LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)TitleBarVisual);
    __debugbreak();
  }
  if ( (char *)hObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      407LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)0x80070006LL);
    __debugbreak();
  }
  v9 = (_QWORD *)wil::com_query<ITabGroupUISource,Windows::Internal::Shell::Experience::ITitleBar * &>(
                   (__int64)v12,
                   &v15);
  v10 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *))(*(_QWORD *)*v9 + 48LL))(
          *v9,
          hObject,
          v16,
          a4);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      408LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v10);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v12);
  TitleBarController::UpdateWin32TitleBarSize(v11, a3, a2);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
}
