/*
 * XREFs of ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180037CD0
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180037B24 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x180037D28 (--0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 */

__int64 __fastcall GetScalingInfoForMonitor(HMONITOR a1, struct SCALINGINFO *a2)
{
  CImmersiveOrPrimaryMonitor *v3; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-38h] BYREF

  v3 = CImmersiveOrPrimaryMonitor::CImmersiveOrPrimaryMonitor((CImmersiveOrPrimaryMonitor *)v5, a1);
  *(_OWORD *)a2 = *(_OWORD *)v3;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v3 + 1);
  *((_DWORD *)a2 + 8) = *((_DWORD *)v3 + 8);
  return *((unsigned int *)v3 + 9);
}
