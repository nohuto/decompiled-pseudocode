/*
 * XREFs of ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x1802109B0
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180208C80 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 * Callees:
 *     ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x180210870 (-AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ.c)
 */

float __fastcall CPositionMotion::CalculateInContactValue(
        CPositionMotion *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  __int64 v7; // rcx
  float v8; // xmm0_4
  float v9; // xmm4_4
  float result; // xmm0_4

  *((float *)this + 7) = a5;
  *((float *)this + 16) = a2;
  *((float *)this + 42) = a7;
  *((float *)this + 9) = a3;
  *((float *)this + 40) = a6;
  CPositionMotion::AdvanceDeltaDueToScale(this);
  v8 = *(float *)(v7 + 180) + *(float *)(v7 + 184);
  *(_DWORD *)(v7 + 188) = *(_DWORD *)(v7 + 160);
  result = v8 + v9;
  *(float *)(v7 + 184) = result;
  return result;
}
