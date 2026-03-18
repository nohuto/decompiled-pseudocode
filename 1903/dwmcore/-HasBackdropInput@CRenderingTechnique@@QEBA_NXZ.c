/*
 * XREFs of ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180035630
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18003504C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800357C0 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180037630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180037828 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x180037C58 (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C42E8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

bool __fastcall CRenderingTechnique::HasBackdropInput(CRenderingTechnique *this)
{
  __int64 v1; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // r8
  bool v5; // bl
  unsigned __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  void *v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]
  unsigned __int64 v12; // [rsp+60h] [rbp+10h] BYREF
  void *v13; // [rsp+68h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 1);
  v11 = 0LL;
  v9 = 0;
  v8 = v1;
  *(_OWORD *)v10 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    v10,
    0LL,
    &v8);
  CFragmentIterator::FindFirst((CFragmentIterator *)v10);
  while ( 1 )
  {
    v3 = v10[1];
    v4 = v10[0];
    if ( !(((char *)v10[1] - (char *)v10[0]) >> 4) )
      break;
    if ( CRenderingTechniqueFragment::HasBackdropInput(
           *((CRenderingTechniqueFragment **)v10[1] - 2),
           *(const struct CBrushRenderingGraph **)this) )
    {
      v3 = v10[1];
      v4 = v10[0];
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)v10);
  }
  v5 = (v3 - v4) >> 4 != 0;
  if ( v4 )
  {
    v13 = v4;
    v6 = (v11 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL;
    v12 = v6;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v13, &v12);
      v6 = v12;
      v4 = v13;
    }
    operator delete(v4, v6);
  }
  return v5;
}
