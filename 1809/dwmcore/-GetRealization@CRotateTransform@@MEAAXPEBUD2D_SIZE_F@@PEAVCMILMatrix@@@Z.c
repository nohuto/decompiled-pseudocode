/*
 * XREFs of ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801CCB30
 * Callers:
 *     <none>
 * Callees:
 *     _o_fmod_0 @ 0x1800EC604 (_o_fmod_0.c)
 */

void __fastcall CRotateTransform::GetRealization(
        CRotateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm1_4

  v4 = *((double *)this + 20);
  v5 = *((double *)this + 21);
  v6 = o_fmod_0((__int64)this) * 0.01745329238474369;
  CMILMatrix::Set2DRotation(a3, v6, v4, v5);
}
