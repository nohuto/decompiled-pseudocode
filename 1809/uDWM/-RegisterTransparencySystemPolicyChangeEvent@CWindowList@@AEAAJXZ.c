/*
 * XREFs of ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18003D7A0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003CFEC (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024D50 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 *     ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x18003D87C (--$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x18003D9F0 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180079E4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

__int64 __fastcall CWindowList::RegisterTransparencySystemPolicyChangeEvent(CWindowList *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  wil::details *v7; // rbx
  wil::details **v8; // r14
  wil::details *v9; // rsi
  DWORD LastError; // edi
  struct wil::details::wnf_subscription_state_base *v12; // rdx
  wil::details *v13[2]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v14[14]; // [rsp+30h] [rbp-88h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService((__int64)this, a2, a3);
  v14[1] = this;
  v14[0] = off_1800B5708;
  v14[13] = v14;
  v7 = 0LL;
  v8 = (wil::details **)((char *)this + 592);
  if ( (int)wil::details::make_wnf_subscription_state<int>(v4, v14, v5, v13) >= 0 )
    v7 = v13[0];
  if ( v8 != v13 )
  {
    v9 = *v8;
    if ( *v8 )
    {
      LastError = GetLastError();
      wil::details::delete_wnf_subscription_state(v9, v12);
      SetLastError(LastError);
    }
    *v8 = v7;
    v7 = 0LL;
  }
  if ( v7 )
    wil::details::delete_wnf_subscription_state(v7, v6);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v14);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v14);
  return 0LL;
}
