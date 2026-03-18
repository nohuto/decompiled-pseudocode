/*
 * XREFs of ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_UPDATE@@1@Z @ 0x18025D398
 * Callers:
 *     ?HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@PEAUINTERACTION_VELOCITY@@1121@Z @ 0x18025D280 (-HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@P.c)
 * Callees:
 *     TransformPoint @ 0x180231F18 (TransformPoint.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::TransformCoordinateSpace(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        struct INTERACTION_UPDATE *a3,
        struct INTERACTION_UPDATE *a4)
{
  LONG left; // esi
  LONG right; // ebx
  LONG v7; // edi
  LONG v8; // ecx
  float v9; // xmm2_4
  unsigned int v10; // r11d
  _DWORD *v11; // rdx
  _DWORD *v12; // r10
  __int64 v13; // r8
  __int64 v14; // r9

  left = a1->left;
  right = a1->right;
  if ( a1->left == right )
    return (unsigned int)-2147024809;
  if ( a1->top == a1->bottom )
    return (unsigned int)-2147024809;
  v7 = a2->left;
  v8 = a2->right;
  if ( a2->left == v8 || a2->top == a2->bottom )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    if ( a3 != a4 )
    {
      *(_OWORD *)a4 = *(_OWORD *)a3;
      *((_OWORD *)a4 + 1) = *((_OWORD *)a3 + 1);
      v8 = a2->right;
      v7 = a2->left;
      right = a1->right;
      left = a1->left;
    }
    v9 = *((float *)a3 + 1);
    *(float *)a4 = (float)((float)(v8 - v7) * *(float *)a3) / (float)(right - left);
    *((float *)a4 + 1) = (float)((float)(a2->bottom - a2->top) * v9) / (float)(a1->bottom - a1->top);
    TransformPoint(&a1->left, &a2->left, *((float *)a3 + 4), *((float *)a3 + 5), (float *)a4 + 4, (float *)a4 + 5);
    *(float *)(v14 + 28) = (float)((float)((float)((float)(v11[3] - v11[1]) * *(float *)(v13 + 28))
                                         / (float)(v12[3] - v12[1]))
                                 + (float)((float)((float)(v11[2] - *v11) * *(float *)(v13 + 28))
                                         / (float)(v12[2] - *v12)))
                         * 0.5;
  }
  return v10;
}
