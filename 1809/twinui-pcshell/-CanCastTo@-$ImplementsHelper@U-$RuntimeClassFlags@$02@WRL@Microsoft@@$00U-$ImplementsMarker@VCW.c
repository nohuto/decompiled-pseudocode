/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIWeakReferenceSource@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@Windows@@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800164EC
 * Callers:
 *     ?QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016440 (-QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180169504 (--$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016A960 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18016A960.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveWindowMessageNotification@@UIClosable@Foundation@Windows@@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180013328 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveWindowMessag.c)
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IWeakReferenceSource,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  int IsEqualGUID; // eax
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352);
  v6 = 0;
  if ( IsEqualGUID
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_00000038_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v7, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee) )
  {
    *v4 = v5;
  }
  else
  {
    return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener>::CanCastTo(
                           v5 + 8,
                           v8);
  }
  return v6;
}
