/*
 * XREFs of SepCopyTokenIntegrity @ 0x1400E4838
 * Callers:
 *     SeQueryTokenIntegrity @ 0x140139F78 (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x140345FE4 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeTokenCanImpersonate @ 0x1405DF060 (SeTokenCanImpersonate.c)
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     SeIsTokenAssignableToProcess @ 0x14061E550 (SeIsTokenAssignableToProcess.c)
 *     SepAdjustPrivileges @ 0x140679C70 (SepAdjustPrivileges.c)
 *     SepValidLabelSubjectContext @ 0x1406DB094 (SepValidLabelSubjectContext.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14000AD1C (SepLocateTokenIntegrity.c)
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
