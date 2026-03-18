/*
 * XREFs of std::vector_VertexXYW_ColorDW_UV2_std::allocator_VertexXYW_ColorDW_UV2___::_Resize__lambda_505eeb90d9a4969c15c30ab55ac8709d___ @ 0x1801C4230
 * Callers:
 *     ?OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z @ 0x1801C6648 (-OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Change_array@?$vector@UVertexXYW_ColorDW_UV2@@V?$allocator@UVertexXYW_ColorDW_UV2@@@std@@@std@@AEAAXQEAUVertexXYW_ColorDW_UV2@@_K1@Z @ 0x1801C7CB4 (-_Change_array@-$vector@UVertexXYW_ColorDW_UV2@@V-$allocator@UVertexXYW_ColorDW_UV2@@@std@@@std@.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void **__fastcall std::vector_VertexXYW_ColorDW_UV2_std::allocator_VertexXYW_ColorDW_UV2___::_Resize__lambda_505eeb90d9a4969c15c30ab55ac8709d___(
        __int64 a1,
        unsigned __int64 a2)
{
  void **result; // rax
  __int64 v3; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  SIZE_T v10; // rcx
  char *v11; // r14
  unsigned __int64 v12; // r8
  char *v13; // rdi
  unsigned __int64 v14; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 8);
  v6 = (v3 - *(_QWORD *)a1) >> 5;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5;
  if ( a2 <= v7 )
  {
    if ( a2 <= v6 )
    {
      if ( a2 != v6 )
        *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 32 * a2;
    }
    else
    {
      v14 = a2 - v6;
      if ( v14 )
      {
        result = (void **)memset_0(*(void **)(a1 + 8), 0, 32 * v14);
        v3 += 32 * v14;
      }
      *(_QWORD *)(a1 + 8) = v3;
    }
  }
  else
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v8 = v7 >> 1;
    if ( v7 <= 0x7FFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < a2 )
        v9 = a2;
    }
    else
    {
      v9 = a2;
    }
    v10 = 32 * v9;
    if ( v9 > 0x7FFFFFFFFFFFFFFLL )
      v10 = -1LL;
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
    v12 = a2 - v6;
    v13 = &v11[32 * v6];
    if ( v12 )
      memset_0(v13, 0, 32 * v12);
    memmove_0(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return (void **)std::vector<VertexXYW_ColorDW_UV2>::_Change_array(a1, v11, a2, v9);
  }
  return result;
}
