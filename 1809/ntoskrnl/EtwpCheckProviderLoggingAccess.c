/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x1406579D4
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x1406578E4 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     SeCaptureSubjectContextEx @ 0x1405E07F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     EtwpCheckGuidAccess @ 0x140656D24 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v4; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v4 = EtwpCheckGuidAccess(a2, 0x200u, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
