/*
 * XREFs of ?InvalidRedirectedTransformParent@CVisual@@QEAA_NPEBVCVisualTree@@@Z @ 0x1800EF7D0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18002D790 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180032BF0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003C7C0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

char __fastcall CVisual::InvalidRedirectedTransformParent(CVisual *this, const struct CVisualTree *a2)
{
  char v2; // bl
  __int64 v3; // rdi
  struct _LIST_ENTRY *TreeData; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( !*((_BYTE *)a2 + 32) )
    {
      v3 = *((_QWORD *)this + 2);
      if ( v3 )
      {
        TreeData = CVisual::FindTreeData(this, a2);
        if ( TreeData )
        {
          if ( ((__int64)TreeData[1].Flink & 4) != 0 )
            return TreeData[13].Blink == *(struct _LIST_ENTRY **)(v3 + 368);
        }
      }
    }
  }
  return v2;
}
