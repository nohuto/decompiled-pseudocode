/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceViewChangedArg@?1??_FireViewChanged@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z@UIShellExperienceViewChangedArg@789Windows@@AEAW46789Windows@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@AEAW4ShellExperienceViewChangeType@4567@AEAJ@Z @ 0x18009FF5C
 * Callers:
 *     ?_FireViewChanged@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x1800A0848 (-_FireViewChanged@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJW4ShellExperienceViewCha.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180081584 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator__TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_::_MakeAllocator__TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_ @ 0x1800A01BC (Microsoft--WRL--Details--MakeAllocator__TwinUI--ShellFeeds--ShellFeedsShellExperienceView--_Fire.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801DF168 (--0-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewChangedArg@Experi.c)
 */

__int64 __fastcall ___MakeAndInitialize_VShellExperienceViewChangedArg__1___FireViewChanged_ShellFeedsShellExperienceView_ShellFeeds_TwinUI__AEAAJW4ShellExperienceViewChangeType_Experience_Shell_Internal_Windows__J_Z_UIShellExperienceViewChangedArg_789Windows__AEAW46789Windows__AEAJ_Details_WRL_Microsoft__YAJPEAPEAUIShellExperienceViewChangedArg_Experience_Shell_Internal_Windows__AEAW4ShellExperienceViewChangeType_4567_AEAJ_Z(
        __int64 *a1,
        int *a2,
        _DWORD *a3)
{
  void *v6; // rax
  __int64 v7; // rbx
  int CanCastTo; // edi
  int v9; // eax
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // r9
  _DWORD *v13; // rdx
  void *v15; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v6;
  v7 = (__int64)v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>(v6);
    v15 = 0LL;
    *(_QWORD *)v7 = off_18044D598;
    *(_QWORD *)(v7 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    v9 = *a2;
    *(_DWORD *)(v7 + 36) = *a3;
    *(_DWORD *)(v7 + 32) = v9;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_1b7d8b95_d5cb_4cff_874f_11fdf16217ac, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v10, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v7;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      CanCastTo = 0;
      goto LABEL_10;
    }
    if ( InlineIsEqualGUID(v11, v12) )
    {
      *a1 = v7;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>::CanCastTo(
                    v7 + 8,
                    v13);
      if ( CanCastTo < 0 )
      {
LABEL_10:
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v7);
        goto LABEL_11;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
    goto LABEL_10;
  }
  CanCastTo = -2147024882;
LABEL_11:
  Microsoft::WRL::Details::MakeAllocator__TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_::_MakeAllocator__TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_(&v15);
  return (unsigned int)CanCastTo;
}
