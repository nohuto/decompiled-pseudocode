/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x18021CAA4
 * Callers:
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180219F60 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x18021D838 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3, float a4)
{
  float v4; // xmm5_4
  char v5; // al
  float v6; // xmm0_4
  float v7; // xmm4_4
  float v9; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm3_4
  float v21; // xmm8_4
  float v22; // xmm3_4
  float v23; // xmm2_4

  v4 = a3 * *((float *)this + 4);
  v5 = *((_BYTE *)this + 64) & 0xFC;
  v6 = a2 * *(float *)this;
  *((_BYTE *)this + 64) = v5;
  v7 = a4 * *((float *)this + 8);
  v9 = a2 * *((float *)this + 1);
  v12 = a4 * *((float *)this + 9);
  v13 = a2 * *((float *)this + 2);
  v14 = (float)((float)(v4 + v6) + v7) + *((float *)this + 12);
  v15 = a3 * *((float *)this + 6);
  v16 = (float)(v9 + (float)(a3 * *((float *)this + 5))) + v12;
  v17 = a4;
  v18 = a4 * *((float *)this + 11);
  v19 = (float)(a2 * *((float *)this + 3)) + (float)(a3 * *((float *)this + 7));
  *((float *)this + 12) = v14;
  v20 = (float)(v13 + v15) + (float)(v17 * *((float *)this + 10));
  *((float *)this + 13) = v16 + *((float *)this + 13);
  v21 = (float)(v19 + v18) + *((float *)this + 15);
  v22 = v20 + *((float *)this + 14);
  *((float *)this + 15) = v21;
  *((float *)this + 14) = v22;
  v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21 - 1.0)) & _xmm);
  if ( v23 >= 0.000081380211 )
  {
    *((_BYTE *)this + 65) |= 0x3Fu;
    *((_BYTE *)this + 64) = v5 | 0xF0;
  }
  *((_BYTE *)this + 65) &= 0x3Fu;
}
