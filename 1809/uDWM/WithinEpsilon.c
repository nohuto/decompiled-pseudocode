/*
 * XREFs of WithinEpsilon @ 0x18000785C
 * Callers:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800077CC (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800B2428 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WithinEpsilon(float a1, float a2)
{
  float v2; // xmm0_4

  v2 = a1 - a2;
  return v2 >= -0.00000011920929 && v2 <= 0.00000011920929;
}
