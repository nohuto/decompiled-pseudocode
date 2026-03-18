/*
 * XREFs of ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800C10AC
 * Callers:
 *     EncodeTBNFrameToQuaternion @ 0x180009850 (EncodeTBNFrameToQuaternion.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A5C94 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C0F20 (-SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x1802017DC (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022FAAC (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionNormalize(struct D2DQuaternion *a1, const struct D2DQuaternion *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm2_4
  float v9; // xmm6_4
  __int128 v10; // [rsp+20h] [rbp-68h]

  v3 = *(float *)a2;
  v4 = *((float *)a2 + 1);
  v5 = *((float *)a2 + 2);
  v6 = *((float *)a2 + 3);
  v7 = (float)((float)((float)(v3 * v3) + (float)(v4 * v4)) + (float)(v5 * v5)) + (float)(v6 * v6);
  if ( (float)(v7 - 1.0) < -0.00000011920929 || (float)(v7 - 1.0) > 0.00000011920929 )
  {
    if ( v7 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_QWORD *)a1 + 1) = 0LL;
    }
    else
    {
      v9 = 1.0 / sqrtf_0(v7);
      *(float *)&v10 = v3 * v9;
      *((float *)&v10 + 1) = v4 * v9;
      *((float *)&v10 + 2) = v5 * v9;
      *((float *)&v10 + 3) = v6 * v9;
      *(_OWORD *)a1 = v10;
    }
  }
  else if ( a1 != a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  return a1;
}
