/*
 * XREFs of RtlOwnerAcesPresent @ 0x1400133A0
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x1400133C0 (RtlpOwnerAcesPresent.c)
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0LL, pAcl);
}
