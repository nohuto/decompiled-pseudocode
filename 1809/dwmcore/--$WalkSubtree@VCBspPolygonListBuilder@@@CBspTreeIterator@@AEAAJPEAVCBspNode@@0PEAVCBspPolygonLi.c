/*
 * XREFs of ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x180225E04
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x180225E04 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x180225F3C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GotoParent@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z @ 0x1802233BC (-GotoParent@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x180225E04 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x180225FC8 (-GotoPostChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x18022606C (-GotoPreChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x180230FF4 (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        BOOL a5)
{
  BOOL v6; // ebp
  int v7; // r15d
  BOOL v8; // esi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF

  v23 = a3;
  v6 = a5;
  v7 = a2;
  v8 = a5;
  if ( !*(_BYTE *)(a2 + 56) )
    v8 = !a5;
  v23 = 0LL;
  v22 = 0LL;
  *(_DWORD *)(a1 + 28) = v8;
  v10 = CGraphWalker<CBspNode>::GotoPreChild(a1, &v23);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x4Au);
    return v12;
  }
  if ( v23 )
  {
    v13 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v23, v7, a4, v6);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x4Eu);
      return v12;
    }
    CGraphWalker<CVectorShape>::GotoParent(a1, &v23);
    *(_DWORD *)(a1 + 28) = v8;
  }
  v15 = CBspNode::BuildPolygonList(*(CBspNode **)(a4 + 8), *(struct CVisual **)(a4 + 64));
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x5Du);
  }
  else
  {
    v17 = CGraphWalker<CBspNode>::GotoPostChild(a1, &v22);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x5Fu);
    }
    else if ( v22 )
    {
      v19 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v22, v7, a4, v6);
      v12 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x63u);
      else
        CGraphWalker<CVectorShape>::GotoParent(a1, &v23);
    }
  }
  return v12;
}
