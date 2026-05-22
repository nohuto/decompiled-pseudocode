/*
 * XREFs of ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x180034170
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003031C (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800305F8 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800370EC (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnable(
        ControllerProcessor *this,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT a4)
{
  __int128 v4; // xmm0
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v4 = (__int128)*a3;
  *((_DWORD *)this + 444) = a2;
  v6 = v4;
  ControllerProcessor::UpdateNavigationState(this, 0LL, &v6);
  return 0LL;
}
