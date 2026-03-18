/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800D7360
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800D738C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLe.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::NotifyInvalidResource(
        __int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 8LL));
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef();
  return CDirtyRegion::Release(*(CDirtyRegion **)(a1 + 8));
}
