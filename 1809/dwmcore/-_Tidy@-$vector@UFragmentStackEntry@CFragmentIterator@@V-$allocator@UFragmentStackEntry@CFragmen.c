/*
 * XREFs of ?_Tidy@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@AEAAXXZ @ 0x1800651B8
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800C3298 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CFragmentIterator::FragmentStackEntry>::_Tidy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v5 = *(void **)a1;
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 16) - (_QWORD)v5;
    v9 = v5;
    v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = v7;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v9, &v8, a3, a4);
      v7 = v8;
      v5 = v9;
    }
    operator delete(v5, v7);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
