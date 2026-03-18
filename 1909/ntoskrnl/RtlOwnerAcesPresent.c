/*
 * XREFs of RtlOwnerAcesPresent @ 0x140088370
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x140088390 (RtlpOwnerAcesPresent.c)
 */

__int64 __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  return RtlpOwnerAcesPresent(0LL, a1);
}
