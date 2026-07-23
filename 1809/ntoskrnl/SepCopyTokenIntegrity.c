/*
 * XREFs of SepCopyTokenIntegrity @ 0x140091D60
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x140324EF0 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SepValidLabelSubjectContext @ 0x14060A6D0 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x14060AD70 (SepAdjustPrivileges.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x140639100 (SeTokenCanImpersonate.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA398 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x1400A8F8C (SepLocateTokenIntegrity.c)
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
