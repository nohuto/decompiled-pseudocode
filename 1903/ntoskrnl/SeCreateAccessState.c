/*
 * XREFs of SeCreateAccessState @ 0x1405D3900
 * Callers:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     WmipCreateGuidObject @ 0x1405C0C08 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x1405C6850 (ObReferenceObjectByName.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x140618F30 (SeSubProcessToken.c)
 *     PsOpenThread @ 0x140672920 (PsOpenThread.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 *     NtGetNextThread @ 0x1406E1870 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x140741EC0 (NtGetNextProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408DA450 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140915640 (CMFCheckAccess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14003AE60 (SepCreateAccessStateFromSubjectContext.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, ACCESS_MASK a3, GENERIC_MAPPING *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  return SepCreateAccessStateFromSubjectContext(&SubjectContext, a1, a2, a3, a4);
}
