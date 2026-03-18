/*
 * XREFs of ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180035584
 * Callers:
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x180034FE4 (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 * Callees:
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800357C0 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180037630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180037828 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x180037A28 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C42E8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromAllFragments(CRenderingTechnique *this)
{
  __int64 v1; // rax
  void *v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  void *v7[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  unsigned __int64 v9; // [rsp+60h] [rbp+10h] BYREF
  void *v10; // [rsp+68h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 1);
  v8 = 0LL;
  v6 = 0;
  v5 = v1;
  *(_OWORD *)v7 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    v7,
    0LL,
    &v5);
  CFragmentIterator::FindFirst((CFragmentIterator *)v7);
  while ( 1 )
  {
    v3 = v7[0];
    if ( !(((char *)v7[1] - (char *)v7[0]) >> 4) )
      break;
    CRenderingTechnique::CollectStateFromFragment(this, *((struct CRenderingTechniqueFragment **)v7[1] - 2));
    CFragmentIterator::MoveNext((CFragmentIterator *)v7);
  }
  if ( v7[0] )
  {
    v10 = v7[0];
    v4 = (v8 - (unsigned __int64)v7[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = v4;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v10, &v9);
      v4 = v9;
      v3 = v10;
    }
    operator delete(v3, v4);
  }
}
