/*
 * XREFs of ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180032ACC
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800357F0 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAU.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802062A0 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDe.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180034A9C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResources(
        struct IDeviceResourceNotify *a1)
{
  (****((void (__fastcall *****)(_QWORD))a1 + 1))(**((_QWORD **)a1 + 1));
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)a1 + 1) + 8LL))(**((_QWORD **)a1 + 1));
}
