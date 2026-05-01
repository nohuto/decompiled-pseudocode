/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1801506A4
 * Callers:
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180154744 (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x180150EC0 (--0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180151900 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIShellExperienceView@.c)
 *     ?RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x180187254 (-RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  TwinUI::Cortana::ShellExperienceView *v10; // rax
  int CanCastTo; // ebx
  __int64 v12; // rdi

  *a1 = 0LL;
  v10 = (TwinUI::Cortana::ShellExperienceView *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = TwinUI::Cortana::ShellExperienceView::ShellExperienceView(v10);
    CanCastTo = TwinUI::Cortana::ShellExperienceView::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6, -2LL, 0LL);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IShellExperienceView,IWeakReferenceSource,TwinUI::Cortana::IShellExperienceViewLifetime>::CanCastTo(
                    v12,
                    &GUID_9f8649aa_a188_4bda_a412_ecb6807c94d8,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::Release(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
