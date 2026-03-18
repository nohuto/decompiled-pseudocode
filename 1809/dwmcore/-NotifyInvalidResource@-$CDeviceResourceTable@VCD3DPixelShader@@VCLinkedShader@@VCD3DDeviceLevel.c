/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800EAD10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800EAD3C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLe.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::NotifyInvalidResource(
        __int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 8LL));
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef();
  return CMILRefCountBase::Release(*(CMILRefCountBase **)(a1 + 8));
}
