/*
 * XREFs of ?UpdateZoomPoints@ManipulationInjector@@AEAAXAEAUtagPOINT@@0M@Z @ 0x1800E9478
 * Callers:
 *     ?UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z @ 0x1800E9384 (-UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::UpdateZoomPoints(
        ManipulationInjector *this,
        struct tagPOINT *a2,
        struct tagPOINT *a3,
        float a4)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  int v6; // eax
  int v7; // eax

  v4 = (float)(a3->x - a2->x) * (float)(a4 - 1.0);
  if ( v4 >= 0.0 )
    v5 = v4 + 0.5;
  else
    v5 = v4 - 0.5;
  v6 = (int)v5;
  if ( !(int)v5 )
  {
    v6 = -1;
    if ( v4 >= 0.0 )
      v6 = 1;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( v6 >= 0 )
      ++v6;
    else
      --v6;
  }
  v7 = v6 / 2;
  a2->x -= v7;
  a3->x += v7;
}
