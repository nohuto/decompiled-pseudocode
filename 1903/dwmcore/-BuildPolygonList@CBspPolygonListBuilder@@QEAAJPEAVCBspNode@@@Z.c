/*
 * XREFs of ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x180256114
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ @ 0x1802536E0 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x180255FC4 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 */

__int64 __fastcall CBspPolygonListBuilder::BuildPolygonList(
        CBspPolygonListBuilder *this,
        struct CBspNode *a2,
        __int64 a3)
{
  signed int v4; // eax
  __int64 v5; // rcx
  signed int v6; // edi
  __int64 v7; // rcx

  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 1) = a2;
  v4 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>((__int64)this, (__int64)a2, a3, (__int64)this);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x31u, 0LL);
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Optimize((__int64)this + 32);
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x17u, 0LL);
  return (unsigned int)v6;
}
