/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180083640
 * Callers:
 *     _dynamic_initializer_for__c_retailDemoHotspot__ @ 0x180001240 (_dynamic_initializer_for__c_retailDemoHotspot__.c)
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1800012E0 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 *     ??0CustomShellManager@@QEAA@XZ @ 0x18008C294 (--0CustomShellManager@@QEAA@XZ.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ @ 0x180098D14 (-LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x180184B30 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x1801C7414 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 *     _lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator() @ 0x1801FDC38 (_lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator().c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1802B8438 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1802C3C14 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x18032B560 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 *     ?LoadPinnedAppsFromRegistry@VirtualPinnedAppsHandler@@AEAAXXZ @ 0x180391AC8 (-LoadPinnedAppsFromRegistry@VirtualPinnedAppsHandler@@AEAAXXZ.c)
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180391C10 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEAG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEAG@Z @ 0x1803A0144 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEAG@std@@YA-AV-.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18006C29C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::wstring(__int64 a1, _WORD *a2)
{
  unsigned __int64 v3; // r8

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  std::wstring::assign((char *)a1, a2, v3);
  return a1;
}
