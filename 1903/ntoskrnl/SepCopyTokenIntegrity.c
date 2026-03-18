/*
 * XREFs of SepCopyTokenIntegrity @ 0x1400AE2E8
 * Callers:
 *     SeQueryTokenIntegrity @ 0x1401398A0 (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x140346584 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeTokenCanImpersonate @ 0x1405DE8C0 (SeTokenCanImpersonate.c)
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     SeIsTokenAssignableToProcess @ 0x14061CA40 (SeIsTokenAssignableToProcess.c)
 *     SepValidLabelSubjectContext @ 0x140671EE0 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x140674560 (SepAdjustPrivileges.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14000AC8C (SepLocateTokenIntegrity.c)
 */

__int64 __fastcall SepCopyTokenIntegrity(__int64 a1)
{
  __int64 TokenIntegrity; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  TokenIntegrity = SepLocateTokenIntegrity(a1);
  if ( TokenIntegrity )
  {
    *(_QWORD *)v2 = *(_QWORD *)TokenIntegrity;
    result = *(unsigned int *)(TokenIntegrity + 8);
  }
  else
  {
    *(_QWORD *)v2 = SeUntrustedMandatorySid;
    result = 96LL;
  }
  *(_DWORD *)(v2 + 8) = result;
  return result;
}
