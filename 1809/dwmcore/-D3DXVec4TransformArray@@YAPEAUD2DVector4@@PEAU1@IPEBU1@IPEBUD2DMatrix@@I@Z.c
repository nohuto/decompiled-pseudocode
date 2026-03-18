/*
 * XREFs of ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18021AAE8
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801BE678 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801D3484 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4TransformArray(
        struct D2DVector4 *a1,
        __int64 a2,
        const struct D2DVector4 *a3,
        __int64 a4,
        const struct D2DMatrix *a5)
{
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm1_4
  struct D2DVector4 *result; // rax
  __int128 v9; // [rsp+0h] [rbp-38h]

  v5 = *((float *)a3 + 1);
  v6 = *((float *)a3 + 3);
  *(float *)&v9 = (float)((float)((float)(v5 * *((float *)a5 + 4)) + (float)(*(float *)a3 * *(float *)a5))
                        + (float)(*((float *)a3 + 2) * *((float *)a5 + 8)))
                + (float)(v6 * *((float *)a5 + 12));
  v7 = *((float *)a3 + 2);
  *((float *)&v9 + 1) = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 1)) + (float)(v5 * *((float *)a5 + 5)))
                              + (float)(v7 * *((float *)a5 + 9)))
                      + (float)(v6 * *((float *)a5 + 13));
  result = a1;
  *((float *)&v9 + 2) = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 2)) + (float)(v5 * *((float *)a5 + 6)))
                              + (float)(v7 * *((float *)a5 + 10)))
                      + (float)(v6 * *((float *)a5 + 14));
  *((float *)&v9 + 3) = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 3)) + (float)(v5 * *((float *)a5 + 7)))
                              + (float)(v7 * *((float *)a5 + 11)))
                      + (float)(v6 * *((float *)a5 + 15));
  *(_OWORD *)a1 = v9;
  return result;
}
