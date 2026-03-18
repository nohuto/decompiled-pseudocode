/*
 * XREFs of ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801BC440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x180033A6C (-InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800342E8 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  CWindowBackgroundTreatment *v2; // rbx
  __int64 v4; // rcx

  v2 = (CWindowBackgroundTreatment *)(this - 56);
  CWindowBackgroundTreatment::ClearRenderTargetMaps((CWindowBackgroundTreatment *)(this - 56));
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(v2);
  v4 = *(_QWORD *)(this + 80);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(v4 + 96) + 32LL))(
      v4 + 96,
      this & -(__int64)(v2 != 0LL));
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(this + 80));
  }
}
