/*
 * XREFs of ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x1802A9E5C
 * Callers:
 *     ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x1802A9F70 (-EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008CFC8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@.c)
 */

__int64 __fastcall ViewPresentationMediator::ComputeMaskAndFeaturesForScenarios(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int64 v9; // [rsp+48h] [rbp+10h]

  v3 = a1;
  if ( (a1 & 1) != 0 )
  {
    v4 = 63;
    v5 = a1 & 2;
  }
  else
  {
    v5 = a1 & 2;
    if ( (a1 & 2) != 0 )
    {
      v4 = 81;
    }
    else
    {
      if ( (a1 & 8) != 0 )
      {
        v4 = 17;
      }
      else
      {
        wil::Feature<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::ReportUsageToService(a1, a2, a3);
        v4 = 65;
      }
      v5 = 0;
    }
  }
  v6 = v4 | 0x80;
  if ( !v5 )
    v6 = v4;
  LODWORD(v9) = v5 != 0 ? 255 : 127;
  v7 = v6 | 0x51;
  if ( (v3 & 4) == 0 )
    v7 = v6;
  HIDWORD(v9) = v7;
  return v9;
}
