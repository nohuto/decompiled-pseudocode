/*
 * XREFs of ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800E55FC
 * Callers:
 *     ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800E5770 (--_ECWindowBackgroundTreatment@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18005B468 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800E4794 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?clear@?$list@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x1800E4A10 (-clear@-$list@U-$pair@QEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@s.c)
 *     ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800E570C (-InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::~CWindowBackgroundTreatment(CWindowBackgroundTreatment *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'};
  CPtrArrayBase::Remove((CPtrArrayBase *)(*((_QWORD *)this + 8) + 24LL), (__int64)this);
  CWindowBackgroundTreatment::ClearRenderTargetMaps(this);
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(this);
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 + 96) + 32LL))(v2 + 96, (char *)this + 56);
  v3 = (void *)*((_QWORD *)this + 48);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 50) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 17);
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 14) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  std::list<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>::clear((__int64)this + 80);
  std::_Deallocate<16,0>(*((void **)this + 10), 0x20uLL);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  CResource::~CResource(this);
}
