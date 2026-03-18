/*
 * XREFs of VfCheckPoolType @ 0x140965B08
 * Callers:
 *     VfCheckNxPoolType @ 0x1403276E0 (VfCheckNxPoolType.c)
 *     VerifierExAllocatePool @ 0x140972260 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolEx @ 0x140972330 (VerifierExAllocatePoolEx.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409723E0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140972520 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x140972660 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140972730 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExInitializeLookasideListEx @ 0x14097E490 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14097E5E0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x140981A70 (VerifierExAllocateCacheAwareRundownProtection.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140328B08 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140965BFC (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPoolType(int a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rdi
  const char *v6; // rdx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 1) == 0 && (a1 & 0x200) == 0 )
  {
    v4 = a3;
    v5 = a1;
    v6 = "The caller 0x%p specified an executable pool type 0x%x.";
    if ( a3 )
      v6 = "The caller 0x%p specified an executable pool type 0x%x (tag 0x%x).";
    ViCiPreprocessOptions(byte_14042B878, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(0xC4u, 0x2000uLL, a2, v5, v4, byte_14042B878);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 264LL);
    _InterlockedIncrement(&dword_140446670);
  }
}
