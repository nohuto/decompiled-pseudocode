/*
 * XREFs of CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x1801CEAF4
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801D03A0 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CortanaOnLockOutProcModel@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801D0910 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CortanaOnLockOutProcModel@@@wil@@CAX.c)
 */

char CortanaHelpers::AllowCortanaAttractModeAboveLock()
{
  wil::Feature<__WilFeatureTraits_Feature_CortanaOnLockOutProcModel>::ReportUsageToService();
  return 0;
}
