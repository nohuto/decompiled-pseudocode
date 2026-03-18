/*
 * XREFs of SeDeleteAccessState @ 0x140619B20
 * Callers:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FE180 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeSubProcessToken @ 0x140618F30 (SeSubProcessToken.c)
 *     NtGetNextThread @ 0x1406E1870 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x140741EC0 (NtGetNextProcess.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082BCB4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x14082C810 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
