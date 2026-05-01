/*
 * XREFs of ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1802FD84C
 * Callers:
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1802FD6C4 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180345870 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180348510 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180056EFC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKin.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IsPeopleExperienceHostView(struct IApplicationView *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // bl
  LPCWCH lpString1; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::ReportUsageToService((__int64)a1, a2, a3);
  lpString1 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  v4 = *(_QWORD *)a1;
  v8 = -1LL;
  v9 = -1LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(v4 + 136))(a1, &lpString1) < 0
    || (v5 = 1,
        CompareStringOrdinal(lpString1, -1, L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", -1, 1) != 2)
    && CompareStringOrdinal(lpString1, -1, L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", -1, 1) != 2 )
  {
    v5 = 0;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  return v5;
}
