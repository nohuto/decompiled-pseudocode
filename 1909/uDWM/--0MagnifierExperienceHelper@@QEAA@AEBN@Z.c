/*
 * XREFs of ??0MagnifierExperienceHelper@@QEAA@AEBN@Z @ 0x1800B5220
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800844B8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ @ 0x1800B554C (-UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ.c)
 */

MagnifierExperienceHelper *__fastcall MagnifierExperienceHelper::MagnifierExperienceHelper(
        MagnifierExperienceHelper *this,
        double *a2)
{
  MagnifierExperienceHelper *v2; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((double *)this + 12) = *a2;
  MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation(this);
  return v2;
}
