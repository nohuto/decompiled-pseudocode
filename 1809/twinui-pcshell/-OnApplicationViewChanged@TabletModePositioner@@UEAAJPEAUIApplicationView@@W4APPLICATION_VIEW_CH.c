/*
 * XREFs of ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180070710
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F540 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002FA94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180306034 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803060CC (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18034663C (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18034B874 (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18034FD68 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  _QWORD v6[40]; // [rsp+20h] [rbp-158h] BYREF

  if ( *(_DWORD *)(a1 + 96) == 1 )
  {
    if ( *(_DWORD *)(a1 + 100) == 1 )
    {
      if ( a3 == 1 || a3 == 4 )
        goto LABEL_10;
      if ( a3 > 6 )
      {
        if ( a3 <= 8 )
        {
          wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v6);
          v6[0] = &TabletModeTraceLogging::ApplicationViewChangedFocus::`vftable';
          TabletModeTraceLogging::ApplicationViewChangedFocus::StartActivity(
            (TabletModeTraceLogging::ApplicationViewChangedFocus *)v6,
            a2);
          TabletModePositioner::ForegroundViewChanged((TabletModePositioner *)(a1 - 136), a2);
          wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6);
          v6[0] = &TabletModeTraceLogging::ApplicationViewChangedFocus::`vftable';
          wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
          wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v6);
          return 0LL;
        }
        if ( a3 == 11 )
LABEL_10:
          TabletModePositioner::ViewRemoved((TabletModePositioner *)(a1 - 136), a2);
      }
    }
    return 0LL;
  }
  return 2147947423LL;
}
