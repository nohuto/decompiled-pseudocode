/*
 * XREFs of ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800B5644
 * Callers:
 *     ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@@Z @ 0x1800854D4 (-UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z @ 0x1800B55D4 (-ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z.c)
 *     ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800B574C (-GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA-AUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800B57BC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800B5810 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 */

struct tagPOINT __fastcall MagnifierExperienceHelper::GetFullScreenMagnifierOffset(
        MagnifierExperienceHelper *this,
        struct tagPOINT *a2,
        const struct tagPOINT *a3,
        const double *a4)
{
  const struct tagRECT *MonitorRectFromPoint; // rax
  double v9; // xmm4_8
  MagnifierExperienceHelper *v10; // rcx
  double v11; // xmm5_8
  struct tagPOINT result; // rax
  double v13; // xmm0_8
  double v14; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v15; // [rsp+28h] [rbp-30h] BYREF

  MonitorRectFromPoint = MagnifierExperienceHelper::GetMonitorRectFromPoint(this, &v15, a3);
  MagnifierExperienceHelper::SetMonitorRect(this, MonitorRectFromPoint);
  MagnifierExperienceHelper::SetMagnificationFactor(this, a4);
  v9 = (double)a3->x - *((double *)this + 10);
  *(double *)&v15.left = (double)a3->y - *((double *)this + 11);
  v14 = v9;
  MagnifierExperienceHelper::ClampToMonitorBounds(v10, &v14, (double *)&v15.left);
  v11 = *((double *)this + 12);
  result = (struct tagPOINT)a2;
  v13 = (double)*((int *)this + 9);
  LODWORD(v14) = (int)((v14 - (double)*((int *)this + 8) / v11) * v11 + 0.5);
  HIDWORD(v14) = (int)((*(double *)&v15.left - v13 / v11) * v11 + 0.5);
  *(double *)a2 = v14;
  return result;
}
