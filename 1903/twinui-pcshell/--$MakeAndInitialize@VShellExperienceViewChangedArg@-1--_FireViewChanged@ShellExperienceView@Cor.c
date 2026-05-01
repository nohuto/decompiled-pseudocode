/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceViewChangedArg@?1??_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z@UIShellExperienceViewChangedArg@789Windows@@AEAW46789Windows@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@AEAW4ShellExperienceViewChangeType@4567@AEAJ@Z @ 0x1800600FC
 * Callers:
 *     ?_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x18005FF68 (-_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Exper.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E8E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___MakeAndInitialize_VShellExperienceViewChangedArg__1___FireViewChanged_ShellExperienceView_Cortana_TwinUI__AEAAJW4ShellExperienceViewChangeType_Experience_Shell_Internal_Windows__J_Z_UIShellExperienceViewChangedArg_789Windows__AEAW46789Windows__AEAJ_Details_WRL_Microsoft__YAJPEAPEAUIShellExperienceViewChangedArg_Experience_Shell_Internal_Windows__AEAW4ShellExperienceViewChangeType_4567_AEAJ_Z(
        volatile signed __int64 **a1,
        _DWORD *a2,
        int *a3)
{
  unsigned int v3; // edi
  volatile signed __int64 *v7; // rax
  volatile signed __int64 *v8; // rbx
  int v9; // edx

  v3 = 0;
  *a1 = 0LL;
  v7 = (volatile signed __int64 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 3) = 1LL;
    *v7 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg'};
    *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = (volatile signed __int64)off_180429E70;
    *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    v9 = *a3;
    *((_DWORD *)v8 + 8) = *a2;
    *((_DWORD *)v8 + 9) = v9;
    *a1 = v8;
    (*(void (__fastcall **)(volatile signed __int64 *))(*v8 + 8))(v8);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
