/*
 * XREFs of ?PerMonitorPositionerLayoutChanged@TabletModePositionerManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180342EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180342A70 (-NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutO.c)
 */

__int64 __fastcall TabletModePositionerManager::PerMonitorPositionerLayoutChanged(
        TabletModePositionerManager *this,
        struct IImmersiveMonitor *a2,
        struct IAppLayoutOperation *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = TabletModePositionerManager::NotifyAppLayoutChanged((TabletModePositionerManager *)((char *)this - 88), a2, a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7C,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
