/*
 * XREFs of ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x180230FF4
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x180225E04 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801B5F58 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 *     std::_Sort_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x180230D90 (std--_Sort_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___.c)
 */

__int64 __fastcall CBspNode::BuildPolygonList(CBspNode *this, struct CVisual *a2)
{
  struct CPolygon **v2; // rbx
  unsigned int v3; // edi
  int v6; // eax
  __int64 v7; // rcx
  char v9; // [rsp+40h] [rbp+8h]

  v2 = (struct CPolygon **)*((_QWORD *)this + 4);
  v3 = 0;
  if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 5) - (_QWORD)v2) >> 3) > 1 )
  {
    std::_Sort_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(
      *((__int64 **)this + 4),
      *((char **)this + 5),
      (__int64)(*((_QWORD *)this + 5) - (_QWORD)v2) >> 3,
      v9);
    v2 = (struct CPolygon **)*((_QWORD *)this + 4);
  }
  while ( v2 != *((struct CPolygon ***)this + 5) )
  {
    v6 = CVisual::AddToBspPolygonList(a2, *v2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xD9u);
      return v3;
    }
    ++v2;
  }
  return v3;
}
