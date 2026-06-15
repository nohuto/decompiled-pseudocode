/*
 * XREFs of ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x180060368
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005FE80 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18004E754 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     pow @ 0x180064D1C (pow.c)
 */

void __fastcall CVolumeUnit::SetTaperOverallRange(CVolumeUnit *this, float a2, float a3)
{
  double v4; // xmm9_8
  double v5; // xmm0_8

  v4 = pow(10.0, a3 / 20.0);
  v5 = pow(10.0, a2 / 20.0);
  *((double *)this + 3) = CVolumeUnit::TaperFromScalar(this, v5, v4);
  *((double *)this + 4) = CVolumeUnit::TaperFromScalar(this, v4, v4);
}
