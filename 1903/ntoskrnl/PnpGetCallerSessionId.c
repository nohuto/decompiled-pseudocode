/*
 * XREFs of PnpGetCallerSessionId @ 0x140862104
 * Callers:
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SeQuerySessionIdToken @ 0x1406C5180 (SeQuerySessionIdToken.c)
 */

__int64 __fastcall PnpGetCallerSessionId(PULONG SessionId)
{
  PACCESS_TOKEN PrimaryToken; // rcx
  unsigned int SessionIdToken; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  SessionIdToken = SeQuerySessionIdToken(PrimaryToken, SessionId);
  SeReleaseSubjectContext(&SubjectContext);
  return SessionIdToken;
}
