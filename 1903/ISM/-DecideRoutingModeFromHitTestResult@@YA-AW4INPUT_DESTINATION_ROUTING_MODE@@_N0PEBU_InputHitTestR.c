/*
 * XREFs of ?DecideRoutingModeFromHitTestResult@@YA?AW4INPUT_DESTINATION_ROUTING_MODE@@_N0PEBU_InputHitTestRequest@@@Z @ 0x1800C32D0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1800C4520 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?Initialize@GameInputConfig@@SAXXZ @ 0x180029B44 (-Initialize@GameInputConfig@@SAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180035918 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CAX_NW4ReportingKi.c)
 */

__int64 __fastcall DecideRoutingModeFromHitTestResult(char a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _BYTE *v10; // rax

  v3 = 0;
  if ( a1 && (*(_DWORD *)a3 != 4 || (*(_BYTE *)(a3 + 88) & 1) != 0) )
    return 3LL;
  if ( IsEdition(8778LL) )
  {
    wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::ReportUsageToService(v8, v7, v9);
    if ( *(_DWORD *)a3 == 4 )
    {
      v10 = GameInputConfig::s_gameInputConfig;
      if ( !GameInputConfig::s_gameInputConfig )
      {
        GameInputConfig::Initialize();
        v10 = GameInputConfig::s_gameInputConfig;
      }
      if ( v10[8] )
        return 1;
    }
  }
  else
  {
    return 2 - (unsigned int)(a2 != 0);
  }
  return v3;
}
