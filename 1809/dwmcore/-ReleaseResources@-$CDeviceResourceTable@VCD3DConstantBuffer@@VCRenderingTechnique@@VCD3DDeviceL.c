/*
 * XREFs of ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800E2D3C
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5400 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D4D60 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDe.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800E1CA4 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResources(
        struct IDeviceResourceNotify *a1)
{
  (***((void (__fastcall ****)(_QWORD))a1 + 1))(*((_QWORD *)a1 + 1));
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
}
