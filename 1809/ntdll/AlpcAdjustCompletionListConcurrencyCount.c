/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800E1EA0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A1430 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
