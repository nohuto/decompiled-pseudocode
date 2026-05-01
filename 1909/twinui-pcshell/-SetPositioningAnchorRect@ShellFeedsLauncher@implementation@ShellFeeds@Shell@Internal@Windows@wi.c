/*
 * XREFs of ?SetPositioningAnchorRect@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJW4ShellFeedsButtonType@Experience@456@URect@Foundation@6@@Z @ 0x1800C42C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@@Z @ 0x1800BFF54 (--$com_query@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@AEAV-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::SetPositioningAnchorRect(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  __int64 v5; // rax
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v11; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    wil::com_query<Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
      (__int64)&v11,
      (_QWORD *)(a1 + 96));
    v5 = *v11;
    v9 = *a3;
    v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v5 + 48))(v11, a2, &v9);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        96LL,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
        (const char *)(unsigned int)v6);
      JUMPOUT(0x1800C4344LL);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (unsigned int)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
                           v7);
  }
  return result;
}
