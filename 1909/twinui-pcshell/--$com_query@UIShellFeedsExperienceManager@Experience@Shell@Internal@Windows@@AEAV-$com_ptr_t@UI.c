/*
 * XREFs of ??$com_query@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@@Z @ 0x1800BFF54
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJE@Z @ 0x1800C12E0 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@.c)
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJW4ShellFeedsButtonType@Experience@456@W4ShellFeedsButtonInteraction@9456@PEAUHSTRING__@@@Z @ 0x1800C1390 (-NotifyTaskbarButtonInteraction@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     ?Poke@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAUHSTRING__@@@Z @ 0x1800C14D0 (-Poke@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAUHSTRIN.c)
 *     ?SetPositioningAnchorRect@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJW4ShellFeedsButtonType@Experience@456@URect@Foundation@6@@Z @ 0x1800C42C0 (-SetPositioningAnchorRect@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@wi.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*a2 + 24LL))(
         *a2,
         &GUID_d763448f_c4e9_45fe_8492_f45e1e2aab4c,
         a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5421LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800BFF9DLL);
  }
  return a1;
}
