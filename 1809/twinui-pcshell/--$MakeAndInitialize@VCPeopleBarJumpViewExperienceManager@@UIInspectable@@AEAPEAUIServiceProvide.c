/*
 * XREFs of ??$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180165420
 * Callers:
 *     ?GetExperienceManager@PeopleBarJumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180165DC0 (-GetExperienceManager@PeopleBarJumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAP.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180157B60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeo_ea_180157B60.c)
 *     ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x180165618 (--0CPeopleBarJumpViewExperienceManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180165A38 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIPeopleBarJumpViewExp.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18016699C (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarJumpViewExperienceManager,IInspectable,IServiceProvider * &>(
        CPeopleBarJumpViewExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CPeopleBarJumpViewExperienceManager *v4; // rax
  int CanCastTo; // edi
  CPeopleBarJumpViewExperienceManager *v6; // rbx
  _DWORD *v7; // rcx
  __int64 v8; // rdx

  *a1 = 0LL;
  v4 = (CPeopleBarJumpViewExperienceManager *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CPeopleBarJumpViewExperienceManager::CPeopleBarJumpViewExperienceManager(v4);
    CanCastTo = CPeopleBarJumpViewExperienceManager::RuntimeClassInitialize(v6, *a2);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v7, v7) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(CPeopleBarJumpViewExperienceManager *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable>::CanCastTo(
                      v6,
                      v8,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(CPeopleBarJumpViewExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release((__int64)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
