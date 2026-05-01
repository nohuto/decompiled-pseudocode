/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x18019B8EC
 * Callers:
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18019F78C (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellFeedsShellExperienceViewLifetime@ShellFeeds@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x18019C158 (--0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18019CAB4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIShellEx_ea_18019CAB4.c)
 *     ?RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x1801DF524 (-RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  TwinUI::Cortana::ShellExperienceView *v10; // rax
  int CanCastTo; // edi
  __int64 v12; // rbx
  _DWORD *v13; // rcx
  __int64 v14; // rcx

  *a1 = 0LL;
  v10 = (TwinUI::Cortana::ShellExperienceView *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = TwinUI::Cortana::ShellExperienceView::ShellExperienceView(v10);
    CanCastTo = TwinUI::Cortana::ShellExperienceView::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6, -2LL, 0LL);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_9f8649aa_a188_4bda_a412_ecb6807c94d8, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v13, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v12;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IShellExperienceView,IWeakReferenceSource,TwinUI::Cortana::IShellExperienceViewLifetime>::CanCastTo(
                      v12,
                      v14,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::ShellFeeds::IShellFeedsShellExperienceViewLifetime>::Release(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
