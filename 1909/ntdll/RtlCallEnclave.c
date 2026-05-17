/*
 * XREFs of RtlCallEnclave @ 0x1800A0D80
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CD5C0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CE080 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009E060 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}
