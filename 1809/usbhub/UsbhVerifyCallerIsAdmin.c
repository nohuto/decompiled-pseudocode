/*
 * XREFs of UsbhVerifyCallerIsAdmin @ 0x1C004EEAC
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C004BF70 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004E6E4 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     <none>
 */

BOOLEAN UsbhVerifyCallerIsAdmin()
{
  void *PrimaryToken; // rcx
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
