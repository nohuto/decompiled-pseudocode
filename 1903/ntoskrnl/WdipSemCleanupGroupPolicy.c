/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x14076B460
 * Callers:
 *     WdipSemCleanStart @ 0x14076B3F4 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14076B588 (WdipSemLoadGroupPolicy.c)
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
