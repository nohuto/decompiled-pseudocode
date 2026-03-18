/*
 * XREFs of ?GotoParent@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z @ 0x180251E50
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1802513F0 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180251528 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x180254854 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphWalker<CVectorShape>::GotoParent(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  int v6; // edx
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rcx

  result = *(unsigned int *)(a1 + 4);
  v4 = 0LL;
  if ( (_DWORD)result )
  {
    v6 = *(_DWORD *)(a1 + 32);
    v7 = 0LL;
    v8 = 0;
    if ( v6 )
    {
      v9 = (unsigned int)(v6 - 1);
      *(_DWORD *)(a1 + 32) = v9;
      LODWORD(result) = *(_DWORD *)(a1 + 4);
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v9 + 8);
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v9);
    }
    v4 = *(_QWORD *)(a1 + 16);
    result = (unsigned int)(result - 1);
    *(_QWORD *)(a1 + 8) = v4;
    *(_DWORD *)(a1 + 4) = result;
    *(_QWORD *)(a1 + 16) = v7;
    *(_DWORD *)(a1 + 24) = v8;
  }
  *a2 = v4;
  return result;
}
