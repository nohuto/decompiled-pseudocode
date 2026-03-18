/*
 * XREFs of ?clear_region@?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EECF4
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800B9100 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x18005A6E8 (--$move@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEAUTextureStageI.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall detail::vector_facade<TextureStageInfo,detail::buffer_impl<TextureStageInfo,2,1,detail::liberal_expansion_policy>>::clear_region(
        const char **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  const char **v3; // r11
  const char *v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r10
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]

  v3 = a1;
  v4 = *a1;
  result = (unsigned __int64)((unsigned __int128)((v3[1] - v4) * (__int128)0x4924924924924925LL) >> 64) >> 63;
  v6 = (v3[1] - v4) / 56;
  if ( a3 > v6 )
    std::_Xoverflow_error(v4);
  v9 = 0LL;
  v7 = 56 * a3;
  *(_QWORD *)&v8 = v4;
  *((_QWORD *)&v8 + 1) = v6;
  if ( a3 != v6 )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = v8;
    result = std::move<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
               (__int64)&v8,
               (__int64)&v4[v7],
               (__int64)&v4[56 * v6],
               &v10);
  }
  v3[1] -= v7;
  return result;
}
