/*
 * XREFs of ?ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z @ 0x1800B55D4
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800B5644 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierExperienceHelper::ClampToMonitorBounds(
        MagnifierExperienceHelper *this,
        double *a2,
        double *a3)
{
  double v3; // xmm1_8
  double v4; // xmm3_8
  double v5; // xmm2_8
  double v6; // xmm1_8
  double v7; // xmm0_8
  double v8; // xmm1_8
  double v9; // xmm1_8

  v3 = (double)*((int *)this + 10);
  v4 = fmax((double)*((int *)this + 8), *a2);
  v5 = fmax((double)*((int *)this + 9), *a3);
  if ( *((double *)this + 8) + v4 <= v3 )
    v6 = v4;
  else
    v6 = v3 - *((double *)this + 8);
  v7 = *((double *)this + 9);
  *a2 = v6;
  v8 = (double)*((int *)this + 11);
  if ( v7 + v5 <= v8 )
    v9 = v5;
  else
    v9 = v8 - *((double *)this + 9);
  *a3 = v9;
}
