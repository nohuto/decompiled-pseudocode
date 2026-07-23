/*
 * XREFs of PnpGetCallerSessionId @ 0x140828F38
 * Callers:
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SeQuerySessionIdToken @ 0x14069F720 (SeQuerySessionIdToken.c)
 */

__int64 __fastcall PnpGetCallerSessionId(PULONG SessionId)
{
  PACCESS_TOKEN PrimaryToken; // rcx
  unsigned int SessionIdToken; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  SessionIdToken = SeQuerySessionIdToken(PrimaryToken, SessionId);
  SeReleaseSubjectContext(&SubjectContext);
  return SessionIdToken;
}
