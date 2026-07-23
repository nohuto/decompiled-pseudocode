/*
 * XREFs of SeAuditingHardLinkEventsWithContext @ 0x1406D11B0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x1405BCA50 (SepAdtAuditThisEventWithContext.c)
 */

BOOLEAN __stdcall SeAuditingHardLinkEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  __int16 v3; // ax
  __int64 v4; // rax
  char *v5; // rax

  v3 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v3 & 0x10) == 0 )
    return 0;
  if ( v3 >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v4 )
      return 0;
    v5 = (char *)SecurityDescriptor + v4;
  }
  return v5
      && *((_WORD *)v5 + 2)
      && (unsigned __int8)SepAdtAuditThisEventWithContext(
                            117LL,
                            AccessGranted,
                            AccessGranted == 0,
                            SubjectSecurityContext);
}
