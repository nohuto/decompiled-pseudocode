/*
 * XREFs of AdtpEtwBuildDashString @ 0x1406E0930
 * Callers:
 *     AdtpPackageParameters @ 0x140132AB8 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x140199820 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140347490 (AdtpBuildAccessReasonAuditString.c)
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
