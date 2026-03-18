/*
 * XREFs of ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800349B0
 * Callers:
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x180034934 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180034F10 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180034A00 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180034B14 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::`scalar deleting destructor'(CRenderingTechnique *this)
{
  unsigned int v2; // edx
  CRenderingTechniqueFragment *v3; // rcx

  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>((char *)this + 16);
  v3 = (CRenderingTechniqueFragment *)*((_QWORD *)this + 1);
  if ( v3 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v3, v2);
  operator delete(this, 0x118uLL);
  return this;
}
