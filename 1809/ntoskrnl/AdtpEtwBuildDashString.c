/*
 * XREFs of AdtpEtwBuildDashString @ 0x1406D0B60
 * Callers:
 *     AdtpPackageParameters @ 0x140188D9C (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x1401892DC (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140325BEC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     <none>
 */

const char *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  const char *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = "-";
  *(_QWORD *)a1 = "-";
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
