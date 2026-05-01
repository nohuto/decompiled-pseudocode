/*
 * XREFs of ??$com_query@UITabGroupUISource@@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITabGroupUISource@@Uerr_exception_policy@wil@@@0@AEAPEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x18008FFB8
 * Callers:
 *     ?ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1801F7290 (-ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@.c)
 *     ?DisconnectTitleBarFromSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1801F73E4 (-DisconnectTitleBarFromSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Inte.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<ITabGroupUISource,Windows::Internal::Shell::Experience::ITitleBar * &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_4f6ee7c2_24fc_4bd4_a809_788ba192fdff, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5800LL,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
