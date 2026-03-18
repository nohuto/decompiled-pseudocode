/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x140665B8C
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x140665A9C (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     EtwpCheckGuidAccess @ 0x1406651FC (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v6; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v6 = EtwpCheckGuidAccess(a2, 0x200u, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v6;
}
