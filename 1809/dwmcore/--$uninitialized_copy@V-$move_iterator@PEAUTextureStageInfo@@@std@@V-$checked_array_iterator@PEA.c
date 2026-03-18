/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1800BC290
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800B9100 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // [rsp+10h] [rbp-18h]

  v5 = a2 + 8;
  v10 = a4[2];
  v6 = (_DWORD *)(56 * v10 + *a4);
  v7 = 56 * v10 - a2 + *a4;
  while ( v5 - 8 != a3 )
  {
    *v6 = *(_DWORD *)(v5 - 8);
    v6 += 14;
    *(_DWORD *)(v5 + v7 - 4) = *(_DWORD *)(v5 - 4);
    *(_DWORD *)(v5 + v7) = *(_DWORD *)v5;
    *(_DWORD *)(v5 + v7 + 4) = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 + v7 + 8) = *(_DWORD *)(v5 + 8);
    *(_DWORD *)(v5 + v7 + 12) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + v7 + 16) = *(_DWORD *)(v5 + 16);
    *(_DWORD *)(v5 + v7 + 20) = *(_DWORD *)(v5 + 20);
    *(_DWORD *)(v5 + v7 + 24) = *(_DWORD *)(v5 + 24);
    *(_OWORD *)(v5 + v7 + 28) = *(_OWORD *)(v5 + 28);
    *(_BYTE *)(v5 + v7 + 44) = *(_BYTE *)(v5 + 44);
    *(_BYTE *)(v5 + v7 + 45) = *(_BYTE *)(v5 + 45);
    v5 += 56LL;
  }
  result = a1;
  a4[2] = ((__int64)v6 - *a4) / 56;
  v9 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
