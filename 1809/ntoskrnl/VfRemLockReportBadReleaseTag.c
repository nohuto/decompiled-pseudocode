/*
 * XREFs of VfRemLockReportBadReleaseTag @ 0x140934824
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x14011EDF0 (IoReleaseRemoveLockEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseTag(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD5uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return 1LL;
}
