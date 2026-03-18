/*
 * XREFs of CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FD60
 * Callers:
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 * Callees:
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     IoGetFileObjectGenericMapping @ 0x1406C6B10 (IoGetFileObjectGenericMapping.c)
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
