/*
 * XREFs of ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x18020DD70
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x1800B4F98 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 */

__int64 __fastcall CRedirectedVisualContent::Initialize(struct CResource **this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  signed int VisualTree; // eax
  __int64 v7; // rcx

  v2 = CResource::RegisterNotifier((CResource *)this, this[7]);
  v5 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x20u, 0LL);
  }
  else
  {
    VisualTree = CVisual::GetVisualTree((struct CComposition **)this[7], this + 8, v4, 1);
    v5 = VisualTree;
    if ( VisualTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, VisualTree, 0x21u, 0LL);
  }
  return v5;
}
