/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x1406A9580
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1402846C0 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 95);
}
