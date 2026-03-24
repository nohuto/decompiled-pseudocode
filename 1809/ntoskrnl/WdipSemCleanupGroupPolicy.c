/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140743500
 * Callers:
 *     WdipSemCleanStart @ 0x140743494 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x140743630 (WdipSemLoadGroupPolicy.c)
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
