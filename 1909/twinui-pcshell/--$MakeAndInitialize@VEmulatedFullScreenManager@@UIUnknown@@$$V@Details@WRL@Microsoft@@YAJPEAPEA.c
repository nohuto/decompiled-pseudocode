/*
 * XREFs of ??$MakeAndInitialize@VEmulatedFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180422ED0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VEmulatedFullScreenManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180423270 (-CreateInstance@-$SimpleClassFactory@VEmulatedFullScreenManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180074DA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180074DA0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0EmulatedFullScreenManager@@QEAA@XZ @ 0x18042306C (--0EmulatedFullScreenManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIPrivilegedOperationsConsumer@@UIEmulatedFullScreenManager@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804231A8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1804231A8.c)
 *     ?RuntimeClassInitialize@EmulatedFullScreenManager@@QEAAJXZ @ 0x180423608 (-RuntimeClassInitialize@EmulatedFullScreenManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<EmulatedFullScreenManager,IUnknown,>(
        EmulatedFullScreenManager **a1)
{
  EmulatedFullScreenManager *v2; // rax
  int CanCastTo; // edi
  EmulatedFullScreenManager *v4; // rbx
  volatile int *v5; // rdx
  __int64 v6; // rdx

  *a1 = 0LL;
  v2 = (EmulatedFullScreenManager *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = EmulatedFullScreenManager::EmulatedFullScreenManager(v2);
    CanCastTo = EmulatedFullScreenManager::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(EmulatedFullScreenManager *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IPrivilegedOperationsConsumer,IEmulatedFullScreenManager,Microsoft::WRL::FtmBase>::CanCastTo(
                      v4,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(EmulatedFullScreenManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>::Release(
        (__int64)v4,
        v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
