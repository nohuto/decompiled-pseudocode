/*
 * XREFs of SeCreateAccessState @ 0x1405D3E00
 * Callers:
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     WmipCreateGuidObject @ 0x1405C10D8 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x1405C6D50 (ObReferenceObjectByName.c)
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 *     PsOpenThread @ 0x140678030 (PsOpenThread.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     NtGetNextThread @ 0x1406E2EF0 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x140743DC0 (NtGetNextProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408D9D50 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x1409150A0 (CMFCheckAccess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14003ABA0 (SepCreateAccessStateFromSubjectContext.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, ACCESS_MASK a3, GENERIC_MAPPING *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  return SepCreateAccessStateFromSubjectContext(&SubjectContext, a1, a2, a3, a4);
}
