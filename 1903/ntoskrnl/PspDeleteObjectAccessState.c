/*
 * XREFs of PspDeleteObjectAccessState @ 0x1408C8CCC
 * Callers:
 *     PspInsertProcess @ 0x1406724A4 (PspInsertProcess.c)
 *     PspCreateProcess @ 0x1407853D0 (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 */

void __fastcall PspDeleteObjectAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
