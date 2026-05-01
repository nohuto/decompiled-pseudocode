/*
 * XREFs of IsPeoplePane @ 0x180028600
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180027F40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180055F30 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     wil::details::functor_wrapper_void__lambda_0fa515c3e57c51f8f145082688fa1bb9__&___ptr64_::Run @ 0x18007AFE0 (wil--details--functor_wrapper_void__lambda_0fa515c3e57c51f8f145082688fa1bb9__-___ptr64_--Run.c)
 *     ?IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlags@PositionerPropertySetHelpers@@@Z @ 0x18033D614 (-IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlag.c)
 *     ?TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOption@1@PEAUIUnknown@@PEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033F784 (-TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOpt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IsPeoplePane(__int64 a1)
{
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(int (__fastcall **)(__int64, const WCHAR *, int *))(*(_QWORD *)a1 + 152LL))(
         a1,
         L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
         &v4) >= 0
    && v4
    || (*(int (__fastcall **)(__int64, const WCHAR *, int *))(*(_QWORD *)a1 + 152LL))(
         a1,
         L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
         &v4) >= 0
    && v4 )
  {
    return 1;
  }
  return v2;
}
