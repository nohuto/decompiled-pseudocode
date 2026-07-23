/*
 * XREFs of SeCreateAccessStateEx @ 0x140613280
 * Callers:
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 *     PspCombineSecurityDomains @ 0x14061204C (PspCombineSecurityDomains.c)
 *     SeCreateAccessState @ 0x140613230 (SeCreateAccessState.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7BE4 (PspOneDirectionSecurityDomainCombine.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406CB250 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407F3AB8 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        _QWORD *a3,
        _QWORD *a4,
        ACCESS_MASK a5,
        GENERIC_MAPPING *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(a1, a2, &SubjectContext);
  return SepCreateAccessStateFromSubjectContext(&SubjectContext, a3, a4, a5, a6);
}
