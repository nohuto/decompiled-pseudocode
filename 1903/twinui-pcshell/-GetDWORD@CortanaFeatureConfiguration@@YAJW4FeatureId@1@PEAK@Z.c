/*
 * XREFs of ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180197C00
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180054614 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180197E90 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180198C80 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x1801CF548 (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 * Callees:
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x180071124 (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetDWORD(CortanaFeatureConfiguration *a1, unsigned __int8 *a2)
{
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *SharedFeatureTable; // rax
  __int64 v4; // r10
  int v5; // ebx
  CortanaFeatureConfiguration *v6; // rcx
  CortanaFeatureConfiguration *v7; // rcx
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *v8; // rax
  __int64 v9; // r11
  int v10; // r10d

  SharedFeatureTable = CortanaFeatureConfiguration::getSharedFeatureTable(a1);
  v5 = *((_DWORD *)SharedFeatureTable + 6 * v4 + 3);
  CortanaFeatureConfiguration::getSharedFeatureTable(v6);
  v8 = CortanaFeatureConfiguration::getSharedFeatureTable(v7);
  return CortanaFeatureConfiguration::GetDWORDCore(*((WCHAR **)v8 + v9), v10, v5, a2);
}
