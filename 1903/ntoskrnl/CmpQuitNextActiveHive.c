/*
 * XREFs of CmpQuitNextActiveHive @ 0x14083A528
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14027FE8C (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 204);
}
