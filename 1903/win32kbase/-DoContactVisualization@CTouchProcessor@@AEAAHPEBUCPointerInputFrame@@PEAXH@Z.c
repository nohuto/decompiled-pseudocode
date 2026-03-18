/*
 * XREFs of ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C0165F5C
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0165FC8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     HMValidateHandle @ 0x1C002E8E4 (HMValidateHandle.c)
 *     ApiSetEditionContactVisualization @ 0x1C019B4FC (ApiSetEditionContactVisualization.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualization(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        int a4)
{
  int v4; // ebx
  __int64 v7; // rax

  v4 = 0;
  if ( a4 )
  {
    v7 = HMValidateHandle(a3, 19);
    if ( v7 )
      v4 = *(_DWORD *)(*(_QWORD *)(v7 + 480) + 760LL);
    else
      v4 = 1;
  }
  return ApiSetEditionContactVisualization(*((_DWORD *)a2 + 12), *((_QWORD *)a2 + 16), a3, a4, v4);
}
