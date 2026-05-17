/*
 * XREFs of RtlCallEnclave @ 0x1800A41B0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CED30 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CF7B0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x1800A14B0 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}
