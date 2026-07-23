/*
 * XREFs of VfCheckPageProtection @ 0x140928548
 * Callers:
 *     VfCheckNxPageProtection @ 0x140309CD0 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140945030 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x140945690 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409459D0 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x140945C30 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x140945EF0 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140946200 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x140946290 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x1409471E0 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x140947F60 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x140948B50 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x1409497C0 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1409286E0 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x14093607C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140406450,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140406450);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 268LL);
    _InterlockedIncrement(&dword_14041BAF4);
  }
}
