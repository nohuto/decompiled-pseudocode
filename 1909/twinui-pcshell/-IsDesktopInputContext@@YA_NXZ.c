/*
 * XREFs of ?IsDesktopInputContext@@YA_NXZ @ 0x180367FC8
 * Callers:
 *     ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x180368070 (-OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z.c)
 *     ?v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x180378A20 (-v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x180083234 (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1801A4DE0 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHiding@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180368134 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalit.c)
 */

bool IsDesktopInputContext(void)
{
  enum Windows::Internal::Shell::Holographic::UserInputContext *v0; // rdx
  int UserInputContext; // eax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v2; // rdx
  int UserDisplayContext; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHiding>::ReportUsageToService();
  v6 = 0;
  UserInputContext = Windows::Internal::Shell::Holographic::GetUserInputContext(
                       (Windows::Internal::Shell::Holographic *)&v6,
                       v0);
  if ( UserInputContext < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14,
      (__int64)"internal\\shell\\private\\inc\\inputcontexthelper.h",
      (const char *)(unsigned int)UserInputContext);
  if ( !v6 )
    return 1;
  v7 = 1;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v7,
                         v2);
  if ( UserDisplayContext < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"internal\\shell\\private\\inc\\inputcontexthelper.h",
      (const char *)(unsigned int)UserDisplayContext);
  return v7 != 1;
}
