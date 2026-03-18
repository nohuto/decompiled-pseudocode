/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180034B14
 * Callers:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800349B0 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??_E?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x180205FA0 (--_E-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAAP.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180034A9C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>(
        struct IDeviceResourceNotify *a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::`vftable';
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(a1);
  return DynArrayImpl<0>::~DynArrayImpl<0>((char *)a1 + 16);
}
