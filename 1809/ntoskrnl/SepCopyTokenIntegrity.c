/*
 * XREFs of SepCopyTokenIntegrity @ 0x140091E20
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x140324C00 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SepValidLabelSubjectContext @ 0x1406096D0 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x140609D70 (SepAdjustPrivileges.c)
 *     NtQueryInformationToken @ 0x14062A760 (NtQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x1406380E0 (SeTokenCanImpersonate.c)
 *     SeQueryInformationToken @ 0x14063C370 (SeQueryInformationToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406B9118 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x1400A902C (SepLocateTokenIntegrity.c)
 */

__int64 SepCopyTokenIntegrity()
{
  __int64 TokenIntegrity; // rax
  __int64 v1; // rdx
  __int64 result; // rax

  TokenIntegrity = SepLocateTokenIntegrity();
  if ( TokenIntegrity )
  {
    *(_QWORD *)v1 = *(_QWORD *)TokenIntegrity;
    result = *(unsigned int *)(TokenIntegrity + 8);
  }
  else
  {
    *(_QWORD *)v1 = SeUntrustedMandatorySid;
    result = 96LL;
  }
  *(_DWORD *)(v1 + 8) = result;
  return result;
}
