/*
 * XREFs of ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801CD040
 * Callers:
 *     <none>
 * Callees:
 *     _o_fmod_0 @ 0x1800EC604 (_o_fmod_0.c)
 *     _o_tan_0 @ 0x1800EC64C (_o_tan_0.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1801E25E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 */

void __fastcall CSkewTransform::GetRealization(
        CSkewTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v5; // xmm0_8
  float v6; // xmm8_4
  __int64 v7; // rcx
  double v8; // xmm0_8
  double v9; // xmm0_8
  double v10; // xmm5_8
  double v11; // xmm4_8
  float v12; // xmm1_4
  CMILMatrix *v13; // rcx
  float v14; // xmm4_4
  float v15; // xmm5_4

  v5 = o_fmod_0((__int64)this);
  v6 = o_tan_0(v5 * 0.01745329238474369);
  v8 = o_fmod_0(v7);
  v9 = o_tan_0(v8 * 0.01745329238474369);
  v10 = *((double *)this + 21);
  v11 = *((double *)this + 22);
  *(_DWORD *)a3 = 1065353216;
  v12 = v9;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((float *)a3 + 1) = v12;
  *((float *)a3 + 4) = v6;
  CMILMatrix::PrependTranslate(
    a3,
    COERCE_FLOAT(COERCE_UNSIGNED_INT(v10) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT(v11) ^ _xmm));
  CMILMatrix::Translate(v13, v15, v14);
}
