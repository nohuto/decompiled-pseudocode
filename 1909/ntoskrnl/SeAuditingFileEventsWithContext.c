/*
 * XREFs of SeAuditingFileEventsWithContext @ 0x1408DDB20
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditingFileEventsWithContextEx @ 0x14031D830 (SeAuditingFileEventsWithContextEx.c)
 */

BOOLEAN __stdcall SeAuditingFileEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  return SeAuditingFileEventsWithContextEx(
           AccessGranted,
           (__int64)SecurityDescriptor,
           (__int64)SubjectSecurityContext,
           0LL);
}
