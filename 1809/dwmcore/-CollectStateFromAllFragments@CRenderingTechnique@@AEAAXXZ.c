/*
 * XREFs of ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800C37F8
 * Callers:
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x1800E079C (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800C414C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x1800C51F8 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800C76DC (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800DFFC0 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromAllFragments(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h]
  void *v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  unsigned __int64 v14; // [rsp+60h] [rbp+10h] BYREF
  void *v15; // [rsp+68h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 2);
  v13 = 0LL;
  v11 = 0;
  v10 = v4;
  *(_OWORD *)v12 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    v12,
    0LL,
    &v10,
    a4);
  CFragmentIterator::FindFirst((CFragmentIterator *)v12);
  while ( 1 )
  {
    v8 = v12[0];
    if ( !(((char *)v12[1] - (char *)v12[0]) >> 4) )
      break;
    CRenderingTechnique::CollectStateFromFragment(this, *((struct CRenderingTechniqueFragment **)v12[1] - 2));
    CFragmentIterator::MoveNext((CFragmentIterator *)v12);
  }
  if ( v12[0] )
  {
    v15 = v12[0];
    v9 = (v13 - (unsigned __int64)v12[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    v14 = v9;
    if ( v9 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v15, &v14, v6, v7);
      v9 = v14;
      v8 = v15;
    }
    operator delete(v8, v9);
  }
}
