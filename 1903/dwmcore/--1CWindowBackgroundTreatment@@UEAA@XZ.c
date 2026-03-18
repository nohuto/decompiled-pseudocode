/*
 * XREFs of ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x18003084C
 * Callers:
 *     ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800307B0 (--_ECWindowBackgroundTreatment@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800307EC (-InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x180030DA8 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?clear@?$list@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x180031028 (-clear@-$list@U-$pair@QEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@s.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9E60 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::~CWindowBackgroundTreatment(CWindowBackgroundTreatment *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'};
  CPtrArrayBase::Remove((CPtrArrayBase *)(*((_QWORD *)this + 8) + 24LL), (unsigned __int64)this);
  CWindowBackgroundTreatment::ClearRenderTargetMaps(this);
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(this);
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 + 96) + 32LL))(v2 + 96, (char *)this + 56);
  v3 = *((_QWORD *)this + 48);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 50) - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 17);
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 14) - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  std::list<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>::clear((char *)this + 80);
  std::_Deallocate<16,0>(*((_QWORD *)this + 10), 32LL);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  CResource::~CResource(this);
}
