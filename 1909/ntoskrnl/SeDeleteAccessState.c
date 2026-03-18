/*
 * XREFs of SeDeleteAccessState @ 0x14061B630
 * Callers:
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 *     NtGetNextThread @ 0x1406E2EF0 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x140743DC0 (NtGetNextProcess.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x14082BF10 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
