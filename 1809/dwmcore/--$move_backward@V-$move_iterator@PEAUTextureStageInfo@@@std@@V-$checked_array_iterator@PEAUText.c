/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x180181820
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800B9100 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // xmm1_8

  v4 = *a4 + 56LL * a4[2];
  while ( a2 != a3 )
  {
    v4 -= 56LL;
    a3 -= 56LL;
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a3 + 32);
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(a3 + 48);
  }
  result = a1;
  a4[2] = (v4 - *a4) / 56;
  v6 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
