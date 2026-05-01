/*
 * XREFs of ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x18003D6D8
 * Callers:
 *     ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YAJPEA_N@Z @ 0x18003D9C0 (-IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YAJPEA_N@Z.c)
 *     ?IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z @ 0x1801C73CC (-IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z.c)
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801CBF3C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?IsUndockCortanaEnabled@PrivilegedOperations@@YA_NXZ @ 0x1801EB2F0 (-IsUndockCortanaEnabled@PrivilegedOperations@@YA_NXZ.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18003BAD4 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008E86C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CAX_NW4Reportin.c)
 */

unsigned __int8 __fastcall CortanaUndockingHelpers::IsUndockCortanaEnabled(CortanaUndockingHelpers *this)
{
  unsigned __int8 v1; // al
  char v2; // cl

  v1 = IsSearchAndCortanaSplitEnabled();
  v2 = 0;
  if ( v1 )
  {
    wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::ReportUsageToService(0LL);
    return 1;
  }
  return v2;
}
