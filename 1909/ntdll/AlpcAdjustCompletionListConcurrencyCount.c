/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800DFAF0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x18009DFE0 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
