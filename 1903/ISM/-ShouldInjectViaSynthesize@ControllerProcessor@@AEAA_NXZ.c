/*
 * XREFs of ?ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ @ 0x180077C60
 * Callers:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1800755B8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18007615C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180076990 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180077A80 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001D73C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@w.c)
 */

bool __fastcall ControllerProcessor::ShouldInjectViaSynthesize(ControllerProcessor *this)
{
  unsigned __int8 v1; // al
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = IsEdition(253345LL);
  LOBYTE(v4) = 0;
  if ( v1 )
  {
    wil::Feature<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::ReportUsageToService(v4, v2, v3);
    LOBYTE(v4) = 1;
  }
  return v4;
}
