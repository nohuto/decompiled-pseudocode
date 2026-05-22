/*
 * XREFs of ?ApplyInverseTransformToPoint@@YAJAEAUtagINPUT_TRANSFORM@@UtagPOINT@@PEAU2@@Z @ 0x18008EF94
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18008FE40 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplyInverseTransformToPoint(struct tagINPUT_TRANSFORM *a1, struct tagPOINT a2, struct tagPOINT *a3)
{
  float v3; // xmm6_4
  float v4; // xmm0_4
  float v5; // xmm5_4
  float v6; // xmm4_4
  float v8; // xmm7_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  struct tagPOINT v12; // [rsp+50h] [rbp+8h]

  v3 = (float)(*((float *)a1 + 3) * (float)a2.x) - *(float *)a1;
  v4 = (float)((float)a2.x * *((float *)a1 + 7)) - *((float *)a1 + 4);
  v5 = (float)(*((float *)a1 + 7) * (float)a2.y) - *((float *)a1 + 5);
  v6 = (float)(*((float *)a1 + 3) * (float)a2.y) - *((float *)a1 + 1);
  if ( (float)(v3 * v5) == (float)(v4 * v6) )
    return 2147549183LL;
  v8 = (float)(v3 * v5) - (float)(v4 * v6);
  v9 = *((float *)a1 + 15);
  v10 = (float)(v9 * (float)a2.x) - *((float *)a1 + 12);
  v11 = (float)(v9 * (float)a2.y) - *((float *)a1 + 13);
  v12.x = (int)(float)((float)((float)(v11 * v4) - (float)(v10 * v5)) / v8);
  v12.y = (int)(float)((float)((float)(v10 * v6) - (float)(v11 * v3)) / v8);
  *a3 = v12;
  return 0LL;
}
