/*
 * XREFs of ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800342E8
 * Callers:
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x180033ACC (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034270 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800C70D8 (-InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801BC440 (-NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?clear@?$list@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x180034568 (-clear@-$list@U-$pair@QEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@s.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::ClearRenderTargetMaps(CWindowBackgroundTreatment *this)
{
  __int64 ***v1; // rsi
  __int64 **i; // rbx
  __int64 *v4; // rcx

  v1 = (__int64 ***)*((_QWORD *)this + 10);
  for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
  {
    v4 = i[3];
    if ( v4 )
      (*(void (__fastcall **)(__int64 *, char *))(v4[12] + 32))(v4 + 12, (char *)this + 56);
    (*(void (__fastcall **)(__int64 *, CWindowBackgroundTreatment *))(*i[2] + 200))(i[2], this);
  }
  std::list<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>::clear((char *)this + 80);
  std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::_Init(
    (char *)this + 72,
    8LL);
}
