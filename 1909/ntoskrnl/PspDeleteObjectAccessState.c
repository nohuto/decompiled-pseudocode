/*
 * XREFs of PspDeleteObjectAccessState @ 0x1408C85AC
 * Callers:
 *     PspInsertProcess @ 0x140677BB8 (PspInsertProcess.c)
 *     PspCreateProcess @ 0x140787730 (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

void __fastcall PspDeleteObjectAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
