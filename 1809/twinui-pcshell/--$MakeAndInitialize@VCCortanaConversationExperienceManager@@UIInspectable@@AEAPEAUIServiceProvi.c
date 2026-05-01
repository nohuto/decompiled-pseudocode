/*
 * XREFs of ??$MakeAndInitialize@VCCortanaConversationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18014F220
 * Callers:
 *     ?GetExperienceManager@CortanaConversationExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18014F5E0 (-GetExperienceManager@CortanaConversationExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PE.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewT.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18011AC00 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18011AC00.c)
 *     ??0CCortanaConversationExperienceManager@@QEAA@XZ @ 0x18014F438 (--0CCortanaConversationExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CCortanaConversationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18014F864 (-RuntimeClassInitialize@CCortanaConversationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCortanaConversationExperienceManager,IInspectable,IServiceProvider * &>(
        CCortanaConversationExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CCortanaConversationExperienceManager *v4; // rax
  int CanCastTo; // edi
  CCortanaConversationExperienceManager *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  _DWORD *v10; // r9

  *a1 = 0LL;
  v4 = (CCortanaConversationExperienceManager *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = CCortanaConversationExperienceManager::CCortanaConversationExperienceManager(v4);
  CanCastTo = CCortanaConversationExperienceManager::RuntimeClassInitialize(v6, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, v8) )
    {
      *a1 = v6;
      (*(void (__fastcall **)(CCortanaConversationExperienceManager *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v9, &GUID_c0a687bc_4ec8_455f_a21b_1f71ec1d76a4) )
      {
        *a1 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v6 + 8,
                      v10);
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(CCortanaConversationExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_11:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release((__int64)v6);
  return (unsigned int)CanCastTo;
}
