/*
 * XREFs of VfCheckPageProtection @ 0x140965A64
 * Callers:
 *     VfCheckNxPageProtection @ 0x1403276C0 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140983A00 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x140984060 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409843A0 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x140984600 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x1409848C0 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140984BD0 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x140984C60 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x140985BC0 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x140986940 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x140987530 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x1409881A0 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140328B08 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140965BFC (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_14042B874,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_14042B874);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 268LL);
    _InterlockedIncrement(&dword_140446674);
  }
}
