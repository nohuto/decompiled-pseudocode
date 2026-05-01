/*
 * XREFs of ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180039338
 * Callers:
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800391A4 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAIPEAUHWND__@@PEAUIApplicationView@@_N@Z @ 0x180098C3C (-TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?DelayedInitialization@CAppViewManager@@UEAAJXZ @ 0x18012F570 (-DelayedInitialization@CAppViewManager@@UEAAJXZ.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180220090 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803992B0 (-InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180399930 (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18039A534 (-_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18039E6D0 (-SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803A5CB4 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 *     ?GetApplication@CDropFeedbackItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1803DCEC0 (-GetApplication@CDropFeedbackItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18040F0A8 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     ?GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18040F0FC (-GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetApp@CAppLayoutItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18041FC20 (-GetApp@CAppLayoutItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetApp@CAppLayoutOperationItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180420D90 (-GetApp@CAppLayoutOperationItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetApplicationFromView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2,
        struct IImmersiveApplication **a3)
{
  __int64 (__fastcall **v3)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  v3 = *this;
  v11 = 0LL;
  v5 = (*v3)((ApplicationViewHelpers *)this, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v11);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v11 + 24LL))(v11, a2);
    v5 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v6,
        v9);
  }
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
