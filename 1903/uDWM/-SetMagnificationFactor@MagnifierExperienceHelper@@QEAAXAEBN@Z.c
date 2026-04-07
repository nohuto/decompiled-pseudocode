/*
 * XREFs of ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800B57BC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180084818 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800B5644 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierExperienceHelper::SetMagnificationFactor(MagnifierExperienceHelper *this, double *a2)
{
  double v2; // xmm3_8
  double v3; // xmm2_8
  double v4; // xmm1_8

  v2 = *a2;
  if ( *((double *)this + 12) != *a2 )
  {
    v3 = *((double *)this + 6) / v2;
    v4 = *((double *)this + 7) / v2;
    *((double *)this + 8) = v3;
    *((double *)this + 9) = v4;
    *((double *)this + 10) = v3 * 0.5;
    *((double *)this + 12) = v2;
    *((double *)this + 11) = v4 * 0.5;
  }
}
