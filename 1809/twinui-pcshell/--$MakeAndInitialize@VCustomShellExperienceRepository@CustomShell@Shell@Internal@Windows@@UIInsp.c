/*
 * XREFs of ??$MakeAndInitialize@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18008B610
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18008B800 (-ActivateInstance@-$SimpleActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@I.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180089B50 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008BAC0 (-QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJAEBU_GU.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository,IInspectable,>(
        void **a1)
{
  _QWORD *v2; // rax
  Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *v3; // rbx
  unsigned int Interface; // edi
  _QWORD *v5; // rsi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v3 = (Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *)v2;
  if ( v2 )
  {
    v5 = v2 + 1;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 1));
    *((_QWORD *)v3 + 8) = 1LL;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::`vftable'{for `IInspectable'};
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>'};
    *((_QWORD *)v3 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v3 + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v7 = 0LL;
    *(_QWORD *)v3 = &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::`vftable'{for `IInspectable'};
    *v5 = &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>'};
    *((_QWORD *)v3 + 5) = &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v3 + 6) = &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>'};
    Interface = Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::QueryInterface(
                  v3,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  a1);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release((__int64)v3);
  }
  else
  {
    Interface = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v7);
  return Interface;
}
