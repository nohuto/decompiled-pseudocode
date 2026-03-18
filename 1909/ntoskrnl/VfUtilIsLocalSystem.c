/*
 * XREFs of VfUtilIsLocalSystem @ 0x1409645C0
 * Callers:
 *     VfCheckUserHandle @ 0x140977664 (VfCheckUserHandle.c)
 *     ViKeInjectStatusAlerted @ 0x14097947C (ViKeInjectStatusAlerted.c)
 * Callees:
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     IoGetFileObjectGenericMapping @ 0x1406C4D30 (IoGetFileObjectGenericMapping.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140964954 (ViInitializeLocalSystemDescriptor.c)
 */

__int64 __fastcall VfUtilIsLocalSystem(PEPROCESS Process)
{
  unsigned int v2; // ebx
  GENERIC_MAPPING *GenericMapping; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( ViInitializeLocalSystemDescriptor() )
  {
    SeCaptureSubjectContextEx(0LL, Process, &SubjectContext);
    GenericMapping = IoGetFileObjectGenericMapping();
    v2 = SeAccessCheck(
           ViLocalSystemDescriptor,
           &SubjectContext,
           0,
           1u,
           0,
           0LL,
           GenericMapping,
           1,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    return 1;
  }
  return v2;
}
