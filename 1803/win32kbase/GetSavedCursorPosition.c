/*
 * XREFs of GetSavedCursorPosition @ 0x1C012E520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetSavedCursorPosition()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
}
