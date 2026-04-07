/*
 * XREFs of ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800B54B0
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800B52E4 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierExperienceHelper::SetMonitorRect(const RECT *this, const struct tagRECT *a2)
{
  struct tagRECT *v2; // rdi
  int v5; // eax
  double v6; // xmm2_8
  double v7; // xmm2_8
  double v8; // xmm1_8

  v2 = (struct tagRECT *)&this[2];
  if ( !EqualRect(this + 2, a2) )
  {
    CopyRect(v2, a2);
    v5 = this[2].bottom - this[2].top;
    v6 = (double)(this[2].right - v2->left);
    *(double *)&this[3].left = v6;
    v7 = v6 / *(double *)&this[6].left;
    *(double *)&this[3].right = (double)v5;
    v8 = (double)v5 / *(double *)&this[6].left;
    *(double *)&this[4].left = v7;
    *(double *)&this[4].right = v8;
    *(double *)&this[5].left = v7 * 0.5;
    *(double *)&this[5].right = v8 * 0.5;
  }
}
