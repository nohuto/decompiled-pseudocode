/*
 * XREFs of SeCreateAccessStateEx @ 0x140678640
 * Callers:
 *     PspInsertThread @ 0x1405E9524 (PspInsertThread.c)
 *     PspInsertProcess @ 0x140677BB8 (PspInsertProcess.c)
 *     PspCombineSecurityDomains @ 0x140679448 (PspCombineSecurityDomains.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B8720 (PspOneDirectionSecurityDomainCombine.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D5000 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x14082BF10 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14003ABA0 (SepCreateAccessStateFromSubjectContext.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        PETHREAD Thread,
        PEPROCESS Process,
        _QWORD *a3,
        _QWORD *a4,
        ACCESS_MASK a5,
        GENERIC_MAPPING *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContextEx(Thread, Process, &SubjectContext);
  return SepCreateAccessStateFromSubjectContext(&SubjectContext, a3, a4, a5, a6);
}
