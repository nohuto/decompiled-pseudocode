/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x14076E2B4
 * Callers:
 *     WdipSemCleanStart @ 0x14076E248 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14076E3DC (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
