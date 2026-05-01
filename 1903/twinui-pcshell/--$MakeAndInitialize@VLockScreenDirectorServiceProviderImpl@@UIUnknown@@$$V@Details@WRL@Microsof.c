/*
 * XREFs of ??$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801D75B0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801D7CB0 (-CreateInstance@-$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0LockScreenDirectorServiceProviderImpl@@QEAA@XZ @ 0x1801D78E4 (--0LockScreenDirectorServiceProviderImpl@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801D7BC4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UILockScreenDirectorSe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D85B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILo_ea_1801D85B0.c)
 *     ?RuntimeClassInitialize@LockScreenDirectorServiceProviderImpl@@QEAAJXZ @ 0x1801D88E8 (-RuntimeClassInitialize@LockScreenDirectorServiceProviderImpl@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<LockScreenDirectorServiceProviderImpl,IUnknown,>(
        LockScreenDirectorServiceProviderImpl **a1)
{
  LockScreenDirectorServiceProviderImpl *v2; // rax
  int CanCastTo; // edi
  LockScreenDirectorServiceProviderImpl *v4; // rbx
  __int64 v5; // rdx

  *a1 = 0LL;
  v2 = (LockScreenDirectorServiceProviderImpl *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = LockScreenDirectorServiceProviderImpl::LockScreenDirectorServiceProviderImpl(v2);
    CanCastTo = LockScreenDirectorServiceProviderImpl::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(LockScreenDirectorServiceProviderImpl *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::CanCastTo(
                      v4,
                      v5,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(LockScreenDirectorServiceProviderImpl *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
