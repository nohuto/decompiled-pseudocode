/*
 * XREFs of ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180037828
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180032950 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800352D0 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180035584 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180035630 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800356F8 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180037368 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180037630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C42E8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
        __int64 a1,
        char *a2,
        _OWORD *a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  char *v6; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v15; // r8
  _OWORD *v16; // rdx
  char *v17; // r14
  char *v18; // rcx
  char *v19; // rax
  void *v20; // rcx
  char *result; // rax
  __int128 v22; // xmm0
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  SIZE_T v25; // rcx
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int128 v31; // xmm0
  signed __int64 v32; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v34; // [rsp+50h] [rbp+8h] BYREF
  void *v35; // [rsp+58h] [rbp+10h] BYREF

  v4 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v5 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 16 * v11;
  v13 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  if ( v13 >= 0x1000 )
  {
    v25 = v13 + 39;
    if ( v13 + 39 < v13 )
      v25 = -1LL;
    v26 = operator new(v25);
    if ( !v26 )
    {
      _o__invalid_parameter_noinfo_noreturn(v28, v27, v29, v30);
      JUMPOUT(0x1801024A2LL);
    }
    v13 = ((unsigned __int64)v26 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(v13 - 8) = v26;
  }
  else if ( v13 )
  {
    ProcessHeap = GetProcessHeap();
    v13 = (SIZE_T)HeapAlloc(ProcessHeap, 0, v13);
    if ( !v13 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v15);
  }
  v16 = (_OWORD *)v13;
  v17 = (char *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  *(_OWORD *)v17 = *a3;
  v18 = *(char **)(a1 + 8);
  v19 = *(char **)a1;
  if ( v6 == v18 )
  {
    while ( v19 != v18 )
    {
      v22 = *(_OWORD *)v19;
      v19 += 16;
      *v16++ = v22;
    }
  }
  else
  {
    if ( v19 != v6 )
    {
      do
      {
        v31 = *(_OWORD *)v19;
        v19 += 16;
        *v16++ = v31;
      }
      while ( v19 != v6 );
      v18 = *(char **)(a1 + 8);
    }
    if ( v6 != v18 )
    {
      v32 = v17 - v6;
      do
      {
        *(_OWORD *)&v6[v32 + 16] = *(_OWORD *)v6;
        v6 += 16;
      }
      while ( v6 != v18 );
    }
  }
  v20 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v23 = *(_QWORD *)(a1 + 16) - (_QWORD)v20;
    v35 = *(void **)a1;
    v24 = v23 & 0xFFFFFFFFFFFFFFF0uLL;
    v34 = v24;
    if ( v24 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v35, &v34);
      v24 = v34;
      v20 = v35;
    }
    operator delete(v20, v24);
  }
  *(_QWORD *)a1 = v13;
  result = v17;
  *(_QWORD *)(a1 + 8) = v13 + 16 * v8;
  *(_QWORD *)(a1 + 16) = v12 + v13;
  return result;
}
