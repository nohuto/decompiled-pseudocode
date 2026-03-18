/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140743520
 * Callers:
 *     WdipSemCleanStart @ 0x1407434B4 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x140743650 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
