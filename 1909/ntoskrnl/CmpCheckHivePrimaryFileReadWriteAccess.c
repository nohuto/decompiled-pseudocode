/*
 * XREFs of CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FAC0
 * Callers:
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 * Callees:
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     IoGetFileObjectGenericMapping @ 0x1406C4D30 (IoGetFileObjectGenericMapping.c)
 */

BOOLEAN __fastcall CmpCheckHivePrimaryFileReadWriteAccess(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  KPROCESSOR_MODE AccessMode; // bl
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v4; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  AccessMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  GenericMapping = IoGetFileObjectGenericMapping();
  v4 = SeAccessCheck(
         SecurityDescriptor,
         &SubjectContext,
         0,
         3u,
         0,
         0LL,
         GenericMapping,
         AccessMode,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
