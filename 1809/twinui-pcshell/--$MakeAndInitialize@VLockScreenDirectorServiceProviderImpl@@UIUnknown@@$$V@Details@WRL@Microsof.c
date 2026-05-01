/*
 * XREFs of ??$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180190D30
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180191340 (-CreateInstance@-$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E6028 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ??0LockScreenDirectorServiceProviderImpl@@QEAA@XZ @ 0x180191054 (--0LockScreenDirectorServiceProviderImpl@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180191C90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILo_ea_180191C90.c)
 *     ?RuntimeClassInitialize@LockScreenDirectorServiceProviderImpl@@QEAAJXZ @ 0x180191F80 (-RuntimeClassInitialize@LockScreenDirectorServiceProviderImpl@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<LockScreenDirectorServiceProviderImpl,IUnknown,>(
        LockScreenDirectorServiceProviderImpl **a1)
{
  LockScreenDirectorServiceProviderImpl *v2; // rax
  int CanCastTo; // edi
  LockScreenDirectorServiceProviderImpl *v4; // rbx
  _DWORD *v5; // rcx
  _DWORD *v6; // r9

  *a1 = 0LL;
  v2 = (LockScreenDirectorServiceProviderImpl *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
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
      if ( InlineIsEqualGUID(v5, &GUID_c853771a_f336_4cf8_9a27_1570293ab52d) )
      {
        *a1 = v4;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                      (__int64)v4 + 8,
                      v6,
                      a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
          goto LABEL_12;
      }
      (*(void (__fastcall **)(LockScreenDirectorServiceProviderImpl *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_12:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::Release(v4);
  return (unsigned int)CanCastTo;
}
