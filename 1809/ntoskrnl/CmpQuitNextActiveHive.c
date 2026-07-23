/*
 * XREFs of CmpQuitNextActiveHive @ 0x1408021CC
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14026C634 (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 204);
}
