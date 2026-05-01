/*
 * XREFs of ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x180093EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@PEBG@ShellFeedsTelemetry@@SAXAEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@$$QEAPEBG@Z @ 0x180091FDC (--$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Expe.c)
 *     ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x180094208 (-OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x180095180 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z @ 0x1800951BC (-_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x180095F98 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA?AW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@2@_N@Z @ 0x180096548 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA-AW4Va.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil@@SA_NXZ @ 0x180096594 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil@@SA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::NotifyTaskbarButtonInteraction(
        __int64 a1,
        int a2,
        int a3,
        HSTRING a4)
{
  __int64 v7; // rdx
  ShellFeedsExperienceManagerImpl *v8; // rcx
  bool v9; // dl
  bool v10; // al
  unsigned __int8 Variant; // cl
  const WCHAR *v13[5]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  v13[1] = (const WCHAR *)-2LL;
  v13[0] = WindowsGetStringRawBuffer(a4, 0LL);
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType &,enum Windows::Internal::Shell::Experience::ShellFeedsButtonInteraction &,unsigned short const *>(
    &v14,
    &v15,
    v13);
  if ( a3 <= 0 )
    return 0LL;
  if ( a3 > 2 )
  {
    switch ( a3 )
    {
      case 3:
        *(_BYTE *)(a1 + 155) = 0;
        v9 = 0;
        break;
      case 4:
        if ( ShellFeedsExperienceManagerImpl::_IsViewVisible((ShellFeedsExperienceManagerImpl *)a1)
          && *(_BYTE *)(a1 + 154) )
        {
          *(_BYTE *)(a1 + 155) = 1;
        }
        v9 = 1;
        break;
      case 5:
        goto LABEL_6;
      default:
        return 0LL;
    }
    ShellFeedsExperienceManagerImpl::_NotifyViewTaskbarButtonHoverStateChanged(
      (ShellFeedsExperienceManagerImpl *)a1,
      v9);
    return 0LL;
  }
LABEL_6:
  if ( a3 != 1 )
  {
    v10 = a3 == 5;
    if ( a3 == 2 )
    {
      Variant = wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_GetVariant();
      v10 = 0;
      if ( Variant >= 2u && (Variant <= 4u || Variant == 6) )
        v10 = 1;
    }
    if ( v10 )
    {
      if ( *(_BYTE *)(a1 + 155) )
      {
        *(_BYTE *)(a1 + 155) = 0;
        return 0LL;
      }
      if ( !*(_BYTE *)(a1 + 154) )
      {
        *(_BYTE *)(a1 + 154) = 1;
        LOBYTE(v7) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), v7);
        *(_BYTE *)(a1 + 155) = 1;
      }
    }
    goto LABEL_30;
  }
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::__private_IsEnabled() )
  {
    if ( ShellFeedsExperienceManagerImpl::_IsViewVisible((ShellFeedsExperienceManagerImpl *)a1)
      || !ShellFeedsExperienceManagerImpl::OpenFlyoutOnHover(v8) )
    {
      return 0LL;
    }
LABEL_30:
    ShellFeedsExperienceManagerImpl::_Show(a1, a4, (unsigned int)a3);
    return 0LL;
  }
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_GetVariant() != 4
    && !ShellFeedsExperienceManagerImpl::_IsViewVisible((ShellFeedsExperienceManagerImpl *)a1) )
  {
    goto LABEL_30;
  }
  return 0LL;
}
