/*
 * XREFs of CmpQuitNextActiveHive @ 0x140839B88
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14027FBEC (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 204);
}
