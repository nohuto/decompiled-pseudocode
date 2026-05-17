/*
 * XREFs of LdrCallEnclave @ 0x1800CD410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 LdrCallEnclave()
{
  return LdrpIssueEnclaveCall();
}
