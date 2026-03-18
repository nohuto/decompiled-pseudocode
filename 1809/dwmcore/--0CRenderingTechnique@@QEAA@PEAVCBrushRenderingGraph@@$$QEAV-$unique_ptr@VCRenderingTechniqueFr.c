/*
 * XREFs of ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x1800E079C
 * Callers:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800E06B4 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800C37F8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::CRenderingTechnique(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CRenderingTechnique::`vftable';
  v5 = *a3;
  *a3 = 0LL;
  *((_QWORD *)this + 2) = v5;
  *((_QWORD *)this + 3) = &CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::`vftable';
  *((_QWORD *)this + 4) = this;
  *((_QWORD *)this + 5) = (char *)this + 72;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_DWORD *)this + 14) = 2;
  *(_QWORD *)((char *)this + 60) = 2LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 340) = 0LL;
  *((_BYTE *)this + 348) = 0;
  CRenderingTechnique::CollectStateFromAllFragments(this, a2, (__int64)a3, a4);
  return this;
}
