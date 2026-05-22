/*
 * XREFs of ?fabs@@YAMM@Z @ 0x180079408
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E8918 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall fabs(float a1)
{
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
}
