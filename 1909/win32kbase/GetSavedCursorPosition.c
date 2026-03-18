/*
 * XREFs of GetSavedCursorPosition @ 0x1C0182180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetSavedCursorPosition()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
}
