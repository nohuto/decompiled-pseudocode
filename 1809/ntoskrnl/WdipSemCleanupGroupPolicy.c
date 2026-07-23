/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1407446F0
 * Callers:
 *     WdipSemCleanStart @ 0x140744684 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x140744820 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
