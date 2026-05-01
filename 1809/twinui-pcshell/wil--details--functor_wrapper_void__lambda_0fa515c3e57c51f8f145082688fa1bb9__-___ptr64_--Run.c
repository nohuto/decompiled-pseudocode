/*
 * XREFs of wil::details::functor_wrapper_void__lambda_0fa515c3e57c51f8f145082688fa1bb9__&___ptr64_::Run @ 0x18007AFE0
 * Callers:
 *     <none>
 * Callees:
 *     IsPeoplePane @ 0x180028600 (IsPeoplePane.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180340D88 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_0fa515c3e57c51f8f145082688fa1bb9______ptr64_::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  int LaunchPositionForPeoplePane; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 8);
  if ( IsPeoplePane(**(_QWORD **)v1) )
  {
    LaunchPositionForPeoplePane = CDesktopPositioner::_GetLaunchPositionForPeoplePane(
                                    *(CDesktopPositioner **)(v1 + 8),
                                    **(struct IApplicationView ***)v1,
                                    **(struct IApplicationViewPosition ****)(v1 + 16));
    if ( LaunchPositionForPeoplePane < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6C9,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)LaunchPositionForPeoplePane,
        v4);
  }
  return 0LL;
}
