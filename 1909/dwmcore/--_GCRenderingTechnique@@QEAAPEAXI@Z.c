/*
 * XREFs of ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180042A5C
 * Callers:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180042F0C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x180046E8C (--1CBrushRenderingGraph@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800423F0 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180042B10 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@X.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::`scalar deleting destructor'(CRenderingTechnique *this)
{
  unsigned int v2; // edx
  CRenderingTechniqueFragment *v3; // rcx

  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>((char *)this + 16);
  v3 = (CRenderingTechniqueFragment *)*((_QWORD *)this + 1);
  if ( v3 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v3, v2);
  operator delete(this);
  return this;
}
