/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800DFA30
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSetInformation @ 0x18009D830 (ZwAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return ZwAlpcSetInformation();
}
