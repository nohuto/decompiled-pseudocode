/*
 * XREFs of PspIsContextAdmin @ 0x1405B96B4
 * Callers:
 *     PspSetEnergyTrackingStateJobTree @ 0x1405B9614 (PspSetEnergyTrackingStateJobTree.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 * Callees:
 *     SeTokenIsAdmin @ 0x1405BBCD0 (SeTokenIsAdmin.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405E62C0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405E6300 (SeLockSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 */

BOOLEAN PspIsContextAdmin()
{
  PACCESS_TOKEN PrimaryToken; // rcx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin;
}
