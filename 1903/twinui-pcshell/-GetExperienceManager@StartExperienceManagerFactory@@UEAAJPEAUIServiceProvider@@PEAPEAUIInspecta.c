/*
 * XREFs of ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180197C50
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18005004C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4Rep.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA?AW4Variant_StartInSeparateUWP@@W4VariantReportingKind@2@_N@Z @ 0x180078868 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA-AW4Vari.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017B2D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_18017B2D0.c)
 *     ??$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStartExperienceManager@@@12@$$QEA_N@Z @ 0x180195FF4 (--$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCStartExperienceManag.c)
 *     ??$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801961BC (--$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCWRLObjectWithSite@@UIWeakReferenceSource@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@Windows@@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180197498 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCWRLOb.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801993DC (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall StartExperienceManagerFactory::GetExperienceManager(
        StartExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  int CanCastTo; // ebx
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r9
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  CStartExperienceManager *v11; // rcx
  CStartExperienceManager *v12; // rcx
  CStartExperienceManager *v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IServiceProvider *v17; // [rsp+48h] [rbp+10h] BYREF
  CStartExperienceManager *v18; // [rsp+50h] [rbp+18h] BYREF

  v17 = a2;
  *a3 = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService(
    (__int64)this,
    (__int64)a2,
    (__int64)a3);
  if ( wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() == 5 )
  {
    v15 = Microsoft::WRL::Details::MakeAndInitialize<CStartExperienceManager,IInspectable,IServiceProvider * &>(
            (CStartExperienceManager **)a3,
            &v17);
    CanCastTo = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4AB,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
      return (unsigned int)CanCastTo;
    }
  }
  else
  {
    Microsoft::WRL::Details::Make<CStartExperienceManager,bool>(&v18);
    if ( !v18 )
    {
      CanCastTo = -2147024882;
      v6 = 1189LL;
LABEL_13:
      v8 = (unsigned int)CanCastTo;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)v8);
      v12 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release((volatile signed __int64 *)v12);
      }
      return (unsigned int)CanCastTo;
    }
    v7 = CStartExperienceManager::RuntimeClassInitialize(v18, a2);
    CanCastTo = v7;
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v6 = 1190LL;
      goto LABEL_14;
    }
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v9, v9) )
    {
      v11 = v18;
      *a3 = (struct IInspectable *)v18;
      (*(void (__fastcall **)(CStartExperienceManager *))(*(_QWORD *)v11 + 8LL))(v11);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CWRLObjectWithSite,IWeakReferenceSource,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener>::CanCastTo(
                    (__int64)v18,
                    v10);
      if ( CanCastTo >= 0 )
        ((void (__fastcall *)(_QWORD))(*a3)->lpVtbl->AddRef)(*a3);
    }
    if ( CanCastTo < 0 )
    {
      v6 = 1191LL;
      goto LABEL_13;
    }
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release((volatile signed __int64 *)v14);
    }
  }
  return 0LL;
}
