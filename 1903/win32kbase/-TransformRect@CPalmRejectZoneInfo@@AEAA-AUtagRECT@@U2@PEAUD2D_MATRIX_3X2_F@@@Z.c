/*
 * XREFs of ?TransformRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C01837C0
 * Callers:
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1C0182854 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::TransformRect(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float v4; // xmm4_4
  float left; // xmm1_4
  float v6; // xmm6_4
  float top; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  int v11; // r10d
  float right; // xmm1_4
  struct tagRECT *result; // rax
  struct tagRECT v14; // [rsp+0h] [rbp-58h]

  v4 = *((float *)a4 + 1);
  left = (float)a3->left;
  v6 = *((float *)a4 + 3);
  top = (float)a3->top;
  v8 = *((float *)a4 + 5);
  v9 = *((float *)a4 + 2);
  v10 = *((float *)a4 + 4);
  v14.top = (int)(float)((float)((float)(left * v4) + (float)(top * v6)) + v8);
  v11 = (int)(float)((float)((float)(left * *(float *)a4) + (float)(top * v9)) + v10);
  right = (float)a3->right;
  v14.left = v11;
  v14.bottom = (int)(float)((float)((float)(right * v4) + (float)((float)a3->bottom * v6)) + v8);
  result = retstr;
  v14.right = (int)(float)((float)((float)(right * *(float *)a4) + (float)((float)a3->bottom * v9)) + v10);
  *retstr = v14;
  return result;
}
