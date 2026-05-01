/*
 * XREFs of ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1800E76B8
 * Callers:
 *     ?OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z @ 0x1800E6640 (-OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z.c)
 *     ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x1800E66A0 (-OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7380 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800E7920 (wistd--_Func_impl_wistd--_Callable_obj__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__0__ea_1800E7920.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800E70F4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall AcrylicPolicyManager::UpdateAcrylicState(AcrylicPolicyManager *this, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned __int8 v5; // di
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v5 = 0;
  wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService((__int64)this, a2, a3);
  if ( !*((_BYTE *)this + 449) && !*((_BYTE *)this + 451) && *((_BYTE *)this + 450) )
    v5 = *((_BYTE *)this + 452) != 0;
  if ( *((_BYTE *)this + 448) != v5 || v3 )
  {
    v10 = v5;
    v6 = RtlPublishWnfStateData(WNF_IMSN_TRANSPARENCYPOLICY, 0LL, &v10, 4LL);
    v7 = v6 | 0x10000000;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
        (const char *)v7);
      return v7;
    }
    *((_BYTE *)this + 448) = v5;
  }
  return 0LL;
}
