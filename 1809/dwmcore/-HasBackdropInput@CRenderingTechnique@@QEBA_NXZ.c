/*
 * XREFs of ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800C3BF8
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x1800E03BC (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18006C7D4 (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800C414C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x1800C51F8 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800C76DC (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

bool __fastcall CRenderingTechnique::HasBackdropInput(CRenderingTechnique *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // r9
  _BYTE *v7; // rcx
  _BYTE *v8; // r8
  bool v9; // bl
  unsigned __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h]
  void *v14[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  void *v16; // [rsp+60h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v13 = 0;
  v12 = v4;
  *(_OWORD *)v14 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    v14,
    0LL,
    &v12,
    a4);
  CFragmentIterator::FindFirst((CFragmentIterator *)v14);
  while ( 1 )
  {
    v7 = v14[1];
    v8 = v14[0];
    if ( !(((char *)v14[1] - (char *)v14[0]) >> 4) )
      break;
    if ( CRenderingTechniqueFragment::HasBackdropInput(
           *((CRenderingTechniqueFragment **)v14[1] - 2),
           *((const struct CBrushRenderingGraph **)this + 1)) )
    {
      v7 = v14[1];
      v8 = v14[0];
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)v14);
  }
  v9 = (v7 - v8) >> 4 != 0;
  if ( v8 )
  {
    v16 = v8;
    v10 = (v15 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL;
    v17 = v10;
    if ( v10 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v16, &v17, (__int64)v8, v6);
      v8 = v16;
      v10 = v17;
    }
    operator delete(v8, v10);
  }
  return v9;
}
