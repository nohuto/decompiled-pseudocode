/*
 * XREFs of ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x1801D9D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRedirectedVisualContent::Initialize(CRedirectedVisualContent *this, __int64 a2, __int64 a3)
{
  int VisualTree; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  VisualTree = CVisual::GetVisualTree(*((struct CComposition ***)this + 7), (struct CVisualTree **)this + 8, a3, 1);
  v5 = VisualTree;
  if ( VisualTree < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, VisualTree, 0x22u);
  return v5;
}
