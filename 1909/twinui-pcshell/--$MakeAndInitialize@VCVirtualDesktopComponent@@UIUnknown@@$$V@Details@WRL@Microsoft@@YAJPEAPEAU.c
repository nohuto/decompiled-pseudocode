/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180402830
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCVirtualDesktopComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180402AF0 (-CreateInstance@-$SimpleClassFactory@VCVirtualDesktopComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180354AEC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180354AEC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180354CB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180354CB0.c)
 *     ??0CVirtualDesktopComponent@@QEAA@XZ @ 0x18040291C (--0CVirtualDesktopComponent@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180402B70 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopComponent,IUnknown,>(void **a1)
{
  CVirtualDesktopComponent *v2; // rax
  int CanCastTo; // edi
  CVirtualDesktopComponent *v4; // rbx
  volatile int *v5; // rdx
  __int64 v6; // rdx

  *a1 = 0LL;
  v2 = (CVirtualDesktopComponent *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = CVirtualDesktopComponent::CVirtualDesktopComponent(v2);
    CanCastTo = CVirtualDesktopComponent::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(CVirtualDesktopComponent *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,Microsoft::WRL::FtmBase>::CanCastTo(
                      (char *)v4,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(
        (__int64)v4,
        v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
