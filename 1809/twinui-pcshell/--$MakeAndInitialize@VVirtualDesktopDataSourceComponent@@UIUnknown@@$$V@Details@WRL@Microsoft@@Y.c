/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802D4210
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualDesktopDataSourceComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802D4540 (-CreateInstance@-$SimpleClassFactory@VVirtualDesktopDataSourceComponent@@$0A@@WRL@Microsoft@@UEA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800392D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E6028 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ??0VirtualDesktopDataSourceComponent@@QEAA@XZ @ 0x1802D43EC (--0VirtualDesktopDataSourceComponent@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802D4650 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1802D4650.c)
 *     ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x1802D46AC (-RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopDataSourceComponent,IUnknown,>(
        VirtualDesktopDataSourceComponent **a1)
{
  VirtualDesktopDataSourceComponent *v2; // rax
  int CanCastTo; // ebx
  VirtualDesktopDataSourceComponent *v4; // rdi
  _DWORD *v5; // rdx
  const struct _GUID *v6; // rdx
  void **v7; // r8
  int v8; // r10d

  *a1 = 0LL;
  v2 = (VirtualDesktopDataSourceComponent *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = VirtualDesktopDataSourceComponent::VirtualDesktopDataSourceComponent(v2);
    CanCastTo = VirtualDesktopDataSourceComponent::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(VirtualDesktopDataSourceComponent *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                      (__int64)v4,
                      v5,
                      a1);
        if ( CanCastTo == -2147467262 )
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                        (VirtualDesktopDataSourceComponent *)((char *)v4 + 104),
                        v6,
                        v7);
          if ( CanCastTo == v8 )
            CanCastTo = v8;
        }
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(VirtualDesktopDataSourceComponent *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
